#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournPersonaBaseViewModel.h"
#include "unitysdk/RPG/Client/RogueTournPersonaRoomCardPile.h"

namespace RPG::Client { class IRogueTournPersonaRoomCard; }
namespace RPG::Client { class IRogueTournPersonaRoomCardInGame; }
namespace RPG::Client { class RogueTournPersonaRoomCardPileSelectInfo; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xA3C4430)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL_GETPILECARDS_OFFSET UNITYSDK_OFFSET(0xA3C3D60)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL_GET_SELECTINFO_OFFSET UNITYSDK_OFFSET(0xA3C4300)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL_ISCARDCANDIDATE_OFFSET UNITYSDK_OFFSET(0xA3C4E00)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL_SELECTCARDBYINDEX_OFFSET UNITYSDK_OFFSET(0xA3C4CE0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL_SELECTPILE_OFFSET UNITYSDK_OFFSET(0xA3C4BB0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL_SET_SELECTINFO_OFFSET UNITYSDK_OFFSET(0xA3C4310)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL_SHOWPAGE_OFFSET UNITYSDK_OFFSET(0xA3C4320)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xA3C4530)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL__INIT_OFFSET UNITYSDK_OFFSET(0xA3C4540)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL__SETUPPILECARDS_OFFSET UNITYSDK_OFFSET(0xA3C45A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaRoomCardPileViewModel_TypeDefinitionIndex = 59739;

	class RogueTournPersonaRoomCardPileViewModel : public ::RPG::Client::RogueTournPersonaBaseViewModel
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* _DrawPileCards; // 0x20
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* _DiscardPileCards; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCard*>* _CandidateRoomCards; // 0x30
		::RPG::Client::RogueTournPersonaRoomCardPileSelectInfo* _SelectInfo_k__BackingField; // 0x38
		::RPG::Client::RogueTournPersonaRoomCardPile _DefaultPileType; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL__CTOR_OFFSET))(this);
		}

		::RPG::Client::RogueTournPersonaRoomCardPileSelectInfo* get_SelectInfo()
		{
			return ((::RPG::Client::RogueTournPersonaRoomCardPileSelectInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL_GET_SELECTINFO_OFFSET))(this);
		}

		::System::Void set_SelectInfo(::RPG::Client::RogueTournPersonaRoomCardPileSelectInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournPersonaRoomCardPileSelectInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL_SET_SELECTINFO_OFFSET))(this, value);
		}

		static ::System::Void ShowPage(::RPG::Client::RogueTournPersonaRoomCardPile defaultPileType, ::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCard*>* candidateRoomCards)
		{
			return ((::System::Void(*)(::RPG::Client::RogueTournPersonaRoomCardPile, ::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCard*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL_SHOWPAGE_OFFSET))(defaultPileType, candidateRoomCards);
		}

		static ::RPG::Client::RogueTournPersonaRoomCardPileViewModel* Create(::RPG::Client::RogueTournPersonaRoomCardPile defaultPileType, ::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCard*>* candidateRoomCards)
		{
			return ((::RPG::Client::RogueTournPersonaRoomCardPileViewModel*(*)(::RPG::Client::RogueTournPersonaRoomCardPile, ::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCard*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL_CREATE_OFFSET))(defaultPileType, candidateRoomCards);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL__INIT_OFFSET))(this);
		}

		::System::Void SelectPile(::RPG::Client::RogueTournPersonaRoomCardPile pileType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournPersonaRoomCardPile))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL_SELECTPILE_OFFSET))(this, pileType);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* GetPileCards(::RPG::Client::RogueTournPersonaRoomCardPile pileType)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*(*)(::PVOID, ::RPG::Client::RogueTournPersonaRoomCardPile))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL_GETPILECARDS_OFFSET))(this, pileType);
		}

		::System::Void _SetupPileCards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL__SETUPPILECARDS_OFFSET))(this);
		}

		::System::Void SelectCardByIndex(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL_SELECTCARDBYINDEX_OFFSET))(this, index);
		}

		::System::Boolean IsCardCandidate(::RPG::Client::IRogueTournPersonaRoomCard* roomCard)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL_ISCARDCANDIDATE_OFFSET))(this, roomCard);
		}
	};
}
