#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace Cysharp::Threading::Tasks::Linq { template <typename T1, typename T2, typename T3, typename T4, typename T5> class CombineLatest_5__CombineLatest; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int CombineLatest_5__CombineLatest__DisposeAsync_d__43_TypeDefinitionIndex = 44144;

	template <typename T1, typename T2, typename T3, typename T4, typename TResult>
	struct CombineLatest_5__CombineLatest__DisposeAsync_d__43
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x0
		::Cysharp::Threading::Tasks::Linq::CombineLatest_5__CombineLatest<T1, T2, T3, T4, TResult>* __4__this; // 0x0
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x0
	};
}
