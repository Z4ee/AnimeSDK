#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_CONSUMABLE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x123F2A40)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_CONSUMABLE_GET_CYCLE_COUNT_OFFSET UNITYSDK_OFFSET(0x123F2AC0)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_CONSUMABLE_GET_PURCHASED_COUNT_OFFSET UNITYSDK_OFFSET(0x123F2AA0)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_CONSUMABLE_GET_RESET_MODE_OFFSET UNITYSDK_OFFSET(0x123F2A80)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_CONSUMABLE_GET_RESET_UNTIL_OFFSET UNITYSDK_OFFSET(0x123F2A60)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_CONSUMABLE_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x123F2A50)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_CONSUMABLE_SET_CYCLE_COUNT_OFFSET UNITYSDK_OFFSET(0x123F2AD0)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_CONSUMABLE_SET_PURCHASED_COUNT_OFFSET UNITYSDK_OFFSET(0x123F2AB0)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_CONSUMABLE_SET_RESET_MODE_OFFSET UNITYSDK_OFFSET(0x123F2A90)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_CONSUMABLE_SET_RESET_UNTIL_OFFSET UNITYSDK_OFFSET(0x123F2A70)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_CONSUMABLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x123F2AE0)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_CONSUMABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x123F2ED0)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_CONSUMABLE___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x123F2EE0)

namespace MiHoYo::SDK::Model
{
	inline static constexpr unsigned int SDkPlatformGoods_Consumable_TypeDefinitionIndex = 49485;

	class SDkPlatformGoods_Consumable : public ::System::Object
	{
	public:
		::System::UInt32 _count_k__BackingField; // 0x10
		::System::Int64 _reset_until_k__BackingField; // 0x18
		::System::UInt32 _reset_mode_k__BackingField; // 0x20
		::System::Int32 _purchased_count_k__BackingField; // 0x24
		::System::Int32 _cycle_count_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_CONSUMABLE__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_count()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_CONSUMABLE_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_count(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_CONSUMABLE_SET_COUNT_OFFSET))(this, value);
		}

		::System::Int64 get_reset_until()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_CONSUMABLE_GET_RESET_UNTIL_OFFSET))(this);
		}

		::System::Void set_reset_until(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_CONSUMABLE_SET_RESET_UNTIL_OFFSET))(this, value);
		}

		::System::UInt32 get_reset_mode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_CONSUMABLE_GET_RESET_MODE_OFFSET))(this);
		}

		::System::Void set_reset_mode(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_CONSUMABLE_SET_RESET_MODE_OFFSET))(this, value);
		}

		::System::Int32 get_purchased_count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_CONSUMABLE_GET_PURCHASED_COUNT_OFFSET))(this);
		}

		::System::Void set_purchased_count(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_CONSUMABLE_SET_PURCHASED_COUNT_OFFSET))(this, value);
		}

		::System::Int32 get_cycle_count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_CONSUMABLE_GET_CYCLE_COUNT_OFFSET))(this);
		}

		::System::Void set_cycle_count(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_CONSUMABLE_SET_CYCLE_COUNT_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_CONSUMABLE_TOSTRING_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_CONSUMABLE___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
