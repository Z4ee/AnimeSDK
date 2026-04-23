#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Connect { class Credentials; }
namespace Epic::OnlineServices::Connect { class UserLoginInfo; }

#define EPIC_ONLINESERVICES_CONNECT_LOGINOPTIONS_GET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x8E586D0)
#define EPIC_ONLINESERVICES_CONNECT_LOGINOPTIONS_GET_USERLOGININFO_OFFSET UNITYSDK_OFFSET(0x8E586F0)
#define EPIC_ONLINESERVICES_CONNECT_LOGINOPTIONS_SET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x8E586E0)
#define EPIC_ONLINESERVICES_CONNECT_LOGINOPTIONS_SET_USERLOGININFO_OFFSET UNITYSDK_OFFSET(0x8E58700)
#define EPIC_ONLINESERVICES_CONNECT_LOGINOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8E58710)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int LoginOptions_TypeDefinitionIndex = 42302;

	class LoginOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::Connect::UserLoginInfo* _UserLoginInfo_k__BackingField; // 0x10
		::Epic::OnlineServices::Connect::Credentials* _Credentials_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Connect::Credentials* get_Credentials()
		{
			return ((::Epic::OnlineServices::Connect::Credentials*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINOPTIONS_GET_CREDENTIALS_OFFSET))(this);
		}

		::System::Void set_Credentials(::Epic::OnlineServices::Connect::Credentials* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::Credentials*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINOPTIONS_SET_CREDENTIALS_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Connect::UserLoginInfo* get_UserLoginInfo()
		{
			return ((::Epic::OnlineServices::Connect::UserLoginInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINOPTIONS_GET_USERLOGININFO_OFFSET))(this);
		}

		::System::Void set_UserLoginInfo(::Epic::OnlineServices::Connect::UserLoginInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::UserLoginInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINOPTIONS_SET_USERLOGININFO_OFFSET))(this, value);
		}
	};
}
