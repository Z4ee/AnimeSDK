#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournPersonaRoomCardInGame; }
namespace RPG::Client { class RogueTournPersonaRoomCardPileViewModel; }
namespace RPG::Client { class RogueTournUtils_RoomCardInGameComparer; }

#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL_ROOMCARDWITHCANDIDATECOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0xA3C5000)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL_ROOMCARDWITHCANDIDATECOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0xA3C4CB0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaRoomCardPileViewModel_RoomCardWithCandidateComparer_TypeDefinitionIndex = 59740;

	class RogueTournPersonaRoomCardPileViewModel_RoomCardWithCandidateComparer : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournUtils_RoomCardInGameComparer* _baseComparer; // 0x10
		::RPG::Client::RogueTournPersonaRoomCardPileViewModel* _viewModel; // 0x18

		::System::Void _ctor(::RPG::Client::RogueTournPersonaRoomCardPileViewModel* viewModel)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournPersonaRoomCardPileViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL_ROOMCARDWITHCANDIDATECOMPARER__CTOR_OFFSET))(this, viewModel);
		}

		::System::Int32 Compare(::RPG::Client::IRogueTournPersonaRoomCardInGame* aCard, ::RPG::Client::IRogueTournPersonaRoomCardInGame* bCard)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCardInGame*, ::RPG::Client::IRogueTournPersonaRoomCardInGame*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL_ROOMCARDWITHCANDIDATECOMPARER_COMPARE_OFFSET))(this, aCard, bCard);
		}
	};
}
