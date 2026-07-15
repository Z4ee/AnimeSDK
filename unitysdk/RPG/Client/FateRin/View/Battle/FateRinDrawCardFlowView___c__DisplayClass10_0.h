#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudCardAreaViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudHandCardViewModel; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19710690)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW___C__DISPLAYCLASS10_0___CREATEPERCARDCOMMAND_B__0_OFFSET UNITYSDK_OFFSET(0x19710C40)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinDrawCardFlowView___c__DisplayClass10_0_TypeDefinitionIndex = 75726;

	class FateRinDrawCardFlowView___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel* handCardVm; // 0x10
		::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel* cardAreaVm; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void __CreatePerCardCommand_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW___C__DISPLAYCLASS10_0___CREATEPERCARDCOMMAND_B__0_OFFSET))(this);
		}
	};
}
