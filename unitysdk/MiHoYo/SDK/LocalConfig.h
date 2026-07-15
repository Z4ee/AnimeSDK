#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ABTestInfo; }
namespace MiHoYo::SDK { class AbTestConfig; }
namespace MiHoYo::SDK { class AccountPlatConfig; }
namespace MiHoYo::SDK { class BilibiliConfigModel; }
namespace MiHoYo::SDK { class ConfigManager_WebViewABTestModel; }
namespace MiHoYo::SDK { class ConfigUrlModel; }
namespace MiHoYo::SDK { class EOSParametersModel; }
namespace MiHoYo::SDK { class GooglePlayAbTestConfig; }
namespace MiHoYo::SDK { class SteamParametersModel; }
namespace MiHoYo::SDK { class WatermarkInfo; }
namespace System { class String; }

#define MIHOYO_SDK_LOCALCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18218110)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int LocalConfig_TypeDefinitionIndex = 7858;

	class LocalConfig : public ::System::Object
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
		::System::String* apple_client_id; // 0x50
		::System::String* google_client_id; // 0x58
		::System::String* facebook_client_id; // 0x60
		::System::String* twitter_client_id; // 0x68
		::System::String* domain_prefix; // 0x70
		::System::Boolean enable_apm_sdk; // 0x78
		::System::Boolean enable_red_point_text; // 0x79
		::System::Boolean hoyopass_default_config; // 0x7A
		::System::Boolean use_hoyopass_default_config; // 0x7B
		::System::Boolean console_passport_config; // 0x7C
		::System::String* theme; // 0x80
		::System::Int32 passport_env; // 0x88
		::System::String* passport_app_id; // 0x90
		::MiHoYo::SDK::EOSParametersModel* eos_parameters; // 0x98
		::MiHoYo::SDK::ConfigUrlModel* url; // 0xA0
		::MiHoYo::SDK::BilibiliConfigModel* bilibili_sdk; // 0xA8
		::MiHoYo::SDK::WatermarkInfo* watermark; // 0xB0
		::MiHoYo::SDK::AbTestConfig* abtestOS; // 0xB8
		::MiHoYo::SDK::ABTestInfo* abtestCN; // 0xC0
		::MiHoYo::SDK::ConfigManager_WebViewABTestModel* webview; // 0xC8
		::MiHoYo::SDK::AccountPlatConfig* account_platform; // 0xD0
		::System::Boolean ps4_bind_email_can_skip; // 0xD8
		::System::Boolean enable_color_text_fix; // 0xD9
		::System::Boolean enable_googleplaypc_v2; // 0xDA
		::MiHoYo::SDK::GooglePlayAbTestConfig* googleplay_abtest; // 0xE0
		::MiHoYo::SDK::SteamParametersModel* steam_parameters; // 0xE8
		::System::Boolean enable_device_limit; // 0xF0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOCALCONFIG__CTOR_OFFSET))(this);
		}
	};
}
