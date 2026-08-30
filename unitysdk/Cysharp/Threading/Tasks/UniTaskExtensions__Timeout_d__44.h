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

#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__TIMEOUT_D__44_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3BA9E00)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS__TIMEOUT_D__44_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1020)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskExtensions__Timeout_d__44_TypeDefinitionIndex = 42839;

	struct alignas(8) UniTaskExtensions__Timeout_d__44
	{
		::System::Threading::CancellationTokenSource* _delayCancellationTokenSource_5__2; // 0x10
		::System::Threading::CancellationTokenSource* taskCancellationTokenSource; // 0x18
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x20
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::ValueTuple_3<::System::Int32, ::System::Boolean, ::System::Boolean>> __u__1; // 0x30
		::Cysharp::Threading::Tasks::UniTask task; // 0x48
		::Cysharp::Threading::Tasks::PlayerLoopTiming timeoutCheckTiming; // 0x58
		::Cysharp::Threading::Tasks::DelayType delayType; // 0x5C
		::System::Int32 __1__state; // 0x60
		::System::TimeSpan timeout; // 0x68

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
