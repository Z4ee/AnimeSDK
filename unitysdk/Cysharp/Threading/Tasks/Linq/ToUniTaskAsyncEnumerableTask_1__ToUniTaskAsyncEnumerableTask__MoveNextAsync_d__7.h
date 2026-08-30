#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

namespace Cysharp::Threading::Tasks::Linq { template <typename T> class ToUniTaskAsyncEnumerableTask_1__ToUniTaskAsyncEnumerableTask; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int ToUniTaskAsyncEnumerableTask_1__ToUniTaskAsyncEnumerableTask__MoveNextAsync_d__7_TypeDefinitionIndex = 44567;

	template <typename T>
	struct ToUniTaskAsyncEnumerableTask_1__ToUniTaskAsyncEnumerableTask__MoveNextAsync_d__7
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> __t__builder; // 0x0
		::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableTask_1__ToUniTaskAsyncEnumerableTask<T>* __4__this; // 0x0
		::System::Runtime::CompilerServices::TaskAwaiter_1<T> __u__1; // 0x0
	};
}
