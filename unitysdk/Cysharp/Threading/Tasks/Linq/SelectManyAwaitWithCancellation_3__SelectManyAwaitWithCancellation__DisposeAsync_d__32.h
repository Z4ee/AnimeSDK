#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace Cysharp::Threading::Tasks::Linq { template <typename T1, typename T2, typename T3> class SelectManyAwaitWithCancellation_3__SelectManyAwaitWithCancellation; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int SelectManyAwaitWithCancellation_3__SelectManyAwaitWithCancellation__DisposeAsync_d__32_TypeDefinitionIndex = 44432;

	template <typename TSource, typename TCollection, typename TResult>
	struct SelectManyAwaitWithCancellation_3__SelectManyAwaitWithCancellation__DisposeAsync_d__32
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x0
		::Cysharp::Threading::Tasks::Linq::SelectManyAwaitWithCancellation_3__SelectManyAwaitWithCancellation<TSource, TCollection, TResult>* __4__this; // 0x0
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x0
	};
}
