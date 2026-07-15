#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Auth/AuthScopeFlags.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Auth { class Credentials; }

#define EPIC_ONLINESERVICES_AUTH_LOGINOPTIONS_GET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1BBBC470)
#define EPIC_ONLINESERVICES_AUTH_LOGINOPTIONS_GET_SCOPEFLAGS_OFFSET UNITYSDK_OFFSET(0x1BBBC490)
#define EPIC_ONLINESERVICES_AUTH_LOGINOPTIONS_SET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1BBBC480)
#define EPIC_ONLINESERVICES_AUTH_LOGINOPTIONS_SET_SCOPEFLAGS_OFFSET UNITYSDK_OFFSET(0x1BBBC4A0)
#define EPIC_ONLINESERVICES_AUTH_LOGINOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBBC4B0)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int LoginOptions_TypeDefinitionIndex = 44043;

	class LoginOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::Auth::Credentials* _Credentials_k__BackingField; // 0x10
		::Epic::OnlineServices::Auth::AuthScopeFlags _ScopeFlags_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Auth::Credentials* get_Credentials()
		{
			return ((::Epic::OnlineServices::Auth::Credentials*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINOPTIONS_GET_CREDENTIALS_OFFSET))(this);
		}

		::System::Void set_Credentials(::Epic::OnlineServices::Auth::Credentials* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::Credentials*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINOPTIONS_SET_CREDENTIALS_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Auth::AuthScopeFlags get_ScopeFlags()
		{
			return ((::Epic::OnlineServices::Auth::AuthScopeFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINOPTIONS_GET_SCOPEFLAGS_OFFSET))(this);
		}

		::System::Void set_ScopeFlags(::Epic::OnlineServices::Auth::AuthScopeFlags a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::AuthScopeFlags))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINOPTIONS_SET_SCOPEFLAGS_OFFSET))(this, a1);
		}
	};
}
