#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKGAMEROLEMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x184F8070)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKGameRoleModel_TypeDefinitionIndex = 44620;

	class MiHoYoSDKGameRoleModel : public ::System::Object
	{
	public:
		::System::String* server_id; // 0x10
		::System::String* server_name; // 0x18
		::System::String* role_id; // 0x20
		::System::String* role_name; // 0x28
		::System::String* role_level; // 0x30
		::System::String* vip_level; // 0x38
		::System::String* role_create_time; // 0x40
		::System::String* profession_id; // 0x48
		::System::String* profession; // 0x50
		::System::String* gender; // 0x58
		::System::String* power; // 0x60
		::System::String* balance; // 0x68
		::System::String* party_id; // 0x70
		::System::String* party_name; // 0x78
		::System::String* party_role_id; // 0x80
		::System::String* party_role_name; // 0x88
		::System::String* account_id; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKGAMEROLEMODEL__CTOR_OFFSET))(this);
		}
	};
}
