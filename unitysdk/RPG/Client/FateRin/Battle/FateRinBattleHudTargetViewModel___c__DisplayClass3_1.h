#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0471857D35382E2E;
namespace RPG::Client::FateRin::Battle { class FateRinBattleHudTargetSingleViewModel; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL___C__DISPLAYCLASS3_1__CTOR_OFFSET UNITYSDK_OFFSET(0xCF837E0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL___C__DISPLAYCLASS3_1___REFRESHVIEWMODEL_B__2_OFFSET UNITYSDK_OFFSET(0xCF83A80)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudTargetViewModel___c__DisplayClass3_1_TypeDefinitionIndex = 79614;

	class FateRinBattleHudTargetViewModel___c__DisplayClass3_1 : public ::System::Object
	{
	public:
		::Class_1_0471857D35382E2E* enemyModel; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL___C__DISPLAYCLASS3_1__CTOR_OFFSET))(this);
		}

		::System::Boolean __RefreshViewModel_b__2(::RPG::Client::FateRin::Battle::FateRinBattleHudTargetSingleViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudTargetSingleViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL___C__DISPLAYCLASS3_1___REFRESHVIEWMODEL_B__2_OFFSET))(this, a1);
		}
	};
}
