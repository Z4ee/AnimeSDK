#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0471857D35382E2E;
namespace RPG::Client::FateRin::Battle { class FateRinBattleEnemyHudSingleViewModel; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL___C__DISPLAYCLASS13_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA27A20)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL___C__DISPLAYCLASS13_1___REFRESHVIEWMODEL_B__1_OFFSET UNITYSDK_OFFSET(0x1CA27D40)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleEnemyHudViewModel___c__DisplayClass13_1_TypeDefinitionIndex = 79544;

	class FateRinBattleEnemyHudViewModel___c__DisplayClass13_1 : public ::System::Object
	{
	public:
		::Class_1_0471857D35382E2E* enemyModel; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL___C__DISPLAYCLASS13_1__CTOR_OFFSET))(this);
		}

		::System::Boolean __RefreshViewModel_b__1(::RPG::Client::FateRin::Battle::FateRinBattleEnemyHudSingleViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleEnemyHudSingleViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL___C__DISPLAYCLASS13_1___REFRESHVIEWMODEL_B__1_OFFSET))(this, a1);
		}
	};
}
