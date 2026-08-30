#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace Cysharp::Threading::Tasks::Linq { template <typename T1, typename T2, typename T3> class GroupByAwaitWithCancellation_3__GroupByAwaitWithCancellation; }
namespace System::Linq { template <typename T1, typename T2> class ILookup_2; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int GroupByAwaitWithCancellation_3__GroupByAwaitWithCancellation__CreateLookup_d__12_TypeDefinitionIndex = 44247;

	template <typename TSource, typename TKey, typename TElement>
	struct GroupByAwaitWithCancellation_3__GroupByAwaitWithCancellation__CreateLookup_d__12
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x0
		::Cysharp::Threading::Tasks::Linq::GroupByAwaitWithCancellation_3__GroupByAwaitWithCancellation<TSource, TKey, TElement>* __4__this; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Linq::ILookup_2<TKey, TElement>*> __u__1; // 0x0
	};
}
