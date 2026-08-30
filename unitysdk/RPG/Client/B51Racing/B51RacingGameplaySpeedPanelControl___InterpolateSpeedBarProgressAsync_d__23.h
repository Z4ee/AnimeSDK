#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::B51Racing { class B51RacingGameplaySpeedPanelControl; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL___INTERPOLATESPEEDBARPROGRESSASYNC_D__23_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3B8A660)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL___INTERPOLATESPEEDBARPROGRESSASYNC_D__23_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10F00)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingGameplaySpeedPanelControl___InterpolateSpeedBarProgressAsync_d__23_TypeDefinitionIndex = 80571;

	struct alignas(8) B51RacingGameplaySpeedPanelControl___InterpolateSpeedBarProgressAsync_d__23
	{
		::System::Threading::CancellationTokenSource* cts; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x18
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x28
		::RPG::Client::B51Racing::B51RacingGameplaySpeedPanelControl* __4__this; // 0x38
		::System::Single _elapsed_5__3; // 0x40
		::System::Single duration; // 0x44
		::System::Int32 __1__state; // 0x48
		::System::Single targetProgress; // 0x4C
		::System::Single _startProgress_5__2; // 0x50

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL___INTERPOLATESPEEDBARPROGRESSASYNC_D__23_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL___INTERPOLATESPEEDBARPROGRESSASYNC_D__23_SETSTATEMACHINE_OFFSET))(this, a1);
		}
	};
}
