#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Battle { class HighLightAirCombatSubSystem; }
namespace MoleMole::Battle { class HighLightAirCombatSubSystem_RuntimeMonsterGroup; }
namespace MoleMole::Config { class HighLightAirCombatMonster; }
namespace MoleMole::Config { class HighLightAirCombatMonsters; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM__CREATEMONSTERBYGROUP_D__141_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7B9340)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM__CREATEMONSTERBYGROUP_D__141_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int HighLightAirCombatSubSystem__CreateMonsterByGroup_d__141_TypeDefinitionIndex = 68745;

	struct alignas(8) HighLightAirCombatSubSystem__CreateMonsterByGroup_d__141
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x10
		::MoleMole::Battle::HighLightAirCombatSubSystem_RuntimeMonsterGroup* _monsterGroup_5__3; // 0x18
		::System::Collections::Generic::List_1_Enumerator<::MoleMole::Config::HighLightAirCombatMonster*> __7__wrap3; // 0x20
		::MoleMole::Battle::HighLightAirCombatSubSystem* __4__this; // 0x38
		::MoleMole::Config::HighLightAirCombatMonsters* _configGroup_5__2; // 0x40
		::System::String* name; // 0x48
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x50
		::System::Int32 __1__state; // 0x60

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM__CREATEMONSTERBYGROUP_D__141_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM__CREATEMONSTERBYGROUP_D__141_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
