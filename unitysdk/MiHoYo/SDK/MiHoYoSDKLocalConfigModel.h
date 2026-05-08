#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKConfigUrlModel; }
namespace MiHoYo::SDK { class MiHoYoSDKEOSParametersModel; }
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKLOCALCONFIGMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE3C630)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKLocalConfigModel_TypeDefinitionIndex = 35173;

	class MiHoYoSDKLocalConfigModel : public ::System::Object
	{
	public:
		::System::String* area; // 0x10
		::System::Int32 env; // 0x18
		::System::String* app_id; // 0x20
		::System::String* app_key; // 0x28
		::System::String* channel_id; // 0x30
		::System::String* cp_app_id; // 0x38
		::System::String* cp_app_key; // 0x40
		::System::String* taptap_client_id; // 0x48
		::System::String* google_client_id; // 0x50
		::System::String* domain_prefix; // 0x58
		::System::Boolean enable_crash_sdk; // 0x60
		::System::String* api_sdk_domain; // 0x68
		::System::String* game_api_domain; // 0x70
		::System::String* user_mihoyo_domain; // 0x78
		::System::String* multi_language_domain; // 0x80
		::System::String* data_report_domain; // 0x88
		::System::String* activity_domain; // 0x90
		::System::String* kibana_domain; // 0x98
		::System::String* protocol_domain; // 0xA0
		::System::String* cdn_domain; // 0xA8
		::System::String* config_domain; // 0xB0
		::System::String* check_domain; // 0xB8
		::MiHoYo::SDK::MiHoYoSDKEOSParametersModel* eos_parameters; // 0xC0
		::MiHoYo::SDK::MiHoYoSDKConfigUrlModel* url; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKLOCALCONFIGMODEL__CTOR_OFFSET))(this);
		}
	};
}
