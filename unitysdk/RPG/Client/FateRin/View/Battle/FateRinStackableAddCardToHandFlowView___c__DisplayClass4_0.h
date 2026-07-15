#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::View::Card { class FateRinCardPosControlView; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19715ED0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW___C__DISPLAYCLASS4_0___CREATECLEARSKIPLAYOUTCOMMAND_B__0_OFFSET UNITYSDK_OFFSET(0x197168C0)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinStackableAddCardToHandFlowView___c__DisplayClass4_0_TypeDefinitionIndex = 75745;

	class FateRinStackableAddCardToHandFlowView___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* posCtrl; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void __CreateClearSkipLayoutCommand_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW___C__DISPLAYCLASS4_0___CREATECLEARSKIPLAYOUTCOMMAND_B__0_OFFSET))(this);
		}
	};
}
