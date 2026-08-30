#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace Cysharp::Threading::Tasks::Linq { template <typename T> class ToUniTaskAsyncEnumerableUniTask_1__ToUniTaskAsyncEnumerableUniTask; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int ToUniTaskAsyncEnumerableUniTask_1__ToUniTaskAsyncEnumerableUniTask__MoveNextAsync_d__7_TypeDefinitionIndex = 44570;

	template <typename T>
	struct ToUniTaskAsyncEnumerableUniTask_1__ToUniTaskAsyncEnumerableUniTask__MoveNextAsync_d__7
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> __t__builder; // 0x0
		::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableUniTask_1__ToUniTaskAsyncEnumerableUniTask<T>* __4__this; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<T> __u__1; // 0x0
	};
}
