#include <iostream>

using namespace std;

void arr_print(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }
}

int main()
{
    int size = 100;
    int count = 0;
    int guess[size];

    for(int i = 0; i < size; i++)
    {
        if(cin >> guess[i]){
        count++;
    } else {
    break;
    }
}
arr_print(guess, count);
cin.clear();
return 0;
}
