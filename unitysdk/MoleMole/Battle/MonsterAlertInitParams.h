#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config { class ConfigMonsterAlertTrait; }
namespace System { class String; }

#define MOLEMOLE_BATTLE_MONSTERALERTINITPARAMS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x79C790)
#define MOLEMOLE_BATTLE_MONSTERALERTINITPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x79C720)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int MonsterAlertInitParams_TypeDefinitionIndex = 74311;

	struct alignas(8) MonsterAlertInitParams
	{
		::System::Boolean UseNewMode; // 0x10
		::System::String* AlertConfigKey; // 0x18
		::System::Boolean IsSetAlertValueMax; // 0x20
		::System::Boolean EnterBattleRegardlessOfSameArea; // 0x21
		::System::Boolean NoStackAlertReduceOnEnemyExitSameArea; // 0x22
		::System::Boolean IsHoldAlertValue; // 0x23
		::System::Int32 AlertGroup; // 0x24
		::System::Nullable_1<::System::Boolean> MuteLevelHudOnIdle; // 0x28
		::System::Nullable_1<::System::Boolean> ShowMonsterHPWhenLevelHUDShowOnIdle; // 0x2A
		::System::Nullable_1<::System::Boolean> MuteLevelHudOnEnterBattle; // 0x2C

		::System::Void _ctor(::System::Boolean useNewMode, ::System::String* alertConfigKey, ::System::Boolean isSetAlertValueMax, ::System::Boolean enterBattleRegardlessOfSameArea, ::System::Boolean noStackAlertReduceOnEnemyExitSameArea, ::System::Boolean isHoldAlertValue, ::System::Int32 alertGroup, ::System::Boolean muteLevelHudOnIdle, ::System::Boolean showMonsterHPWhenLevelHUDShowOnIdle, ::System::Boolean muteLevelHudOnEnterBattle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MONSTERALERTINITPARAMS__CTOR_OFFSET))(this, useNewMode, alertConfigKey, isSetAlertValueMax, enterBattleRegardlessOfSameArea, noStackAlertReduceOnEnemyExitSameArea, isHoldAlertValue, alertGroup, muteLevelHudOnIdle, showMonsterHPWhenLevelHUDShowOnIdle, muteLevelHudOnEnterBattle);
		}

		::System::Void _ctor_1(::MoleMole::Config::ConfigMonsterAlertTrait* alertTrait)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMonsterAlertTrait*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MONSTERALERTINITPARAMS__CTOR_1_OFFSET))(this, alertTrait);
		}
	};
}
