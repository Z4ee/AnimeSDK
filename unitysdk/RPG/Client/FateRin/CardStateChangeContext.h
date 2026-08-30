#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BattleAddCardReason.h"
#include "unitysdk/RPG/Client/FateRin/CardStateChangeReason.h"
#include "unitysdk/RPG/GameCore/FateRinCardPileType.h"
#include "unitysdk/System/Object.h"

class Class_1_B71FC14BA77C9F77;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_FATERIN_CARDSTATECHANGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xCFF48F0)

namespace RPG::Client::FateRin
{
	inline static constexpr unsigned int CardStateChangeContext_TypeDefinitionIndex = 79276;

	class CardStateChangeContext : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::Class_1_B71FC14BA77C9F77*>* AddedCards; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::Class_1_B71FC14BA77C9F77*>* HandSnapshot; // 0x18
		::System::Collections::Generic::IReadOnlyList_1<::Class_1_B71FC14BA77C9F77*>* AffectedCards; // 0x20
		::System::Int32 DiscardPileVisualOffset; // 0x28
		::RPG::Client::FateRin::CardStateChangeReason Reason; // 0x2C
		::RPG::GameCore::FateRinCardPileType ToPile; // 0x30
		::RPG::GameCore::FateRinCardPileType FromPile; // 0x32
		::System::Int32 DrawPileVisualOffset; // 0x34
		::RPG::Client::FateRin::BattleAddCardReason AddCardReason; // 0x38

		::System::Void _ctor(::RPG::Client::FateRin::CardStateChangeReason a1, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_B71FC14BA77C9F77*>* a2, ::RPG::GameCore::FateRinCardPileType a3, ::RPG::GameCore::FateRinCardPileType a4, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_B71FC14BA77C9F77*>* a5, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_B71FC14BA77C9F77*>* a6, ::RPG::Client::FateRin::BattleAddCardReason a7, ::System::Int32 a8, ::System::Int32 a9)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CardStateChangeReason, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_B71FC14BA77C9F77*>*, ::RPG::GameCore::FateRinCardPileType, ::RPG::GameCore::FateRinCardPileType, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_B71FC14BA77C9F77*>*, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_B71FC14BA77C9F77*>*, ::RPG::Client::FateRin::BattleAddCardReason, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARDSTATECHANGECONTEXT__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
	};
}
