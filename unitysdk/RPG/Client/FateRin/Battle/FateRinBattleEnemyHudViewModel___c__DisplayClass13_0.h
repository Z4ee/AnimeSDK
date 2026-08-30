#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0471857D35382E2E;
namespace RPG::Client::FateRin::Battle { class FateRinBattleEnemyHudSingleViewModel; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCF64B90)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL___C__DISPLAYCLASS13_0___REFRESHVIEWMODEL_B__0_OFFSET UNITYSDK_OFFSET(0xCF64DD0)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleEnemyHudViewModel___c__DisplayClass13_0_TypeDefinitionIndex = 79544;

	class FateRinBattleEnemyHudViewModel___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::RPG::Client::FateRin::Battle::FateRinBattleEnemyHudSingleViewModel* vm; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __RefreshViewModel_b__0(::Class_1_0471857D35382E2E* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_0471857D35382E2E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL___C__DISPLAYCLASS13_0___REFRESHVIEWMODEL_B__0_OFFSET))(this, a1);
		}
	};
}
