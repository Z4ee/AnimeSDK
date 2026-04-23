#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournPersonaRoomCardPile.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournPersonaRoomCardInGame; }
namespace RPG::Client { class RogueTournPersonaRoomCardPileViewModel; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILESELECTINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xB0FB990)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILESELECTINFO_GET_CARDINDEX_OFFSET UNITYSDK_OFFSET(0xB0FB7E0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILESELECTINFO_GET_CARD_OFFSET UNITYSDK_OFFSET(0xB0FB800)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILESELECTINFO_GET_PILECARDSCOUNT_OFFSET UNITYSDK_OFFSET(0xB0FB680)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILESELECTINFO_GET_PILECARDS_OFFSET UNITYSDK_OFFSET(0xB0FB570)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILESELECTINFO_GET_PILETYPE_OFFSET UNITYSDK_OFFSET(0xB0FB550)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILESELECTINFO_SELECTCARDBYINDEX_OFFSET UNITYSDK_OFFSET(0xB0FBB20)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILESELECTINFO_SELECTPILE_OFFSET UNITYSDK_OFFSET(0xB0FBAD0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILESELECTINFO_SET_CARDINDEX_OFFSET UNITYSDK_OFFSET(0xB0FB7F0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILESELECTINFO_SET_PILETYPE_OFFSET UNITYSDK_OFFSET(0xB0FB560)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILESELECTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB0FBA60)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILESELECTINFO__INIT_OFFSET UNITYSDK_OFFSET(0xB0FBA70)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaRoomCardPileSelectInfo_TypeDefinitionIndex = 67139;

	class RogueTournPersonaRoomCardPileSelectInfo : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournPersonaRoomCardPileViewModel* _ViewModel; // 0x10
		::System::Int32 _CardIndex_k__BackingField; // 0x18
		::RPG::Client::RogueTournPersonaRoomCardPile _PileType_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILESELECTINFO__CTOR_OFFSET))(this);
		}

		::RPG::Client::RogueTournPersonaRoomCardPile get_PileType()
		{
			return ((::RPG::Client::RogueTournPersonaRoomCardPile(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILESELECTINFO_GET_PILETYPE_OFFSET))(this);
		}

		::System::Void set_PileType(::RPG::Client::RogueTournPersonaRoomCardPile value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournPersonaRoomCardPile))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILESELECTINFO_SET_PILETYPE_OFFSET))(this, value);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* get_PileCards()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILESELECTINFO_GET_PILECARDS_OFFSET))(this);
		}

		::System::Int32 get_PileCardsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILESELECTINFO_GET_PILECARDSCOUNT_OFFSET))(this);
		}

		::System::Int32 get_CardIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILESELECTINFO_GET_CARDINDEX_OFFSET))(this);
		}

		::System::Void set_CardIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILESELECTINFO_SET_CARDINDEX_OFFSET))(this, value);
		}

		::RPG::Client::IRogueTournPersonaRoomCardInGame* get_Card()
		{
			return ((::RPG::Client::IRogueTournPersonaRoomCardInGame*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILESELECTINFO_GET_CARD_OFFSET))(this);
		}

		static ::RPG::Client::RogueTournPersonaRoomCardPileSelectInfo* Create(::RPG::Client::RogueTournPersonaRoomCardPileViewModel* viewModel, ::RPG::Client::RogueTournPersonaRoomCardPile defaultPileType)
		{
			return ((::RPG::Client::RogueTournPersonaRoomCardPileSelectInfo*(*)(::RPG::Client::RogueTournPersonaRoomCardPileViewModel*, ::RPG::Client::RogueTournPersonaRoomCardPile))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILESELECTINFO_CREATE_OFFSET))(viewModel, defaultPileType);
		}

		::System::Void _Init(::RPG::Client::RogueTournPersonaRoomCardPileViewModel* viewModel, ::RPG::Client::RogueTournPersonaRoomCardPile defaultPileType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournPersonaRoomCardPileViewModel*, ::RPG::Client::RogueTournPersonaRoomCardPile))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILESELECTINFO__INIT_OFFSET))(this, viewModel, defaultPileType);
		}

		::System::Void SelectPile(::RPG::Client::RogueTournPersonaRoomCardPile pileType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournPersonaRoomCardPile))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILESELECTINFO_SELECTPILE_OFFSET))(this, pileType);
		}

		::System::Void SelectCardByIndex(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILESELECTINFO_SELECTCARDBYINDEX_OFFSET))(this, index);
		}
	};
}
