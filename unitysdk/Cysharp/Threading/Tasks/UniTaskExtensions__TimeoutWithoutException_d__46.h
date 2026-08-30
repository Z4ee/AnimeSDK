#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/DelayType.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__TIMEOUTWITHOUTEXCEPTION_D__46_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3BB8160)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__TIMEOUTWITHOUTEXCEPTION_D__46_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10F00)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskExtensions__TimeoutWithoutException_d__46_TypeDefinitionIndex = 42841;

	struct alignas(8) UniTaskExtensions__TimeoutWithoutException_d__46
	{
		::System::Threading::CancellationTokenSource* _delayCancellationTokenSource_5__2; // 0x10
		::Cysharp::Threading::Tasks::UniTask task; // 0x18
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> __t__builder; // 0x28
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::ValueTuple_3<::System::Int32, ::System::Boolean, ::System::Boolean>> __u__1; // 0x40
		::System::Threading::CancellationTokenSource* taskCancellationTokenSource; // 0x58
		::Cysharp::Threading::Tasks::DelayType delayType; // 0x60
		::System::TimeSpan timeout; // 0x68
		::System::Int32 __1__state; // 0x70
		::Cysharp::Threading::Tasks::PlayerLoopTiming timeoutCheckTiming; // 0x74

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__TIMEOUTWITHOUTEXCEPTION_D__46_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__TIMEOUTWITHOUTEXCEPTION_D__46_SETSTATEMACHINE_OFFSET))(this, a1);
		}
	};
}
