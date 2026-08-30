#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/DelayType.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskExtensions__Timeout_d__45_1_TypeDefinitionIndex = 42840;

	template <typename T>
	struct UniTaskExtensions__Timeout_d__45_1
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<T> __t__builder; // 0x0
		::System::TimeSpan timeout; // 0x0
		::Cysharp::Threading::Tasks::DelayType delayType; // 0x0
		::Cysharp::Threading::Tasks::PlayerLoopTiming timeoutCheckTiming; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1<T> task; // 0x0
		::System::Threading::CancellationTokenSource* taskCancellationTokenSource; // 0x0
		::System::Threading::CancellationTokenSource* _delayCancellationTokenSource_5__2; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1<T> _memorizedTask_5__3; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::ValueTuple_3<::System::Int32, ::System::Boolean, ::System::Boolean>> __u__1; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<T> __u__2; // 0x0
	};
}
