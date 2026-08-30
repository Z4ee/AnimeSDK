#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/Battle/FateRinBattleHudCardAreaViewModel_CardCycleAnimationRole.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin { class CardStateChangeContext; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudHandCardDisplayViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudHandCardViewModel; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDPRESENTATIONTRANSITION__CTOR_OFFSET UNITYSDK_OFFSET(0xCF6DC90)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudCardAreaViewModel_CardPresentationTransition_TypeDefinitionIndex = 79564;

	class FateRinBattleHudCardAreaViewModel_CardPresentationTransition : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel*>* AffectedHandCardVMs; // 0x10
		::RPG::Client::FateRin::CardStateChangeContext* Context; // 0x18
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardDisplayViewModel*>* AddedCardVMs; // 0x20
		::RPG::Client::FateRin::Battle::FateRinBattleHudCardAreaViewModel_CardCycleAnimationRole Role; // 0x28

		::System::Void _ctor(::RPG::Client::FateRin::CardStateChangeContext* a1, ::RPG::Client::FateRin::Battle::FateRinBattleHudCardAreaViewModel_CardCycleAnimationRole a2, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel*>* a3, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardDisplayViewModel*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CardStateChangeContext*, ::RPG::Client::FateRin::Battle::FateRinBattleHudCardAreaViewModel_CardCycleAnimationRole, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel*>*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardDisplayViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDCARDAREAVIEWMODEL_CARDPRESENTATIONTRANSITION__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
