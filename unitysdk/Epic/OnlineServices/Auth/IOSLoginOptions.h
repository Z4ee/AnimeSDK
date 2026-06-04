#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Auth/AuthScopeFlags.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Auth { class IOSCredentials; }

#define EPIC_ONLINESERVICES_AUTH_IOSLOGINOPTIONS_GET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0xA0DAB40)
#define EPIC_ONLINESERVICES_AUTH_IOSLOGINOPTIONS_GET_SCOPEFLAGS_OFFSET UNITYSDK_OFFSET(0xA0DAB60)
#define EPIC_ONLINESERVICES_AUTH_IOSLOGINOPTIONS_SET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0xA0DAB50)
#define EPIC_ONLINESERVICES_AUTH_IOSLOGINOPTIONS_SET_SCOPEFLAGS_OFFSET UNITYSDK_OFFSET(0xA0DAB70)
#define EPIC_ONLINESERVICES_AUTH_IOSLOGINOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA0DAB80)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int IOSLoginOptions_TypeDefinitionIndex = 43226;

	class IOSLoginOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::Auth::IOSCredentials* _Credentials_k__BackingField; // 0x10
		::Epic::OnlineServices::Auth::AuthScopeFlags _ScopeFlags_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSLOGINOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Auth::IOSCredentials* get_Credentials()
		{
			return ((::Epic::OnlineServices::Auth::IOSCredentials*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSLOGINOPTIONS_GET_CREDENTIALS_OFFSET))(this);
		}

		::System::Void set_Credentials(::Epic::OnlineServices::Auth::IOSCredentials* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::IOSCredentials*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSLOGINOPTIONS_SET_CREDENTIALS_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Auth::AuthScopeFlags get_ScopeFlags()
		{
			return ((::Epic::OnlineServices::Auth::AuthScopeFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSLOGINOPTIONS_GET_SCOPEFLAGS_OFFSET))(this);
		}

		::System::Void set_ScopeFlags(::Epic::OnlineServices::Auth::AuthScopeFlags a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::AuthScopeFlags))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_IOSLOGINOPTIONS_SET_SCOPEFLAGS_OFFSET))(this, a1);
		}
	};
}
