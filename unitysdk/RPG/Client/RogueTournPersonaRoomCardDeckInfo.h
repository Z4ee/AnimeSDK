#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournPersonaRoomCardPile.h"
#include "unitysdk/System/Object.h"

class Class_1_070964BB68D18B9F_1;
class Class_1_69F06BA11FF28429_2;
namespace RPG::Client { class IRogueTournPersonaRoomCardInGame; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3B3060)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_GETCARD_OFFSET UNITYSDK_OFFSET(0xA3C1CF0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_GETDISCARDPILECARDS_OFFSET UNITYSDK_OFFSET(0xA3C3900)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_GETDRAWPILECARDS_OFFSET UNITYSDK_OFFSET(0xA3C37F0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_GET_ATTRIBUTEMAXCOUNT_OFFSET UNITYSDK_OFFSET(0xA3C39B0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_GET_CARDS_OFFSET UNITYSDK_OFFSET(0xA3C3950)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_GET_MAXCARDCOUNT_OFFSET UNITYSDK_OFFSET(0xA3C39F0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_GET_MINCARDCOUNT_OFFSET UNITYSDK_OFFSET(0xA3C39D0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_SET_ATTRIBUTEMAXCOUNT_OFFSET UNITYSDK_OFFSET(0xA3C39C0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_SET_MAXCARDCOUNT_OFFSET UNITYSDK_OFFSET(0xA3C3A00)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_SET_MINCARDCOUNT_OFFSET UNITYSDK_OFFSET(0xA3C39E0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_SYNCADDCARD_OFFSET UNITYSDK_OFFSET(0xA3C33B0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_SYNCATTRIBUTEMAXCOUNT_OFFSET UNITYSDK_OFFSET(0xA3C3710)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_SYNCBELONGPILE_OFFSET UNITYSDK_OFFSET(0xA3AF7D0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_SYNCFULL_OFFSET UNITYSDK_OFFSET(0xA3B4140)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_SYNCREMOVECARD_OFFSET UNITYSDK_OFFSET(0xA3C3550)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_SYNCROOMCARDLIMITCOUNT_OFFSET UNITYSDK_OFFSET(0xA3C3780)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_SYNCUPDATECARD_OFFSET UNITYSDK_OFFSET(0xA3C3620)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA3B2BB0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO__GETCARDSBYPILE_OFFSET UNITYSDK_OFFSET(0xA3C3840)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO__SYNCATTRIBUTEMAXCOUNT_OFFSET UNITYSDK_OFFSET(0xA3C3300)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO__SYNCBELONGPILE_OFFSET UNITYSDK_OFFSET(0xA3C2EE0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO__SYNCROOMCARDLIMITCOUNT_OFFSET UNITYSDK_OFFSET(0xA3C3350)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaRoomCardDeckInfo_TypeDefinitionIndex = 55246;

	class RogueTournPersonaRoomCardDeckInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::IRogueTournPersonaRoomCardInGame*>* _Cards; // 0x10
		::System::UInt32 _AttributeMaxCount_k__BackingField; // 0x18
		::System::UInt32 _MaxCardCount_k__BackingField; // 0x1C
		::System::UInt32 _MinCardCount_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncFull(::Class_1_070964BB68D18B9F_1* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_070964BB68D18B9F_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_SYNCFULL_OFFSET))(this, proto);
		}

		::System::Void SyncAddCard(::Class_1_69F06BA11FF28429_2* protoCard)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_69F06BA11FF28429_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_SYNCADDCARD_OFFSET))(this, protoCard);
		}

		::System::Void SyncRemoveCard(::System::UInt32 uniqueID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_SYNCREMOVECARD_OFFSET))(this, uniqueID);
		}

		::System::Void SyncUpdateCard(::Class_1_69F06BA11FF28429_2* protoCard)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_69F06BA11FF28429_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_SYNCUPDATECARD_OFFSET))(this, protoCard);
		}

		::System::Void SyncBelongPile(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* uniqueIDs, ::RPG::Client::RogueTournPersonaRoomCardPile pile)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::RPG::Client::RogueTournPersonaRoomCardPile))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_SYNCBELONGPILE_OFFSET))(this, uniqueIDs, pile);
		}

		::System::Void SyncAttributeMaxCount(::System::UInt32 maxCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_SYNCATTRIBUTEMAXCOUNT_OFFSET))(this, maxCount);
		}

		::System::Void SyncRoomCardLimitCount(::System::UInt32 maxCount, ::System::UInt32 minCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_SYNCROOMCARDLIMITCOUNT_OFFSET))(this, maxCount, minCount);
		}

		::RPG::Client::IRogueTournPersonaRoomCardInGame* GetCard(::System::UInt32 uniqueId)
		{
			return ((::RPG::Client::IRogueTournPersonaRoomCardInGame*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_GETCARD_OFFSET))(this, uniqueId);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* GetDrawPileCards()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_GETDRAWPILECARDS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* GetDiscardPileCards()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_GETDISCARDPILECARDS_OFFSET))(this);
		}

		::System::Void _SyncBelongPile(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* uniqueIDs, ::RPG::Client::RogueTournPersonaRoomCardPile pile)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::RPG::Client::RogueTournPersonaRoomCardPile))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO__SYNCBELONGPILE_OFFSET))(this, uniqueIDs, pile);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* _GetCardsByPile(::RPG::Client::RogueTournPersonaRoomCardPile pile)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*(*)(::PVOID, ::RPG::Client::RogueTournPersonaRoomCardPile))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO__GETCARDSBYPILE_OFFSET))(this, pile);
		}

		::System::Void _SyncAttributeMaxCount(::System::UInt32 maxCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO__SYNCATTRIBUTEMAXCOUNT_OFFSET))(this, maxCount);
		}

		::System::Void _SyncRoomCardLimitCount(::System::UInt32 maxCount, ::System::UInt32 minCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO__SYNCROOMCARDLIMITCOUNT_OFFSET))(this, maxCount, minCount);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* get_Cards()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_GET_CARDS_OFFSET))(this);
		}

		::System::UInt32 get_AttributeMaxCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_GET_ATTRIBUTEMAXCOUNT_OFFSET))(this);
		}

		::System::Void set_AttributeMaxCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_SET_ATTRIBUTEMAXCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_MinCardCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_GET_MINCARDCOUNT_OFFSET))(this);
		}

		::System::Void set_MinCardCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_SET_MINCARDCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxCardCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_GET_MAXCARDCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxCardCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_SET_MAXCARDCOUNT_OFFSET))(this, value);
		}
	};
}
