#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIRidusGotBooPageController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__STARTFEVERTIME_D__52_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x82EE60)
#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__STARTFEVERTIME_D__52_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooPageController__StartFeverTime_d__52_TypeDefinitionIndex = 40730;

	struct alignas(8) UIRidusGotBooPageController__StartFeverTime_d__52
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x20
		::MoleMole::UIRidusGotBooPageController* __4__this; // 0x30
		::System::Int32 __1__state; // 0x38
		::System::Boolean _firstSkillPlayed_5__4; // 0x3C
		::System::Boolean _playEndEffect_5__5; // 0x3D
		::System::Single _playerInteractTime_5__2; // 0x40
		::System::Single _remainSwitchFeverTime_5__3; // 0x44

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__STARTFEVERTIME_D__52_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__STARTFEVERTIME_D__52_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
