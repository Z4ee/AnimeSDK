#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::Battle { class FateRinBattleHudEndActionButtonViewModel; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENDACTIONBUTTONVIEWMODEL___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA3AF30)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENDACTIONBUTTONVIEWMODEL___C__DISPLAYCLASS5_0___ENDPLAYERACTION_B__0_OFFSET UNITYSDK_OFFSET(0x1CA3B390)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENDACTIONBUTTONVIEWMODEL___C__DISPLAYCLASS5_0___ENDPLAYERACTION_B__3_OFFSET UNITYSDK_OFFSET(0x1CA3B3F0)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudEndActionButtonViewModel___c__DisplayClass5_0_TypeDefinitionIndex = 79580;

	class FateRinBattleHudEndActionButtonViewModel___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::RPG::Client::FateRin::Battle::FateRinBattleHudEndActionButtonViewModel* __4__this; // 0x10
		::System::Boolean notWarningToday; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENDACTIONBUTTONVIEWMODEL___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void __EndPlayerAction_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENDACTIONBUTTONVIEWMODEL___C__DISPLAYCLASS5_0___ENDPLAYERACTION_B__0_OFFSET))(this, a1);
		}

		::System::Void __EndPlayerAction_b__3(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENDACTIONBUTTONVIEWMODEL___C__DISPLAYCLASS5_0___ENDPLAYERACTION_B__3_OFFSET))(this, a1);
		}
	};
}
