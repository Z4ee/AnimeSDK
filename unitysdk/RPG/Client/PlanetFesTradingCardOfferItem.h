#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/System/Object.h"

class Class_1_355C62D538F2A42A;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_CREATE_OFFSET UNITYSDK_OFFSET(0x9FD2150)
#define RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_GETDATETIME_OFFSET UNITYSDK_OFFSET(0x9FD2340)
#define RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_GETITEMLIST_OFFSET UNITYSDK_OFFSET(0x9FD2290)
#define RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_GETTIME_OFFSET UNITYSDK_OFFSET(0x9FD22D0)
#define RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_GETUSERNAME_OFFSET UNITYSDK_OFFSET(0x9FD2380)
#define RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_GET_ISTAKE_OFFSET UNITYSDK_OFFSET(0x9FD2740)
#define RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_GET_OFFERID_OFFSET UNITYSDK_OFFSET(0x9FD2700)
#define RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_GET_OFFERPIECELIST_OFFSET UNITYSDK_OFFSET(0x9FD2720)
#define RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_GET_OFFERTIME_OFFSET UNITYSDK_OFFSET(0x9FD2760)
#define RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_GET_USERID_OFFSET UNITYSDK_OFFSET(0x9FD26E0)
#define RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_ISHISTORYVALID_OFFSET UNITYSDK_OFFSET(0x9FD2430)
#define RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_ISITEMVALID_OFFSET UNITYSDK_OFFSET(0x9FD2470)
#define RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_SET_ISTAKE_OFFSET UNITYSDK_OFFSET(0x9FD2750)
#define RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_SET_OFFERID_OFFSET UNITYSDK_OFFSET(0x9FD2710)
#define RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_SET_OFFERPIECELIST_OFFSET UNITYSDK_OFFSET(0x9FD2730)
#define RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_SET_OFFERTIME_OFFSET UNITYSDK_OFFSET(0x9FD2770)
#define RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_SET_USERID_OFFSET UNITYSDK_OFFSET(0x9FD26F0)
#define RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x9FD2280)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesTradingCardOfferItem_TypeDefinitionIndex = 54175;

	class PlanetFesTradingCardOfferItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _OfferPieceList_k__BackingField; // 0x10
		::System::UInt32 _UserID_k__BackingField; // 0x18
		::System::Boolean _IsTake_k__BackingField; // 0x1C
		::System::UInt64 _OfferId_k__BackingField; // 0x20
		::RPG::Client::DateTimePro _OfferTime_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesTradingCardOfferItem* Create(::Class_1_355C62D538F2A42A* offer)
		{
			return ((::RPG::Client::PlanetFesTradingCardOfferItem*(*)(::Class_1_355C62D538F2A42A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_CREATE_OFFSET))(offer);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetItemList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_GETITEMLIST_OFFSET))(this);
		}

		::System::String* GetTime()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_GETTIME_OFFSET))(this);
		}

		::RPG::Client::DateTimePro GetDateTime()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_GETDATETIME_OFFSET))(this);
		}

		::System::String* GetUserName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_GETUSERNAME_OFFSET))(this);
		}

		::System::Boolean IsHistoryValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_ISHISTORYVALID_OFFSET))(this);
		}

		::System::Boolean IsItemValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_ISITEMVALID_OFFSET))(this);
		}

		::System::UInt32 get_UserID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_GET_USERID_OFFSET))(this);
		}

		::System::Void set_UserID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_SET_USERID_OFFSET))(this, value);
		}

		::System::UInt64 get_OfferId()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_GET_OFFERID_OFFSET))(this);
		}

		::System::Void set_OfferId(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_SET_OFFERID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_OfferPieceList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_GET_OFFERPIECELIST_OFFSET))(this);
		}

		::System::Void set_OfferPieceList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_SET_OFFERPIECELIST_OFFSET))(this, value);
		}

		::System::Boolean get_IsTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_GET_ISTAKE_OFFSET))(this);
		}

		::System::Void set_IsTake(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_SET_ISTAKE_OFFSET))(this, value);
		}

		::RPG::Client::DateTimePro get_OfferTime()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_GET_OFFERTIME_OFFSET))(this);
		}

		::System::Void set_OfferTime(::RPG::Client::DateTimePro value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_SET_OFFERTIME_OFFSET))(this, value);
		}
	};
}
