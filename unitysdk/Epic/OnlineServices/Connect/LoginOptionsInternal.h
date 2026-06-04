#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Connect { class Credentials; }
namespace Epic::OnlineServices::Connect { class LoginOptions; }
namespace Epic::OnlineServices::Connect { class UserLoginInfo; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_CONNECT_LOGINOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x37520)
#define EPIC_ONLINESERVICES_CONNECT_LOGINOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x374A0)
#define EPIC_ONLINESERVICES_CONNECT_LOGINOPTIONSINTERNAL_SET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x37290)
#define EPIC_ONLINESERVICES_CONNECT_LOGINOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x37490)
#define EPIC_ONLINESERVICES_CONNECT_LOGINOPTIONSINTERNAL_SET_USERLOGININFO_OFFSET UNITYSDK_OFFSET(0x373A0)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int LoginOptionsInternal_TypeDefinitionIndex = 43106;

	struct alignas(8) LoginOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_Credentials; // 0x18
		::System::IntPtr m_UserLoginInfo; // 0x20

		::System::Void set_Credentials(::Epic::OnlineServices::Connect::Credentials* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::Credentials*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINOPTIONSINTERNAL_SET_CREDENTIALS_OFFSET))(this, a1);
		}

		::System::Void set_UserLoginInfo(::Epic::OnlineServices::Connect::UserLoginInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::UserLoginInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINOPTIONSINTERNAL_SET_USERLOGININFO_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Connect::LoginOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::LoginOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
