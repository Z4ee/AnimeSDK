#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::View::Card { class FateRinCardPosControlView; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5CAEA0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW___C__DISPLAYCLASS10_0___CREATECARDANIMATORPLAYACTIONCOMMAND_B__0_OFFSET UNITYSDK_OFFSET(0x1B5CAF70)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinDiscardCardFlowView___c__DisplayClass10_0_TypeDefinitionIndex = 79354;

	class FateRinDiscardCardFlowView___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* posCtrl; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void __CreateCardAnimatorPlayActionCommand_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW___C__DISPLAYCLASS10_0___CREATECARDANIMATORPLAYACTIONCOMMAND_B__0_OFFSET))(this);
		}
	};
}
