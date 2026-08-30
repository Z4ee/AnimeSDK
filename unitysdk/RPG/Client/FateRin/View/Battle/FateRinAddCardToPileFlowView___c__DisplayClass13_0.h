#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudCardPileBtnViewModel; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD018950)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW___C__DISPLAYCLASS13_0___CREATEPERCARDCOMMAND_B__0_OFFSET UNITYSDK_OFFSET(0xD0192F0)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinAddCardToPileFlowView___c__DisplayClass13_0_TypeDefinitionIndex = 79335;

	class FateRinAddCardToPileFlowView___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::UnityEngine::Animation* targetAnimation; // 0x10
		::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel* cardPileBtnVm; // 0x18
		::System::String* targetAnimationClipName; // 0x20
		::System::Boolean isDrawPile; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void __CreatePerCardCommand_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW___C__DISPLAYCLASS13_0___CREATEPERCARDCOMMAND_B__0_OFFSET))(this);
		}
	};
}
