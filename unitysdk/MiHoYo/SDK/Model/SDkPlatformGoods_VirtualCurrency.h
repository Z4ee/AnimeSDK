#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_VIRTUALCURRENCY_GET_BONUS_ONCE_ELIGIBLE_OFFSET UNITYSDK_OFFSET(0x13E9DC30)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_VIRTUALCURRENCY_GET_COUNT_BONUS_OFFSET UNITYSDK_OFFSET(0x13E9DC10)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_VIRTUALCURRENCY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x13E9DBF0)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_VIRTUALCURRENCY_SET_BONUS_ONCE_ELIGIBLE_OFFSET UNITYSDK_OFFSET(0x13E9DC40)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_VIRTUALCURRENCY_SET_COUNT_BONUS_OFFSET UNITYSDK_OFFSET(0x13E9DC20)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_VIRTUALCURRENCY_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x13E9DC00)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_VIRTUALCURRENCY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x13E9DC50)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_VIRTUALCURRENCY__CTOR_OFFSET UNITYSDK_OFFSET(0x13E9DD50)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_VIRTUALCURRENCY___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x13E9DD60)

namespace MiHoYo::SDK::Model
{
	inline static constexpr unsigned int SDkPlatformGoods_VirtualCurrency_TypeDefinitionIndex = 79204;

	class SDkPlatformGoods_VirtualCurrency : public ::System::Object
	{
	public:
		::System::UInt32 _count_k__BackingField; // 0x10
		::System::UInt32 _count_bonus_k__BackingField; // 0x14
		::System::Boolean _bonus_once_eligible_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_VIRTUALCURRENCY__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_count()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_VIRTUALCURRENCY_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_count(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_VIRTUALCURRENCY_SET_COUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_count_bonus()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_VIRTUALCURRENCY_GET_COUNT_BONUS_OFFSET))(this);
		}

		::System::Void set_count_bonus(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_VIRTUALCURRENCY_SET_COUNT_BONUS_OFFSET))(this, value);
		}

		::System::Boolean get_bonus_once_eligible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_VIRTUALCURRENCY_GET_BONUS_ONCE_ELIGIBLE_OFFSET))(this);
		}

		::System::Void set_bonus_once_eligible(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_VIRTUALCURRENCY_SET_BONUS_ONCE_ELIGIBLE_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_VIRTUALCURRENCY_TOSTRING_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_VIRTUALCURRENCY___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
