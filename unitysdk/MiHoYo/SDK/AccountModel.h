#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/AuthTicketThirdParty.h"
#include "unitysdk/MiHoYo/SDK/LOGIN_TYPE.h"
#include "unitysdk/MiHoYo/SDK/LoginPattern.h"
#include "unitysdk/MiHoYo/SDK/LoginTokenType.h"
#include "unitysdk/MiHoYo/SDK/REGION.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ThirdPartyInfoModel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_ACCOUNTMODEL_GETTOKEN_OFFSET UNITYSDK_OFFSET(0x1B72B580)
#define MIHOYO_SDK_ACCOUNTMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B72A7A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AccountModel_TypeDefinitionIndex = 7819;

	class AccountModel : public ::System::Object
	{
	public:
		::System::String* uid; // 0x10
		::System::String* mid; // 0x18
		::System::String* name; // 0x20
		::System::String* email; // 0x28
		::System::String* mobile; // 0x30
		::System::Boolean is_email_verify; // 0x38
		::System::String* realname; // 0x40
		::System::String* identity_card; // 0x48
		::MiHoYo::SDK::LoginTokenType token_type; // 0x50
		::System::String* token; // 0x58
		::System::String* stoken; // 0x60
		::System::Boolean is_guest; // 0x68
		::System::String* guest_id; // 0x70
		::System::String* safe_mobile; // 0x78
		::System::String* account; // 0x80
		::System::Boolean is_login; // 0x88
		::MiHoYo::SDK::LOGIN_TYPE login_type; // 0x8C
		::System::String* payload; // 0x90
		::System::Int32 channel_id; // 0x98
		::System::String* asterisk_name; // 0xA0
		::System::String* accessToken; // 0xA8
		::System::String* deviceId; // 0xB0
		::System::String* country; // 0xB8
		::System::String* area_code; // 0xC0
		::System::String* reactivate_ticket; // 0xC8
		::System::String* device_grant_ticket; // 0xD0
		::System::Int64 thirdLoginTimestamp; // 0xD8
		::System::String* account_display_type; // 0xE0
		::System::String* imageName; // 0xE8
		::MiHoYo::SDK::LoginPattern loginPattern; // 0xF0
		::System::Int64 loginTime; // 0xF8
		::System::Boolean agreeSaveAccount; // 0x100
		::System::Boolean emailLastLogin; // 0x101
		::MiHoYo::SDK::AuthTicketThirdParty authTicketThirdParty; // 0x104
		::System::Collections::Generic::List_1<::MiHoYo::SDK::ThirdPartyInfoModel*>* links; // 0x108
		::System::Boolean agree_persistent_login_data; // 0x110
		::MiHoYo::SDK::REGION eRegion; // 0x114

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMODEL__CTOR_OFFSET))(this);
		}

		::System::String* GetToken()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMODEL_GETTOKEN_OFFSET))(this);
		}
	};
}
