#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace Cysharp::Threading::Tasks::Linq { template <typename T1, typename T2, typename T3> class ZipAwaitWithCancellation_3__ZipAwaitWithCancellation; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int ZipAwaitWithCancellation_3__ZipAwaitWithCancellation__DisposeAsync_d__21_TypeDefinitionIndex = 44608;

	template <typename TFirst, typename TSecond, typename TResult>
	struct ZipAwaitWithCancellation_3__ZipAwaitWithCancellation__DisposeAsync_d__21
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x0
		::Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst, TSecond, TResult>* __4__this; // 0x0
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x0
	};
}
