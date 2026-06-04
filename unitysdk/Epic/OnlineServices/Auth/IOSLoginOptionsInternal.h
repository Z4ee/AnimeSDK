#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Auth/AuthScopeFlags.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Auth { class IOSCredentials; }
namespace Epic::OnlineServices::Auth { class IOSLoginOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_AUTH_IOSLOGINOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12050)
#define EPIC_ONLINESERVICES_AUTH_IOSLOGINOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x12040)
#define EPIC_ONLINESERVICES_AUTH_IOSLOGINOPTIONSINTERNAL_SET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x11F50)
#define EPIC_ONLINESERVICES_AUTH_IOSLOGINOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x11FC0)
#define EPIC_ONLINESERVICES_AUTH_IOSLOGINOPTIONSINTERNAL_SET_SCOPEFLAGS_OFFSET UNITYSDK_OFFSET(0x2A90)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int IOSLoginOptionsInternal_TypeDefinitionIndex = 43227;

	struct alignas(8) IOSLoginOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_Credentials; // 0x18
		::Epic::OnlineServices::Auth::AuthScopeFlags m_ScopeFlags; // 0x20

		::System::Void set_Credentials(::Epic::OnlineServices::Auth::IOSCredentials* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::IOSCredentials*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSLOGINOPTIONSINTERNAL_SET_CREDENTIALS_OFFSET))(this, a1);
		}

		::System::Void set_ScopeFlags(::Epic::OnlineServices::Auth::AuthScopeFlags a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::AuthScopeFlags))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSLOGINOPTIONSINTERNAL_SET_SCOPEFLAGS_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Auth::IOSLoginOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::IOSLoginOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSLOGINOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSLOGINOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSLOGINOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
