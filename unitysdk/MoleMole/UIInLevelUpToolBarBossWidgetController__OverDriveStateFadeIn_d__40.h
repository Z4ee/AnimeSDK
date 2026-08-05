#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIInLevelUpToolBarBossWidgetController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER__OVERDRIVESTATEFADEIN_D__40_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8842D0)
#define MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER__OVERDRIVESTATEFADEIN_D__40_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelUpToolBarBossWidgetController__OverDriveStateFadeIn_d__40_TypeDefinitionIndex = 71541;

	struct alignas(8) UIInLevelUpToolBarBossWidgetController__OverDriveStateFadeIn_d__40
	{
		::MoleMole::UIInLevelUpToolBarBossWidgetController* __4__this; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x18
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87> __u__1; // 0x28
		::System::Int32 __1__state; // 0x38

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER__OVERDRIVESTATEFADEIN_D__40_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELUPTOOLBARBOSSWIDGETCONTROLLER__OVERDRIVESTATEFADEIN_D__40_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
