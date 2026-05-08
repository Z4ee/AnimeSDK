#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_VIP_GET_VALID_UNTIL_OFFSET UNITYSDK_OFFSET(0x12CFA250)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_VIP_SET_VALID_UNTIL_OFFSET UNITYSDK_OFFSET(0x12CFA260)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_VIP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12CFA270)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_VIP__CTOR_OFFSET UNITYSDK_OFFSET(0x12CFA2E0)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_VIP___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12CFA2F0)

namespace MiHoYo::SDK::Model
{
	inline static constexpr unsigned int SDkPlatformGoods_Vip_TypeDefinitionIndex = 49486;

	class SDkPlatformGoods_Vip : public ::System::Object
	{
	public:
		::System::String* _valid_until_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_VIP__CTOR_OFFSET))(this);
		}

		::System::String* get_valid_until()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_VIP_GET_VALID_UNTIL_OFFSET))(this);
		}

		::System::Void set_valid_until(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_VIP_SET_VALID_UNTIL_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_VIP_TOSTRING_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_VIP___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
