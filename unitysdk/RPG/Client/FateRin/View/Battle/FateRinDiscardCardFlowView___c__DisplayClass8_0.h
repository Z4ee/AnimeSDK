#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudCardPileBtnViewModel; }
namespace RPG::Client::FateRin::View::Battle { class FateRinDiscardCardFlowView; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD029740)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW___C__DISPLAYCLASS8_0___CREATEPERCARDCOMMAND_B__0_OFFSET UNITYSDK_OFFSET(0xD029EB0)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinDiscardCardFlowView___c__DisplayClass8_0_TypeDefinitionIndex = 79358;

	class FateRinDiscardCardFlowView___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::RPG::Client::FateRin::View::Battle::FateRinDiscardCardFlowView* __4__this; // 0x10
		::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel* cardPileBtnVm; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void __CreatePerCardCommand_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW___C__DISPLAYCLASS8_0___CREATEPERCARDCOMMAND_B__0_OFFSET))(this);
		}
	};
}
