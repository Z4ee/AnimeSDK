#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ChannelType.h"
#include "unitysdk/MiHoYo/SDK/SceneType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class ThirdLoginConfigs; }
namespace System { class String; }

#define MIHOYO_SDK_MDKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x15F29C30)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MDKConfig_TypeDefinitionIndex = 6908;

	class MDKConfig : public ::System::Object
	{
	public:
		::System::Int32 id; // 0x10
		::System::String* game_key; // 0x18
		::System::String* app_key; // 0x20
		::System::String* app_id; // 0x28
		::MiHoYo::SDK::ChannelType channel_id; // 0x30
		::System::String* client; // 0x38
		::System::Boolean guest; // 0x40
		::System::String* ignoreVersions; // 0x48
		::System::String* ignore_versions; // 0x50
		::MiHoYo::SDK::SceneType scene; // 0x58
		::System::String* combo_app_id; // 0x60
		::System::String* combo_app_key; // 0x68
		::System::Boolean disable_regist; // 0x70
		::System::Boolean ap; // 0x71
		::System::Boolean gl; // 0x72
		::System::Boolean fb; // 0x73
		::System::Boolean tw; // 0x74
		::System::Boolean tp; // 0x75
		::System::String* name; // 0x78
		::System::Boolean disable_mmt; // 0x80
		::System::Boolean enable_ps_bind_account; // 0x81
		::System::Boolean enable_cx_bind_account; // 0x82
		::System::Boolean hoyoplay_auth_login; // 0x83
		::MiHoYo::SDK::ThirdLoginConfigs* thirdparty_login_configs; // 0x88
		::System::Boolean enable_age_gate; // 0x90

		::System::Void _ctor(::MiHoYo::SDK::JSONNode* json)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MDKCONFIG__CTOR_OFFSET))(this, json);
		}
	};
}
