#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace Cysharp::Threading::Tasks::Linq { template <typename T> class AsyncEnumerableSorter_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int AsyncEnumerableSorter_1__SortAsync_d__2_TypeDefinitionIndex = 44380;

	template <typename TElement>
	struct AsyncEnumerableSorter_1__SortAsync_d__2
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Il2CppArray<::System::Int32>*> __t__builder; // 0x0
		::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>* __4__this; // 0x0
		::Il2CppArray<TElement>* elements; // 0x0
		::System::Int32 count; // 0x0
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x0
	};
}
