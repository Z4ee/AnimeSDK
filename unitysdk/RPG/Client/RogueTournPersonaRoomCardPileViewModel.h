#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournPersonaBaseViewModel.h"
#include "unitysdk/RPG/Client/RogueTournPersonaRoomCardPile.h"

namespace RPG::Client { class IRogueTournPersonaRoomCard; }
namespace RPG::Client { class IRogueTournPersonaRoomCardInGame; }
namespace RPG::Client { class RogueTournPersonaRoomCardPileSelectInfo; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xDF97990)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL_GETPILECARDS_OFFSET UNITYSDK_OFFSET(0xDF97210)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL_GET_SELECTINFO_OFFSET UNITYSDK_OFFSET(0xDF97870)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL_ISCARDCANDIDATE_OFFSET UNITYSDK_OFFSET(0xDF98580)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL_SELECTCARDBYINDEX_OFFSET UNITYSDK_OFFSET(0xDF98460)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL_SELECTPILE_OFFSET UNITYSDK_OFFSET(0xDF98330)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL_SET_SELECTINFO_OFFSET UNITYSDK_OFFSET(0xDF97880)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL_SHOWPAGE_OFFSET UNITYSDK_OFFSET(0xDF97890)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xDF97A90)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL__INIT_OFFSET UNITYSDK_OFFSET(0xDF97AA0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL__SETUPPILECARDS_OFFSET UNITYSDK_OFFSET(0xDF97B00)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaRoomCardPileViewModel_TypeDefinitionIndex = 72798;

	class RogueTournPersonaRoomCardPileViewModel : public ::RPG::Client::RogueTournPersonaBaseViewModel
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* _DrawPileCards; // 0x20
		::RPG::Client::RogueTournPersonaRoomCardPileSelectInfo* _SelectInfo_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCard*>* _CandidateRoomCards; // 0x30
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* _DiscardPileCards; // 0x38
		::RPG::Client::RogueTournPersonaRoomCardPile _DefaultPileType; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL__CTOR_OFFSET))(this);
		}

		::RPG::Client::RogueTournPersonaRoomCardPileSelectInfo* get_SelectInfo()
		{
			return ((::RPG::Client::RogueTournPersonaRoomCardPileSelectInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL_GET_SELECTINFO_OFFSET))(this);
		}

		::System::Void set_SelectInfo(::RPG::Client::RogueTournPersonaRoomCardPileSelectInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournPersonaRoomCardPileSelectInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL_SET_SELECTINFO_OFFSET))(this, a1);
		}

		static ::System::Void ShowPage(::RPG::Client::RogueTournPersonaRoomCardPile a1, ::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCard*>* a2)
		{
			return ((::System::Void(*)(::RPG::Client::RogueTournPersonaRoomCardPile, ::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCard*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL_SHOWPAGE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::RogueTournPersonaRoomCardPileViewModel* Create(::RPG::Client::RogueTournPersonaRoomCardPile a1, ::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCard*>* a2)
		{
			return ((::RPG::Client::RogueTournPersonaRoomCardPileViewModel*(*)(::RPG::Client::RogueTournPersonaRoomCardPile, ::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCard*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL_CREATE_OFFSET))(a1, a2);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL__INIT_OFFSET))(this);
		}

		::System::Void SelectPile(::RPG::Client::RogueTournPersonaRoomCardPile a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournPersonaRoomCardPile))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL_SELECTPILE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* GetPileCards(::RPG::Client::RogueTournPersonaRoomCardPile a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*(*)(::PVOID, ::RPG::Client::RogueTournPersonaRoomCardPile))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL_GETPILECARDS_OFFSET))(this, a1);
		}

		::System::Void _SetupPileCards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL__SETUPPILECARDS_OFFSET))(this);
		}

		::System::Void SelectCardByIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL_SELECTCARDBYINDEX_OFFSET))(this, a1);
		}

		::System::Boolean IsCardCandidate(::RPG::Client::IRogueTournPersonaRoomCard* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL_ISCARDCANDIDATE_OFFSET))(this, a1);
		}
	};
}
