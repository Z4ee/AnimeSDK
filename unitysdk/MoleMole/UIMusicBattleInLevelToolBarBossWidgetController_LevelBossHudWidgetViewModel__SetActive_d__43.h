#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6D17A92E4F636970_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIMusicBattleInLevelToolBarBossWidgetController_LevelBossHudWidgetViewModel; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIMUSICBATTLEINLEVELTOOLBARBOSSWIDGETCONTROLLER_LEVELBOSSHUDWIDGETVIEWMODEL__SETACTIVE_D__43_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x793220)
#define MOLEMOLE_UIMUSICBATTLEINLEVELTOOLBARBOSSWIDGETCONTROLLER_LEVELBOSSHUDWIDGETVIEWMODEL__SETACTIVE_D__43_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x5C4D00)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicBattleInLevelToolBarBossWidgetController_LevelBossHudWidgetViewModel__SetActive_d__43_TypeDefinitionIndex = 62787;

	struct alignas(8) UIMusicBattleInLevelToolBarBossWidgetController_LevelBossHudWidgetViewModel__SetActive_d__43
	{
		::MoleMole::UIMusicBattleInLevelToolBarBossWidgetController_LevelBossHudWidgetViewModel* __4__this; // 0x10
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_6D17A92E4F636970_Enum_3_05F7423D39739F87> __u__1; // 0x18
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x28
		::System::Int32 __1__state; // 0x48
		::System::Boolean value; // 0x4C
		::System::Boolean _cacheValue_5__2; // 0x4D

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELTOOLBARBOSSWIDGETCONTROLLER_LEVELBOSSHUDWIDGETVIEWMODEL__SETACTIVE_D__43_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELTOOLBARBOSSWIDGETCONTROLLER_LEVELBOSSHUDWIDGETVIEWMODEL__SETACTIVE_D__43_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
