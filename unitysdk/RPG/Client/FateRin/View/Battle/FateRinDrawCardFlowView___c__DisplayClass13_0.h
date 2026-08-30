#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::View::Card { class FateRinCardPosControlView; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD02AC80)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW___C__DISPLAYCLASS13_0___CREATECARDANIMATORPLAYACTIONCOMMAND_B__0_OFFSET UNITYSDK_OFFSET(0xD02ADB0)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinDrawCardFlowView___c__DisplayClass13_0_TypeDefinitionIndex = 79362;

	class FateRinDrawCardFlowView___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* posCtrl; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void __CreateCardAnimatorPlayActionCommand_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW___C__DISPLAYCLASS13_0___CREATECARDANIMATORPLAYACTIONCOMMAND_B__0_OFFSET))(this);
		}
	};
}
