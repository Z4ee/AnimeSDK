#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Auth/AuthScopeFlags.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Auth { class Credentials; }

#define EPIC_ONLINESERVICES_AUTH_LOGINOPTIONS_GET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1DF6E240)
#define EPIC_ONLINESERVICES_AUTH_LOGINOPTIONS_GET_SCOPEFLAGS_OFFSET UNITYSDK_OFFSET(0x1DF6E260)
#define EPIC_ONLINESERVICES_AUTH_LOGINOPTIONS_SET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1DF6E250)
#define EPIC_ONLINESERVICES_AUTH_LOGINOPTIONS_SET_SCOPEFLAGS_OFFSET UNITYSDK_OFFSET(0x1DF6E270)
#define EPIC_ONLINESERVICES_AUTH_LOGINOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF6E280)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int LoginOptions_TypeDefinitionIndex = 36820;

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

		::System::Void set_Credentials(::Epic::OnlineServices::Auth::Credentials* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::Credentials*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINOPTIONS_SET_CREDENTIALS_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Auth::AuthScopeFlags get_ScopeFlags()
		{
			return ((::Epic::OnlineServices::Auth::AuthScopeFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINOPTIONS_GET_SCOPEFLAGS_OFFSET))(this);
		}

		::System::Void set_ScopeFlags(::Epic::OnlineServices::Auth::AuthScopeFlags value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::AuthScopeFlags))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINOPTIONS_SET_SCOPEFLAGS_OFFSET))(this, value);
		}
	};
}
