#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/RPG/Client/B51Racing/B51RacingGameplaySpeedPanelControl_SpeedBarGear.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::B51Racing { class B51RacingGameplaySpeedPanelControl; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL___TRANSITIONSPEEDBARTOGEARASYNC_D__21_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x149D30)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL___TRANSITIONSPEEDBARTOGEARASYNC_D__21_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1020)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingGameplaySpeedPanelControl___TransitionSpeedBarToGearAsync_d__21_TypeDefinitionIndex = 80573;

	struct alignas(8) B51RacingGameplaySpeedPanelControl___TransitionSpeedBarToGearAsync_d__21
	{
		::RPG::Client::B51Racing::B51RacingGameplaySpeedPanelControl* __4__this; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x18
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x28
		::RPG::Client::B51Racing::B51RacingGameplaySpeedPanelControl_SpeedBarGear targetGear; // 0x38
		::System::Int32 __1__state; // 0x3C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL___TRANSITIONSPEEDBARTOGEARASYNC_D__21_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL___TRANSITIONSPEEDBARTOGEARASYNC_D__21_SETSTATEMACHINE_OFFSET))(this, a1);
		}
	};
}
