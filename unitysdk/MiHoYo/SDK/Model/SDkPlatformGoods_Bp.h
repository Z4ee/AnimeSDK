#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_BP_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x12C9BD70)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_BP_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x12C9BD80)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_BP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12C9BD90)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_BP__CTOR_OFFSET UNITYSDK_OFFSET(0x12C9BE00)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_BP___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12C9BE10)

namespace MiHoYo::SDK::Model
{
	inline static constexpr unsigned int SDkPlatformGoods_Bp_TypeDefinitionIndex = 79202;

	class SDkPlatformGoods_Bp : public ::System::Object
	{
	public:
		::System::String* _type_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_BP__CTOR_OFFSET))(this);
		}

		::System::String* get_type()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_BP_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_type(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_BP_SET_TYPE_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_BP_TOSTRING_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_BP___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
