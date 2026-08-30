#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/DelayType.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__TIMEOUT_D__44_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3BB8150)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__TIMEOUT_D__44_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10F00)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskExtensions__Timeout_d__44_TypeDefinitionIndex = 42839;

	struct alignas(8) UniTaskExtensions__Timeout_d__44
	{
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::ValueTuple_3<::System::Int32, ::System::Boolean, ::System::Boolean>> __u__1; // 0x10
		::System::Threading::CancellationTokenSource* taskCancellationTokenSource; // 0x28
		::System::Threading::CancellationTokenSource* _delayCancellationTokenSource_5__2; // 0x30
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x38
		::Cysharp::Threading::Tasks::UniTask task; // 0x48
		::System::Int32 __1__state; // 0x58
		::System::TimeSpan timeout; // 0x60
		::Cysharp::Threading::Tasks::DelayType delayType; // 0x68
		::Cysharp::Threading::Tasks::PlayerLoopTiming timeoutCheckTiming; // 0x6C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__TIMEOUT_D__44_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__TIMEOUT_D__44_SETSTATEMACHINE_OFFSET))(this, a1);
		}
	};
}
