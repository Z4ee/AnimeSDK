#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudCardPileBtnViewModel; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5CBF80)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW___C__DISPLAYCLASS15_0___CREATEADDDRAWINFLIGHTACTIONCOMMAND_B__0_OFFSET UNITYSDK_OFFSET(0x1B5CC230)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinDrawCardFlowView___c__DisplayClass15_0_TypeDefinitionIndex = 79362;

	class FateRinDrawCardFlowView___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel* vm; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void __CreateAddDrawInFlightActionCommand_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW___C__DISPLAYCLASS15_0___CREATEADDDRAWINFLIGHTACTIONCOMMAND_B__0_OFFSET))(this);
		}
	};
}
