#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIMUSICBATTLEINLEVELTOOLBARBOSSWIDGETCONTROLLER_LEVELBOSSHUDWIDGETVIEWMODEL__CALLDELAYED_D__58_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8111B0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELTOOLBARBOSSWIDGETCONTROLLER_LEVELBOSSHUDWIDGETVIEWMODEL__CALLDELAYED_D__58_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x61A480)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicBattleInLevelToolBarBossWidgetController_LevelBossHudWidgetViewModel__CallDelayed_d__58_TypeDefinitionIndex = 56008;

	struct alignas(8) UIMusicBattleInLevelToolBarBossWidgetController_LevelBossHudWidgetViewModel__CallDelayed_d__58
	{
		::System::Action* callback; // 0x10
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x18
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x38
		::System::Single delay; // 0x48
		::System::Int32 __1__state; // 0x4C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELTOOLBARBOSSWIDGETCONTROLLER_LEVELBOSSHUDWIDGETVIEWMODEL__CALLDELAYED_D__58_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELTOOLBARBOSSWIDGETCONTROLLER_LEVELBOSSHUDWIDGETVIEWMODEL__CALLDELAYED_D__58_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
