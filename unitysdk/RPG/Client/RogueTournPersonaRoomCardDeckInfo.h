#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournPersonaRoomCardPile.h"
#include "unitysdk/System/Object.h"

class Class_1_24B2AFBC155BAEAC_5;
class Class_1_766E1CF11E204F43_4;
namespace RPG::Client { class IRogueTournPersonaRoomCardInGame; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AA5A390)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_GETCARD_OFFSET UNITYSDK_OFFSET(0x1AA6CCC0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_GETDISCARDPILECARDS_OFFSET UNITYSDK_OFFSET(0x1AA6E800)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_GETDRAWPILECARDS_OFFSET UNITYSDK_OFFSET(0x1AA6E640)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_GET_ATTRIBUTEMAXCOUNT_OFFSET UNITYSDK_OFFSET(0x1AA6E940)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_GET_CARDS_OFFSET UNITYSDK_OFFSET(0x1AA6E860)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_GET_MAXCARDCOUNT_OFFSET UNITYSDK_OFFSET(0x1AA6E980)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_GET_MINCARDCOUNT_OFFSET UNITYSDK_OFFSET(0x1AA6E960)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_SET_ATTRIBUTEMAXCOUNT_OFFSET UNITYSDK_OFFSET(0x1AA6E950)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_SET_MAXCARDCOUNT_OFFSET UNITYSDK_OFFSET(0x1AA6E990)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_SET_MINCARDCOUNT_OFFSET UNITYSDK_OFFSET(0x1AA6E970)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_SYNCADDCARD_OFFSET UNITYSDK_OFFSET(0x1AA6E280)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_SYNCATTRIBUTEMAXCOUNT_OFFSET UNITYSDK_OFFSET(0x1AA6E560)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_SYNCBELONGPILE_OFFSET UNITYSDK_OFFSET(0x1AA566D0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_SYNCFULL_OFFSET UNITYSDK_OFFSET(0x1AA5B590)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_SYNCREMOVECARD_OFFSET UNITYSDK_OFFSET(0x1AA6E3E0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_SYNCROOMCARDLIMITCOUNT_OFFSET UNITYSDK_OFFSET(0x1AA6E5D0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_SYNCUPDATECARD_OFFSET UNITYSDK_OFFSET(0x1AA6E4B0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA59D50)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO__GETCARDSBYPILE_OFFSET UNITYSDK_OFFSET(0x1AA6E690)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO__SYNCATTRIBUTEMAXCOUNT_OFFSET UNITYSDK_OFFSET(0x1AA6E1D0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO__SYNCBELONGPILE_OFFSET UNITYSDK_OFFSET(0x1AA6DC70)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO__SYNCROOMCARDLIMITCOUNT_OFFSET UNITYSDK_OFFSET(0x1AA6E220)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaRoomCardDeckInfo_TypeDefinitionIndex = 64734;

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

		::System::Void SyncFull(::Class_1_24B2AFBC155BAEAC_5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_24B2AFBC155BAEAC_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_SYNCFULL_OFFSET))(this, a1);
		}

		::System::Void SyncAddCard(::Class_1_766E1CF11E204F43_4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_766E1CF11E204F43_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_SYNCADDCARD_OFFSET))(this, a1);
		}

		::System::Void SyncRemoveCard(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_SYNCREMOVECARD_OFFSET))(this, a1);
		}

		::System::Void SyncUpdateCard(::Class_1_766E1CF11E204F43_4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_766E1CF11E204F43_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_SYNCUPDATECARD_OFFSET))(this, a1);
		}

		::System::Void SyncBelongPile(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1, ::RPG::Client::RogueTournPersonaRoomCardPile a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::RPG::Client::RogueTournPersonaRoomCardPile))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_SYNCBELONGPILE_OFFSET))(this, a1, a2);
		}

		::System::Void SyncAttributeMaxCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_SYNCATTRIBUTEMAXCOUNT_OFFSET))(this, a1);
		}

		::System::Void SyncRoomCardLimitCount(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_SYNCROOMCARDLIMITCOUNT_OFFSET))(this, a1, a2);
		}

		::RPG::Client::IRogueTournPersonaRoomCardInGame* GetCard(::System::UInt32 a1)
		{
			return ((::RPG::Client::IRogueTournPersonaRoomCardInGame*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_GETCARD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* GetDrawPileCards()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_GETDRAWPILECARDS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* GetDiscardPileCards()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_GETDISCARDPILECARDS_OFFSET))(this);
		}

		::System::Void _SyncBelongPile(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1, ::RPG::Client::RogueTournPersonaRoomCardPile a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::RPG::Client::RogueTournPersonaRoomCardPile))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO__SYNCBELONGPILE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* _GetCardsByPile(::RPG::Client::RogueTournPersonaRoomCardPile a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*(*)(::PVOID, ::RPG::Client::RogueTournPersonaRoomCardPile))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO__GETCARDSBYPILE_OFFSET))(this, a1);
		}

		::System::Void _SyncAttributeMaxCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO__SYNCATTRIBUTEMAXCOUNT_OFFSET))(this, a1);
		}

		::System::Void _SyncRoomCardLimitCount(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO__SYNCROOMCARDLIMITCOUNT_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* get_Cards()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_GET_CARDS_OFFSET))(this);
		}

		::System::UInt32 get_AttributeMaxCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_GET_ATTRIBUTEMAXCOUNT_OFFSET))(this);
		}

		::System::Void set_AttributeMaxCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_SET_ATTRIBUTEMAXCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_MinCardCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_GET_MINCARDCOUNT_OFFSET))(this);
		}

		::System::Void set_MinCardCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_SET_MINCARDCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxCardCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_GET_MAXCARDCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxCardCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDDECKINFO_SET_MAXCARDCOUNT_OFFSET))(this, a1);
		}
	};
}
