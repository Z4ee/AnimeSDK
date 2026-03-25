#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7CED31C413C530F0.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class JSONObject; }
namespace RPG::GameCore { class RechargeConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_PRODUCT_GET_BEGINTIME_OFFSET UNITYSDK_OFFSET(0x9FF9AE0)
#define RPG_CLIENT_PRODUCT_GET_BUYTIMES_OFFSET UNITYSDK_OFFSET(0x9FF9AA0)
#define RPG_CLIENT_PRODUCT_GET_COUNTRYCODE_OFFSET UNITYSDK_OFFSET(0x9FF97D0)
#define RPG_CLIENT_PRODUCT_GET_CURRENCYCODE_OFFSET UNITYSDK_OFFSET(0x9FF97F0)
#define RPG_CLIENT_PRODUCT_GET_CURRENCYSYMBOL_OFFSET UNITYSDK_OFFSET(0x9FF9810)
#define RPG_CLIENT_PRODUCT_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x9FF9B00)
#define RPG_CLIENT_PRODUCT_GET_GIFTVERSION_OFFSET UNITYSDK_OFFSET(0x9FF9A80)
#define RPG_CLIENT_PRODUCT_GET_ISBP_OFFSET UNITYSDK_OFFSET(0x9FF9D40)
#define RPG_CLIENT_PRODUCT_GET_ISFIRSTRECHARGE_OFFSET UNITYSDK_OFFSET(0x9FF9D20)
#define RPG_CLIENT_PRODUCT_GET_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0x9FF9B20)
#define RPG_CLIENT_PRODUCT_GET_ISSOLDOUT_OFFSET UNITYSDK_OFFSET(0x9FF9CC0)
#define RPG_CLIENT_PRODUCT_GET_LOCALIZEDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9FF9830)
#define RPG_CLIENT_PRODUCT_GET_LOCALIZEDTITLE_OFFSET UNITYSDK_OFFSET(0x9FF9850)
#define RPG_CLIENT_PRODUCT_GET_MAXBUYTIMES_OFFSET UNITYSDK_OFFSET(0x9FF9AC0)
#define RPG_CLIENT_PRODUCT_GET_PRICETIER_OFFSET UNITYSDK_OFFSET(0x9FF97B0)
#define RPG_CLIENT_PRODUCT_GET_PRICE_OFFSET UNITYSDK_OFFSET(0x9FF9A40)
#define RPG_CLIENT_PRODUCT_GET_PRODUCTGIFTTYPE_OFFSET UNITYSDK_OFFSET(0x9FF9A60)
#define RPG_CLIENT_PRODUCT_GET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0x9FF9790)
#define RPG_CLIENT_PRODUCT_GET_ROW_OFFSET UNITYSDK_OFFSET(0x9FF99C0)
#define RPG_CLIENT_PRODUCT_GET_SHOWPRICE_OFFSET UNITYSDK_OFFSET(0x9FF9A20)
#define RPG_CLIENT_PRODUCT_SETBUYTIMES_OFFSET UNITYSDK_OFFSET(0x9FF9EF0)
#define RPG_CLIENT_PRODUCT_SETPRODUCT_OFFSET UNITYSDK_OFFSET(0x9FF9E40)
#define RPG_CLIENT_PRODUCT_SETSCHEDULE_OFFSET UNITYSDK_OFFSET(0x9FF9F50)
#define RPG_CLIENT_PRODUCT_SET_BEGINTIME_OFFSET UNITYSDK_OFFSET(0x9FF9AF0)
#define RPG_CLIENT_PRODUCT_SET_BUYTIMES_OFFSET UNITYSDK_OFFSET(0x9FF9AB0)
#define RPG_CLIENT_PRODUCT_SET_COUNTRYCODE_OFFSET UNITYSDK_OFFSET(0x9FF97E0)
#define RPG_CLIENT_PRODUCT_SET_CURRENCYCODE_OFFSET UNITYSDK_OFFSET(0x9FF9800)
#define RPG_CLIENT_PRODUCT_SET_CURRENCYSYMBOL_OFFSET UNITYSDK_OFFSET(0x9FF9820)
#define RPG_CLIENT_PRODUCT_SET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x9FF9B10)
#define RPG_CLIENT_PRODUCT_SET_GIFTVERSION_OFFSET UNITYSDK_OFFSET(0x9FF9A90)
#define RPG_CLIENT_PRODUCT_SET_ISFIRSTRECHARGE_OFFSET UNITYSDK_OFFSET(0x9FF9D30)
#define RPG_CLIENT_PRODUCT_SET_LOCALIZEDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9FF9840)
#define RPG_CLIENT_PRODUCT_SET_MAXBUYTIMES_OFFSET UNITYSDK_OFFSET(0x9FF9AD0)
#define RPG_CLIENT_PRODUCT_SET_PRICETIER_OFFSET UNITYSDK_OFFSET(0x9FF97C0)
#define RPG_CLIENT_PRODUCT_SET_PRICE_OFFSET UNITYSDK_OFFSET(0x9FF9A50)
#define RPG_CLIENT_PRODUCT_SET_PRODUCTGIFTTYPE_OFFSET UNITYSDK_OFFSET(0x9FF9A70)
#define RPG_CLIENT_PRODUCT_SET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0x9FF97A0)
#define RPG_CLIENT_PRODUCT_SET_SHOWPRICE_OFFSET UNITYSDK_OFFSET(0x9FF9A30)
#define RPG_CLIENT_PRODUCT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9FFA6C0)
#define RPG_CLIENT_PRODUCT_UPDATEINFO_OFFSET UNITYSDK_OFFSET(0x9FFA010)
#define RPG_CLIENT_PRODUCT__CTOR_OFFSET UNITYSDK_OFFSET(0x9FF9D90)
#define RPG_CLIENT_PRODUCT___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9FFA950)

namespace RPG::Client
{
	inline static constexpr unsigned int Product_TypeDefinitionIndex = 54034;

	class Product : public ::System::Object
	{
	public:
		::System::String* _PriceTier; // 0x10
		::System::String* _LocalizedDescription_k__BackingField; // 0x18
		::System::String* _ProductID_k__BackingField; // 0x20
		::System::String* _CurrencySymbol_k__BackingField; // 0x28
		::System::String* _CountryCode_k__BackingField; // 0x30
		::System::String* _CurrencyCode_k__BackingField; // 0x38
		::System::String* _ShowPrice_k__BackingField; // 0x40
		::Enum_3_7CED31C413C530F0 _ProductGiftType_k__BackingField; // 0x48
		::System::Boolean _IsFirstRecharge_k__BackingField; // 0x4C
		::System::UInt32 _BuyTimes_k__BackingField; // 0x50
		::System::Single _Price_k__BackingField; // 0x54
		::System::UInt32 _GiftVersion_k__BackingField; // 0x58
		::System::UInt32 _MaxBuyTimes_k__BackingField; // 0x5C
		::RPG::Client::DateTimePro _EndTime_k__BackingField; // 0x60
		::RPG::Client::DateTimePro _BeginTime_k__BackingField; // 0x68

		::System::Void _ctor(::System::String* id, ::System::String* priceTier, ::Enum_3_7CED31C413C530F0 productGiftType, ::System::UInt32 giftVersion)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Enum_3_7CED31C413C530F0, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT__CTOR_OFFSET))(this, id, priceTier, productGiftType, giftVersion);
		}

		::System::String* get_ProductID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_PRODUCTID_OFFSET))(this);
		}

		::System::Void set_ProductID(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_PRODUCTID_OFFSET))(this, value);
		}

		::System::String* get_PriceTier()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_PRICETIER_OFFSET))(this);
		}

		::System::Void set_PriceTier(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_PRICETIER_OFFSET))(this, value);
		}

		::System::String* get_CountryCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_COUNTRYCODE_OFFSET))(this);
		}

		::System::Void set_CountryCode(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_COUNTRYCODE_OFFSET))(this, value);
		}

		::System::String* get_CurrencyCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_CURRENCYCODE_OFFSET))(this);
		}

		::System::Void set_CurrencyCode(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_CURRENCYCODE_OFFSET))(this, value);
		}

		::System::String* get_CurrencySymbol()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_CURRENCYSYMBOL_OFFSET))(this);
		}

		::System::Void set_CurrencySymbol(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_CURRENCYSYMBOL_OFFSET))(this, value);
		}

		::System::String* get_LocalizedDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_LOCALIZEDDESCRIPTION_OFFSET))(this);
		}

		::System::Void set_LocalizedDescription(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_LOCALIZEDDESCRIPTION_OFFSET))(this, value);
		}

		::System::String* get_LocalizedTitle()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_LOCALIZEDTITLE_OFFSET))(this);
		}

		::System::String* get_ShowPrice()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_SHOWPRICE_OFFSET))(this);
		}

		::System::Void set_ShowPrice(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_SHOWPRICE_OFFSET))(this, value);
		}

		::System::Single get_Price()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_PRICE_OFFSET))(this);
		}

		::System::Void set_Price(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_PRICE_OFFSET))(this, value);
		}

		::Enum_3_7CED31C413C530F0 get_ProductGiftType()
		{
			return ((::Enum_3_7CED31C413C530F0(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_PRODUCTGIFTTYPE_OFFSET))(this);
		}

		::System::Void set_ProductGiftType(::Enum_3_7CED31C413C530F0 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_7CED31C413C530F0))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_PRODUCTGIFTTYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_GiftVersion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_GIFTVERSION_OFFSET))(this);
		}

		::System::Void set_GiftVersion(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_GIFTVERSION_OFFSET))(this, value);
		}

		::System::UInt32 get_BuyTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_BUYTIMES_OFFSET))(this);
		}

		::System::Void set_BuyTimes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_BUYTIMES_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxBuyTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_MAXBUYTIMES_OFFSET))(this);
		}

		::System::Void set_MaxBuyTimes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_MAXBUYTIMES_OFFSET))(this, value);
		}

		::RPG::Client::DateTimePro get_BeginTime()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_BEGINTIME_OFFSET))(this);
		}

		::System::Void set_BeginTime(::RPG::Client::DateTimePro value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_BEGINTIME_OFFSET))(this, value);
		}

		::RPG::Client::DateTimePro get_EndTime()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_ENDTIME_OFFSET))(this);
		}

		::System::Void set_EndTime(::RPG::Client::DateTimePro value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_ENDTIME_OFFSET))(this, value);
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

		::System::Void set_IsFirstRecharge(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_ISFIRSTRECHARGE_OFFSET))(this, value);
		}

		::RPG::GameCore::RechargeConfigRow* get_Row()
		{
			return ((::RPG::GameCore::RechargeConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_ROW_OFFSET))(this);
		}

		::System::Boolean get_IsBP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_ISBP_OFFSET))(this);
		}

		::System::Void SetProduct(::System::String* id, ::System::String* priceTier, ::Enum_3_7CED31C413C530F0 productGiftType, ::System::UInt32 giftVersion)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Enum_3_7CED31C413C530F0, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SETPRODUCT_OFFSET))(this, id, priceTier, productGiftType, giftVersion);
		}

		::System::Void SetBuyTimes(::System::UInt32 buyTimes, ::System::UInt32 maxBuyTimes)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SETBUYTIMES_OFFSET))(this, buyTimes, maxBuyTimes);
		}

		::System::Void SetSchedule(::System::Int64 beginTime, ::System::Int64 endTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SETSCHEDULE_OFFSET))(this, beginTime, endTime);
		}

		::System::Void UpdateInfo(::HoudiniEngineUnity::JSONObject* jsonObject)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::JSONObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_UPDATEINFO_OFFSET))(this, jsonObject);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_TOSTRING_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
