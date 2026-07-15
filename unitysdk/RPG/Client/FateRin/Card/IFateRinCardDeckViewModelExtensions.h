#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::Card { class IFateRinCardDeckViewModel; }
namespace RPG::Client::FateRin::Card { class IFateRinSystemCardViewModel; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_FATERIN_CARD_IFATERINCARDDECKVIEWMODELEXTENSIONS_CONTAINSCARD_OFFSET UNITYSDK_OFFSET(0x1A379360)
#define RPG_CLIENT_FATERIN_CARD_IFATERINCARDDECKVIEWMODELEXTENSIONS_GETALLCARDSCOUNT_OFFSET UNITYSDK_OFFSET(0x1A379710)
#define RPG_CLIENT_FATERIN_CARD_IFATERINCARDDECKVIEWMODELEXTENSIONS_GETALLCARDSLIST_OFFSET UNITYSDK_OFFSET(0x1A379550)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int IFateRinCardDeckViewModelExtensions_TypeDefinitionIndex = 76178;

	class IFateRinCardDeckViewModelExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean ContainsCard(::RPG::Client::FateRin::Card::IFateRinCardDeckViewModel* a1, ::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::FateRin::Card::IFateRinCardDeckViewModel*, ::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_IFATERINCARDDECKVIEWMODELEXTENSIONS_CONTAINSCARD_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>* GetAllCardsList(::RPG::Client::FateRin::Card::IFateRinCardDeckViewModel* a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*>*(*)(::RPG::Client::FateRin::Card::IFateRinCardDeckViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_IFATERINCARDDECKVIEWMODELEXTENSIONS_GETALLCARDSLIST_OFFSET))(a1);
		}

		static ::System::UInt32 GetAllCardsCount(::RPG::Client::FateRin::Card::IFateRinCardDeckViewModel* a1)
		{
			return ((::System::UInt32(*)(::RPG::Client::FateRin::Card::IFateRinCardDeckViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_IFATERINCARDDECKVIEWMODELEXTENSIONS_GETALLCARDSCOUNT_OFFSET))(a1);
		}
	};
}
