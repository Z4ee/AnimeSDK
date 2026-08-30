#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace Cysharp::Threading::Tasks::Linq { template <typename T1, typename T2> class AsyncSelectorWithCancellationEnumerableSorter_2; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int AsyncSelectorWithCancellationEnumerableSorter_2__ComputeKeysAsync_d__7_TypeDefinitionIndex = 44386;

	template <typename TElement, typename TKey>
	struct AsyncSelectorWithCancellationEnumerableSorter_2__ComputeKeysAsync_d__7
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x0
		::Cysharp::Threading::Tasks::Linq::AsyncSelectorWithCancellationEnumerableSorter_2<TElement, TKey>* __4__this; // 0x0
		::System::Int32 count; // 0x0
		::Il2CppArray<TElement>* elements; // 0x0
		::System::Int32 _i_5__2; // 0x0
		::Il2CppArray<TKey>* __7__wrap2; // 0x0
		::System::Int32 __7__wrap3; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<TKey> __u__1; // 0x0
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__2; // 0x0
	};
}
