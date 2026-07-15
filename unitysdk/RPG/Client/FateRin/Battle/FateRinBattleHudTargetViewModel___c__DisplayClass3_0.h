#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0471857D35382E2E;
namespace RPG::Client::FateRin::Battle { class FateRinBattleHudTargetSingleViewModel; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B48EE70)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL___C__DISPLAYCLASS3_0___REFRESHVIEWMODEL_B__1_OFFSET UNITYSDK_OFFSET(0x1B48EE80)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudTargetViewModel___c__DisplayClass3_0_TypeDefinitionIndex = 75979;

	class FateRinBattleHudTargetViewModel___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::Client::FateRin::Battle::FateRinBattleHudTargetSingleViewModel* x; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __RefreshViewModel_b__1(::Class_1_0471857D35382E2E* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_0471857D35382E2E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL___C__DISPLAYCLASS3_0___REFRESHVIEWMODEL_B__1_OFFSET))(this, a1);
		}
	};
}
