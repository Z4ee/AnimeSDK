#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_BP_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x144BA130)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_BP_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x144BA140)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_BP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x144BA150)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_BP__CTOR_OFFSET UNITYSDK_OFFSET(0x144BA1C0)
#define MIHOYO_SDK_MODEL_SDKPLATFORMGOODS_BP___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x144BA1D0)

namespace MiHoYo::SDK::Model
{
	inline static constexpr unsigned int SDkPlatformGoods_Bp_TypeDefinitionIndex = 65160;

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
