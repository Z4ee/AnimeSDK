#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/System/Object.h"

class Class_1_CA0C5075F115F37C;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xDB8E800)
#define RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_GETDATETIME_OFFSET UNITYSDK_OFFSET(0xDB8E9F0)
#define RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_GETITEMLIST_OFFSET UNITYSDK_OFFSET(0xDB8E940)
#define RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_GETTIME_OFFSET UNITYSDK_OFFSET(0xDB8E980)
#define RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_GETUSERNAME_OFFSET UNITYSDK_OFFSET(0xDB8EA30)
#define RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_GET_ISTAKE_OFFSET UNITYSDK_OFFSET(0xDB8EDF0)
#define RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_GET_OFFERID_OFFSET UNITYSDK_OFFSET(0xDB8EDB0)
#define RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_GET_OFFERPIECELIST_OFFSET UNITYSDK_OFFSET(0xDB8EDD0)
#define RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_GET_OFFERTIME_OFFSET UNITYSDK_OFFSET(0xDB8EE10)
#define RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_GET_USERID_OFFSET UNITYSDK_OFFSET(0xDB8ED90)
#define RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_ISHISTORYVALID_OFFSET UNITYSDK_OFFSET(0xDB8EAE0)
#define RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_ISITEMVALID_OFFSET UNITYSDK_OFFSET(0xDB8EB20)
#define RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_SET_ISTAKE_OFFSET UNITYSDK_OFFSET(0xDB8EE00)
#define RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_SET_OFFERID_OFFSET UNITYSDK_OFFSET(0xDB8EDC0)
#define RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_SET_OFFERPIECELIST_OFFSET UNITYSDK_OFFSET(0xDB8EDE0)
#define RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_SET_OFFERTIME_OFFSET UNITYSDK_OFFSET(0xDB8EE20)
#define RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_SET_USERID_OFFSET UNITYSDK_OFFSET(0xDB8EDA0)
#define RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xDB8E930)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesTradingCardOfferItem_TypeDefinitionIndex = 66613;

	class PlanetFesTradingCardOfferItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _OfferPieceList_k__BackingField; // 0x10
		::System::UInt64 _OfferId_k__BackingField; // 0x18
		::RPG::Client::DateTimePro _OfferTime_k__BackingField; // 0x20
		::System::UInt32 _UserID_k__BackingField; // 0x28
		::System::Boolean _IsTake_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesTradingCardOfferItem* Create(::Class_1_CA0C5075F115F37C* a1)
		{
			return ((::RPG::Client::PlanetFesTradingCardOfferItem*(*)(::Class_1_CA0C5075F115F37C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_CREATE_OFFSET))(a1);
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

		::System::Void set_UserID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_SET_USERID_OFFSET))(this, a1);
		}

		::System::UInt64 get_OfferId()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_GET_OFFERID_OFFSET))(this);
		}

		::System::Void set_OfferId(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_SET_OFFERID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_OfferPieceList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_GET_OFFERPIECELIST_OFFSET))(this);
		}

		::System::Void set_OfferPieceList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_SET_OFFERPIECELIST_OFFSET))(this, a1);
		}

		::System::Boolean get_IsTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_GET_ISTAKE_OFFSET))(this);
		}

		::System::Void set_IsTake(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_SET_ISTAKE_OFFSET))(this, a1);
		}

		::RPG::Client::DateTimePro get_OfferTime()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_GET_OFFERTIME_OFFSET))(this);
		}

		::System::Void set_OfferTime(::RPG::Client::DateTimePro a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDOFFERITEM_SET_OFFERTIME_OFFSET))(this, a1);
		}
	};
}
