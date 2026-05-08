#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/KibanaLogLevel.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_KIBANABASEMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x18DBC3D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KibanaBaseModel_TypeDefinitionIndex = 18748;

	class KibanaBaseModel : public ::System::Object
	{
	public:
		::System::String* sdk_version; // 0x10
		::System::Int32 sdk_env; // 0x18
		::System::String* game_biz; // 0x20
		::System::String* channel_id; // 0x28
		::System::String* sub_channel_id; // 0x30
		::System::String* launch_trace_id; // 0x38
		::System::String* age_gate_type; // 0x40
		::System::String* server_id; // 0x48
		::System::String* role_id; // 0x50
		::System::String* aid; // 0x58
		::System::Int32 client_type; // 0x60
		::System::String* sys_version; // 0x68
		::System::String* device_name; // 0x70
		::System::String* device_model; // 0x78
		::System::String* device_id; // 0x80
		::System::String* device_fp; // 0x88
		::System::String* mac_address; // 0x90
		::System::String* mac_description; // 0x98
		::System::String* module; // 0xA0
		::System::Int32 tk_code; // 0xA8
		::System::String* tk_time; // 0xB0
		::System::Int64 tk_timestamp; // 0xB8
		::System::String* tk_request_id; // 0xC0
		::System::String* tk_message; // 0xC8
		::MiHoYo::SDK::KibanaLogLevel log_level; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANABASEMODEL__CTOR_OFFSET))(this);
		}
	};
}
