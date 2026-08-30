#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Linq/AsyncEnumerableSorter_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int SyncSelectorAsyncEnumerableSorter_2_TypeDefinitionIndex = 44381;

	template <typename TElement, typename TKey>
	class SyncSelectorAsyncEnumerableSorter_2 : public ::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>
	{
	public:
		::System::Func_2<TElement, TKey>* keySelector; // 0x0
		::System::Collections::Generic::IComparer_1<TKey>* comparer; // 0x0
		::System::Boolean descending; // 0x0
		::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>* next; // 0x0
		::Il2CppArray<TKey>* keys; // 0x0
	};
}
