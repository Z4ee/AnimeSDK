#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Auth/AuthScopeFlags.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Auth { class Credentials; }
namespace Epic::OnlineServices::Auth { class LoginOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_AUTH_LOGINOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2C560)
#define EPIC_ONLINESERVICES_AUTH_LOGINOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x2C550)
#define EPIC_ONLINESERVICES_AUTH_LOGINOPTIONSINTERNAL_SET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x2C460)
#define EPIC_ONLINESERVICES_AUTH_LOGINOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x2C4D0)
#define EPIC_ONLINESERVICES_AUTH_LOGINOPTIONSINTERNAL_SET_SCOPEFLAGS_OFFSET UNITYSDK_OFFSET(0x26F0)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int LoginOptionsInternal_TypeDefinitionIndex = 36554;

	struct alignas(8) LoginOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_Credentials; // 0x18
		::Epic::OnlineServices::Auth::AuthScopeFlags m_ScopeFlags; // 0x20

		::System::Void set_Credentials(::Epic::OnlineServices::Auth::Credentials* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::Credentials*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINOPTIONSINTERNAL_SET_CREDENTIALS_OFFSET))(this, value);
		}

		::System::Void set_ScopeFlags(::Epic::OnlineServices::Auth::AuthScopeFlags value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::AuthScopeFlags))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINOPTIONSINTERNAL_SET_SCOPEFLAGS_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Auth::LoginOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::LoginOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
