#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/LOGIN_TYPE.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKUSERDATAMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A87DF20)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKUserDataModel_TypeDefinitionIndex = 35193;

	class MiHoYoSDKUserDataModel : public ::System::Object
	{
	public:
		::System::String* uid; // 0x10
		::System::String* name; // 0x18
		::System::String* email; // 0x20
		::System::String* mobile; // 0x28
		::System::Boolean is_email_verify; // 0x30
		::System::String* realname; // 0x38
		::System::String* identity_card; // 0x40
		::System::String* token; // 0x48
		::System::Boolean is_guest; // 0x50
		::System::String* guest_id; // 0x58
		::System::String* safe_mobile; // 0x60
		::System::String* account; // 0x68
		::System::Boolean is_login; // 0x70
		::MiHoYo::SDK::LOGIN_TYPE login_type; // 0x74
		::System::String* payload; // 0x78
		::System::Int32 channel_id; // 0x80
		::System::String* asterisk_name; // 0x88
		::System::String* accessToken; // 0x90
		::System::String* deviceId; // 0x98
		::System::String* country; // 0xA0
		::System::String* area_code; // 0xA8
		::System::Int64 thirdLoginTimestamp; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUSERDATAMODEL__CTOR_OFFSET))(this);
		}
	};
}
