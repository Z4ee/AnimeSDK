#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7CF3F1C413CAE286.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class JSONObject; }
namespace RPG::GameCore { class RechargeConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_PRODUCT_GET_BEGINTIME_OFFSET UNITYSDK_OFFSET(0x1AE21520)
#define RPG_CLIENT_PRODUCT_GET_BUYTIMES_OFFSET UNITYSDK_OFFSET(0x1AE214E0)
#define RPG_CLIENT_PRODUCT_GET_COUNTRYCODE_OFFSET UNITYSDK_OFFSET(0x1AE21210)
#define RPG_CLIENT_PRODUCT_GET_CURRENCYCODE_OFFSET UNITYSDK_OFFSET(0x1AE21230)
#define RPG_CLIENT_PRODUCT_GET_CURRENCYSYMBOL_OFFSET UNITYSDK_OFFSET(0x1AE21250)
#define RPG_CLIENT_PRODUCT_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x1AE21540)
#define RPG_CLIENT_PRODUCT_GET_GIFTVERSION_OFFSET UNITYSDK_OFFSET(0x1AE214C0)
#define RPG_CLIENT_PRODUCT_GET_ISBP_OFFSET UNITYSDK_OFFSET(0x1AE21780)
#define RPG_CLIENT_PRODUCT_GET_ISFIRSTRECHARGE_OFFSET UNITYSDK_OFFSET(0x1AE21760)
#define RPG_CLIENT_PRODUCT_GET_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1AE21560)
#define RPG_CLIENT_PRODUCT_GET_ISSOLDOUT_OFFSET UNITYSDK_OFFSET(0x1AE21700)
#define RPG_CLIENT_PRODUCT_GET_LOCALIZEDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1AE21270)
#define RPG_CLIENT_PRODUCT_GET_LOCALIZEDTITLE_OFFSET UNITYSDK_OFFSET(0x1AE21290)
#define RPG_CLIENT_PRODUCT_GET_MAXBUYTIMES_OFFSET UNITYSDK_OFFSET(0x1AE21500)
#define RPG_CLIENT_PRODUCT_GET_PRICETIER_OFFSET UNITYSDK_OFFSET(0x1AE21180)
#define RPG_CLIENT_PRODUCT_GET_PRICE_OFFSET UNITYSDK_OFFSET(0x1AE21480)
#define RPG_CLIENT_PRODUCT_GET_PRODUCTGIFTTYPE_OFFSET UNITYSDK_OFFSET(0x1AE214A0)
#define RPG_CLIENT_PRODUCT_GET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0x1AE21160)
#define RPG_CLIENT_PRODUCT_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1AE21400)
#define RPG_CLIENT_PRODUCT_GET_SHOWPRICE_OFFSET UNITYSDK_OFFSET(0x1AE21460)
#define RPG_CLIENT_PRODUCT_SETBUYTIMES_OFFSET UNITYSDK_OFFSET(0x1AE218C0)
#define RPG_CLIENT_PRODUCT_SETPRODUCT_OFFSET UNITYSDK_OFFSET(0x1AE217E0)
#define RPG_CLIENT_PRODUCT_SETSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1AE21920)
#define RPG_CLIENT_PRODUCT_SET_BEGINTIME_OFFSET UNITYSDK_OFFSET(0x1AE21530)
#define RPG_CLIENT_PRODUCT_SET_BUYTIMES_OFFSET UNITYSDK_OFFSET(0x1AE214F0)
#define RPG_CLIENT_PRODUCT_SET_COUNTRYCODE_OFFSET UNITYSDK_OFFSET(0x1AE21220)
#define RPG_CLIENT_PRODUCT_SET_CURRENCYCODE_OFFSET UNITYSDK_OFFSET(0x1AE21240)
#define RPG_CLIENT_PRODUCT_SET_CURRENCYSYMBOL_OFFSET UNITYSDK_OFFSET(0x1AE21260)
#define RPG_CLIENT_PRODUCT_SET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x1AE21550)
#define RPG_CLIENT_PRODUCT_SET_GIFTVERSION_OFFSET UNITYSDK_OFFSET(0x1AE214D0)
#define RPG_CLIENT_PRODUCT_SET_ISFIRSTRECHARGE_OFFSET UNITYSDK_OFFSET(0x1AE21770)
#define RPG_CLIENT_PRODUCT_SET_LOCALIZEDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1AE21280)
#define RPG_CLIENT_PRODUCT_SET_MAXBUYTIMES_OFFSET UNITYSDK_OFFSET(0x1AE21510)
#define RPG_CLIENT_PRODUCT_SET_PRICETIER_OFFSET UNITYSDK_OFFSET(0x1AE211C0)
#define RPG_CLIENT_PRODUCT_SET_PRICE_OFFSET UNITYSDK_OFFSET(0x1AE21490)
#define RPG_CLIENT_PRODUCT_SET_PRODUCTGIFTTYPE_OFFSET UNITYSDK_OFFSET(0x1AE214B0)
#define RPG_CLIENT_PRODUCT_SET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0x1AE21170)
#define RPG_CLIENT_PRODUCT_SET_SHOWPRICE_OFFSET UNITYSDK_OFFSET(0x1AE21470)
#define RPG_CLIENT_PRODUCT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AE22650)
#define RPG_CLIENT_PRODUCT_UPDATEINFO_OFFSET UNITYSDK_OFFSET(0x1AE219E0)
#define RPG_CLIENT_PRODUCT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE217D0)

namespace RPG::Client
{
	inline static constexpr unsigned int Product_TypeDefinitionIndex = 66471;

	class Product : public ::System::Object
	{
	public:
		::System::String* _PriceTier; // 0x10
		::System::String* _ShowPrice_k__BackingField; // 0x18
		::System::String* _CurrencySymbol_k__BackingField; // 0x20
		::System::String* _CountryCode_k__BackingField; // 0x28
		::System::String* _ProductID_k__BackingField; // 0x30
		::System::String* _LocalizedDescription_k__BackingField; // 0x38
		::System::String* _CurrencyCode_k__BackingField; // 0x40
		::RPG::Client::DateTimePro _EndTime_k__BackingField; // 0x48
		::Enum_3_7CF3F1C413CAE286 _ProductGiftType_k__BackingField; // 0x50
		::System::UInt32 _BuyTimes_k__BackingField; // 0x54
		::RPG::Client::DateTimePro _BeginTime_k__BackingField; // 0x58
		::System::UInt32 _MaxBuyTimes_k__BackingField; // 0x60
		::System::UInt32 _GiftVersion_k__BackingField; // 0x64
		::System::Boolean _IsFirstRecharge_k__BackingField; // 0x68
		::System::Single _Price_k__BackingField; // 0x6C

		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::Enum_3_7CF3F1C413CAE286 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Enum_3_7CF3F1C413CAE286, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* get_ProductID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_PRODUCTID_OFFSET))(this);
		}

		::System::Void set_ProductID(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_PRODUCTID_OFFSET))(this, a1);
		}

		::System::String* get_PriceTier()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_PRICETIER_OFFSET))(this);
		}

		::System::Void set_PriceTier(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_PRICETIER_OFFSET))(this, a1);
		}

		::System::String* get_CountryCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_COUNTRYCODE_OFFSET))(this);
		}

		::System::Void set_CountryCode(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_COUNTRYCODE_OFFSET))(this, a1);
		}

		::System::String* get_CurrencyCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_CURRENCYCODE_OFFSET))(this);
		}

		::System::Void set_CurrencyCode(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_CURRENCYCODE_OFFSET))(this, a1);
		}

		::System::String* get_CurrencySymbol()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_CURRENCYSYMBOL_OFFSET))(this);
		}

		::System::Void set_CurrencySymbol(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_CURRENCYSYMBOL_OFFSET))(this, a1);
		}

		::System::String* get_LocalizedDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_LOCALIZEDDESCRIPTION_OFFSET))(this);
		}

		::System::Void set_LocalizedDescription(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_LOCALIZEDDESCRIPTION_OFFSET))(this, a1);
		}

		::System::String* get_LocalizedTitle()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_LOCALIZEDTITLE_OFFSET))(this);
		}

		::System::String* get_ShowPrice()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_SHOWPRICE_OFFSET))(this);
		}

		::System::Void set_ShowPrice(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_SHOWPRICE_OFFSET))(this, a1);
		}

		::System::Single get_Price()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_PRICE_OFFSET))(this);
		}

		::System::Void set_Price(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_PRICE_OFFSET))(this, a1);
		}

		::Enum_3_7CF3F1C413CAE286 get_ProductGiftType()
		{
			return ((::Enum_3_7CF3F1C413CAE286(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_PRODUCTGIFTTYPE_OFFSET))(this);
		}

		::System::Void set_ProductGiftType(::Enum_3_7CF3F1C413CAE286 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_7CF3F1C413CAE286))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_PRODUCTGIFTTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_GiftVersion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_GIFTVERSION_OFFSET))(this);
		}

		::System::Void set_GiftVersion(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_GIFTVERSION_OFFSET))(this, a1);
		}

		::System::UInt32 get_BuyTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_BUYTIMES_OFFSET))(this);
		}

		::System::Void set_BuyTimes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_BUYTIMES_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxBuyTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_MAXBUYTIMES_OFFSET))(this);
		}

		::System::Void set_MaxBuyTimes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_MAXBUYTIMES_OFFSET))(this, a1);
		}

		::RPG::Client::DateTimePro get_BeginTime()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_BEGINTIME_OFFSET))(this);
		}

		::System::Void set_BeginTime(::RPG::Client::DateTimePro a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_BEGINTIME_OFFSET))(this, a1);
		}

		::RPG::Client::DateTimePro get_EndTime()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_ENDTIME_OFFSET))(this);
		}

		::System::Void set_EndTime(::RPG::Client::DateTimePro a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_ENDTIME_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_ISINSCHEDULE_OFFSET))(this);
		}

		::System::Boolean get_IsSoldOut()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_ISSOLDOUT_OFFSET))(this);
		}

		::System::Boolean get_IsFirstRecharge()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_ISFIRSTRECHARGE_OFFSET))(this);
		}

		::System::Void set_IsFirstRecharge(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_ISFIRSTRECHARGE_OFFSET))(this, a1);
		}

		::RPG::GameCore::RechargeConfigRow* get_Row()
		{
			return ((::RPG::GameCore::RechargeConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_ROW_OFFSET))(this);
		}

		::System::Boolean get_IsBP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_ISBP_OFFSET))(this);
		}

		::System::Void SetProduct(::System::String* a1, ::System::String* a2, ::Enum_3_7CF3F1C413CAE286 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Enum_3_7CF3F1C413CAE286, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SETPRODUCT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetBuyTimes(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SETBUYTIMES_OFFSET))(this, a1, a2);
		}

		::System::Void SetSchedule(::System::Int64 a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SETSCHEDULE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateInfo(::HoudiniEngineUnity::JSONObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::JSONObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_UPDATEINFO_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_TOSTRING_OFFSET))(this);
		}
	};
}
