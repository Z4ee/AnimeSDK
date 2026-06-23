#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System { class String; }

#define MIHOYO_SDK_COMBOUSERMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6B1480)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ComboUserModel_TypeDefinitionIndex = 19631;

	class ComboUserModel : public ::System::Object
	{
	public:
		::System::Int32 app_id; // 0x10
		::System::Int32 channel_id; // 0x14
		::System::Int32 account_type; // 0x18
		::System::Int64 combo_id; // 0x20
		::System::String* open_id; // 0x28
		::System::String* combo_token; // 0x30
		::System::String* channel_token; // 0x38
		::System::String* device_id; // 0x40
		::System::Boolean guest; // 0x48
		::System::Int32 login_type; // 0x4C
		::System::Boolean is_new_register; // 0x50
		::System::String* online_id; // 0x58
		::System::String* ps_account_id; // 0x60
		::System::String* ext; // 0x68
		::System::Boolean heartbeat; // 0x70
		::System::String* open_token; // 0x78
		::System::String* asterisk_name; // 0x80

		::System::Void _ctor(::MiHoYo::SDK::JSONNode* json)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMBOUSERMODEL__CTOR_OFFSET))(this, json);
		}
	};
}
