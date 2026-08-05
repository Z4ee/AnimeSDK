#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKEOSPARAMETERSMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5E23B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKEOSParametersModel_TypeDefinitionIndex = 37399;

	class MiHoYoSDKEOSParametersModel : public ::System::Object
	{
	public:
		::System::String* client_id; // 0x10
		::System::String* client_secret; // 0x18
		::System::String* product_id; // 0x20
		::System::String* sandbox_id; // 0x28
		::System::String* deployment_id; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSPARAMETERSMODEL__CTOR_OFFSET))(this);
		}
	};
}
