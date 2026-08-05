#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_PRICE_GET_AMOUNT_DECIMAL_OFFSET UNITYSDK_OFFSET(0x13E9D640)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_PRICE_GET_AMOUNT_DISPLAY_OFFSET UNITYSDK_OFFSET(0x13E9D660)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_PRICE_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x13E9D620)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_PRICE_GET_CURRENCY_OFFSET UNITYSDK_OFFSET(0x13E9D680)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_PRICE_GET_CURRENCY_SYMBOL_OFFSET UNITYSDK_OFFSET(0x13E9D6A0)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_PRICE_GET_ORIGINAL_AMOUNT_DISPLAY_OFFSET UNITYSDK_OFFSET(0x13E9D6E0)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_PRICE_GET_TIER_OFFSET UNITYSDK_OFFSET(0x13E9D6C0)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_PRICE_SET_AMOUNT_DECIMAL_OFFSET UNITYSDK_OFFSET(0x13E9D650)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_PRICE_SET_AMOUNT_DISPLAY_OFFSET UNITYSDK_OFFSET(0x13E9D670)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_PRICE_SET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x13E9D630)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_PRICE_SET_CURRENCY_OFFSET UNITYSDK_OFFSET(0x13E9D690)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_PRICE_SET_CURRENCY_SYMBOL_OFFSET UNITYSDK_OFFSET(0x13E9D6B0)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_PRICE_SET_ORIGINAL_AMOUNT_DISPLAY_OFFSET UNITYSDK_OFFSET(0x13E9D6F0)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_PRICE_SET_TIER_OFFSET UNITYSDK_OFFSET(0x13E9D6D0)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_PRICE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x13E9D700)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_PRICE__CTOR_OFFSET UNITYSDK_OFFSET(0x13E9DBA0)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_PRICE___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x13E9DBB0)

namespace MiHoYo::SDK::Model
{
	inline static constexpr unsigned int SDkPlatformGoods_Price_TypeDefinitionIndex = 79201;

	class SDkPlatformGoods_Price : public ::System::Object
	{
	public:
		::System::Int32 _amount_k__BackingField; // 0x10
		::System::Int32 _amount_decimal_k__BackingField; // 0x14
		::System::String* _amount_display_k__BackingField; // 0x18
		::System::String* _currency_k__BackingField; // 0x20
		::System::String* _currency_symbol_k__BackingField; // 0x28
		::System::String* _tier_k__BackingField; // 0x30
		::System::String* _original_amount_display_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_PRICE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_amount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_PRICE_GET_AMOUNT_OFFSET))(this);
		}

		::System::Void set_amount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_PRICE_SET_AMOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_amount_decimal()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_PRICE_GET_AMOUNT_DECIMAL_OFFSET))(this);
		}

		::System::Void set_amount_decimal(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_PRICE_SET_AMOUNT_DECIMAL_OFFSET))(this, value);
		}

		::System::String* get_amount_display()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_PRICE_GET_AMOUNT_DISPLAY_OFFSET))(this);
		}

		::System::Void set_amount_display(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_PRICE_SET_AMOUNT_DISPLAY_OFFSET))(this, value);
		}

		::System::String* get_currency()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_PRICE_GET_CURRENCY_OFFSET))(this);
		}

		::System::Void set_currency(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_PRICE_SET_CURRENCY_OFFSET))(this, value);
		}

		::System::String* get_currency_symbol()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_PRICE_GET_CURRENCY_SYMBOL_OFFSET))(this);
		}

		::System::Void set_currency_symbol(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_PRICE_SET_CURRENCY_SYMBOL_OFFSET))(this, value);
		}

		::System::String* get_tier()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_PRICE_GET_TIER_OFFSET))(this);
		}

		::System::Void set_tier(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_PRICE_SET_TIER_OFFSET))(this, value);
		}

		::System::String* get_original_amount_display()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_PRICE_GET_ORIGINAL_AMOUNT_DISPLAY_OFFSET))(this);
		}

		::System::Void set_original_amount_display(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_PRICE_SET_ORIGINAL_AMOUNT_DISPLAY_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_PRICE_TOSTRING_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_PRICE___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
