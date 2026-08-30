#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace Cysharp::Threading::Tasks::Linq { template <typename T> class OrderedAsyncEnumerable_1__OrderedAsyncEnumerator; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int OrderedAsyncEnumerable_1__OrderedAsyncEnumerator__CreateSortSource_d__11_TypeDefinitionIndex = 44389;

	template <typename TElement>
	struct OrderedAsyncEnumerable_1__OrderedAsyncEnumerator__CreateSortSource_d__11
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x0
		::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>* __4__this; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Il2CppArray<TElement>*> __u__1; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Il2CppArray<::System::Int32>*> __u__2; // 0x0
	};
}
