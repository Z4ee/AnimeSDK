#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIMusicBattleInLevelToolBarBossWidgetController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIMUSICBATTLEINLEVELTOOLBARBOSSWIDGETCONTROLLER__OVERDRIVESTATEFADEIN_D__36_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x871C30)
#define MOLEMOLE_UIMUSICBATTLEINLEVELTOOLBARBOSSWIDGETCONTROLLER__OVERDRIVESTATEFADEIN_D__36_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicBattleInLevelToolBarBossWidgetController__OverDriveStateFadeIn_d__36_TypeDefinitionIndex = 77653;

	struct alignas(8) UIMusicBattleInLevelToolBarBossWidgetController__OverDriveStateFadeIn_d__36
	{
		::MoleMole::UIMusicBattleInLevelToolBarBossWidgetController* __4__this; // 0x10
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87> __u__1; // 0x18
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x28
		::System::Int32 __1__state; // 0x38

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELTOOLBARBOSSWIDGETCONTROLLER__OVERDRIVESTATEFADEIN_D__36_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELTOOLBARBOSSWIDGETCONTROLLER__OVERDRIVESTATEFADEIN_D__36_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
