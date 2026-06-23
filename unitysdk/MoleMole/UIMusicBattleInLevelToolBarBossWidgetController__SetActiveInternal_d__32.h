#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIMusicBattleInLevelToolBarBossWidgetController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIMUSICBATTLEINLEVELTOOLBARBOSSWIDGETCONTROLLER__SETACTIVEINTERNAL_D__32_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7F7140)
#define MOLEMOLE_UIMUSICBATTLEINLEVELTOOLBARBOSSWIDGETCONTROLLER__SETACTIVEINTERNAL_D__32_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicBattleInLevelToolBarBossWidgetController__SetActiveInternal_d__32_TypeDefinitionIndex = 56001;

	struct alignas(8) UIMusicBattleInLevelToolBarBossWidgetController__SetActiveInternal_d__32
	{
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87> __u__1; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x20
		::MoleMole::UIMusicBattleInLevelToolBarBossWidgetController* __4__this; // 0x30
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__2; // 0x38
		::System::Int32 __1__state; // 0x48
		::System::Boolean _cacheValue_5__2; // 0x4C
		::System::Boolean value; // 0x4D

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELTOOLBARBOSSWIDGETCONTROLLER__SETACTIVEINTERNAL_D__32_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELTOOLBARBOSSWIDGETCONTROLLER__SETACTIVEINTERNAL_D__32_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
