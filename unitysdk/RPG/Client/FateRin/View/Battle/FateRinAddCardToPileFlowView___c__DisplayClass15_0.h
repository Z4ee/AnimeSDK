#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudHandCardDisplayViewModel; }
namespace RPG::Client::FateRin::View::Battle { class FateRinEffectController; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD018B40)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW___C__DISPLAYCLASS15_0___CREATEADDCARDANIMATORPLAYACTIONCOMMAND_B__0_OFFSET UNITYSDK_OFFSET(0xD019430)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinAddCardToPileFlowView___c__DisplayClass15_0_TypeDefinitionIndex = 79336;

	class FateRinAddCardToPileFlowView___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::Object* negativeEffectOwner; // 0x10
		::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* roots; // 0x18
		::RPG::Client::FateRin::View::Battle::FateRinEffectController* effectController; // 0x20
		::System::Collections::Generic::IList_1<::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardDisplayViewModel*>* addedCardVms; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void __CreateAddCardAnimatorPlayActionCommand_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW___C__DISPLAYCLASS15_0___CREATEADDCARDANIMATORPLAYACTIONCOMMAND_B__0_OFFSET))(this);
		}
	};
}
