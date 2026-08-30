#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace Cysharp::Threading::Tasks::Linq { template <typename T1, typename T2, typename T3, typename T4> class GroupJoinAwait_4__GroupJoinAwait; }
namespace System::Linq { template <typename T1, typename T2> class ILookup_2; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int GroupJoinAwait_4__GroupJoinAwait__CreateLookup_d__22_TypeDefinitionIndex = 44256;

	template <typename TOuter, typename TInner, typename TKey, typename TResult>
	struct GroupJoinAwait_4__GroupJoinAwait__CreateLookup_d__22
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x0
		::Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter, TInner, TKey, TResult>* __4__this; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Linq::ILookup_2<TKey, TInner>*> __u__1; // 0x0
	};
}
