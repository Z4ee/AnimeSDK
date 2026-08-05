#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKThirdLoginConfigs; }
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKCONFIGMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC55DE0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKConfigModel_TypeDefinitionIndex = 37386;

	class MiHoYoSDKConfigModel : public ::System::Object
	{
	public:
		::System::Int32 id; // 0x10
		::System::String* game_key; // 0x18
		::System::String* app_key; // 0x20
		::System::String* app_id; // 0x28
		::System::String* channel_id; // 0x30
		::System::String* client; // 0x38
		::System::String* identity; // 0x40
		::System::Boolean guest; // 0x48
		::System::String* ignoreVersions; // 0x50
		::System::String* ignore_versions; // 0x58
		::System::String* scene; // 0x60
		::System::String* combo_app_id; // 0x68
		::System::String* combo_app_key; // 0x70
		::System::Boolean disable_regist; // 0x78
		::System::Boolean fb; // 0x79
		::System::Boolean tw; // 0x7A
		::System::Boolean tp; // 0x7B
		::System::String* taptap_client_id; // 0x80
		::System::String* google_client_id; // 0x88
		::Il2CppArray<::System::String*>* thirdparty; // 0x90
		::System::String* sub_channel_id; // 0x98
		::System::Boolean enable_ps_bind_account; // 0xA0
		::System::Boolean enable_crash_sdk; // 0xA1
		::System::String* area; // 0xA8
		::MiHoYo::SDK::MiHoYoSDKThirdLoginConfigs* thirdparty_login_configs; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKCONFIGMODEL__CTOR_OFFSET))(this);
		}
	};
}
