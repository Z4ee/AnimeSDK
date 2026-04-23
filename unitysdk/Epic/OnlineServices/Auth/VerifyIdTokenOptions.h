#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Auth { class IdToken; }

#define EPIC_ONLINESERVICES_AUTH_VERIFYIDTOKENOPTIONS_GET_IDTOKEN_OFFSET UNITYSDK_OFFSET(0x8E2AAB0)
#define EPIC_ONLINESERVICES_AUTH_VERIFYIDTOKENOPTIONS_SET_IDTOKEN_OFFSET UNITYSDK_OFFSET(0x8E2AAC0)
#define EPIC_ONLINESERVICES_AUTH_VERIFYIDTOKENOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8E2AAD0)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int VerifyIdTokenOptions_TypeDefinitionIndex = 42413;

	class VerifyIdTokenOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::Auth::IdToken* _IdToken_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_VERIFYIDTOKENOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Auth::IdToken* get_IdToken()
		{
			return ((::Epic::OnlineServices::Auth::IdToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_VERIFYIDTOKENOPTIONS_GET_IDTOKEN_OFFSET))(this);
		}

		::System::Void set_IdToken(::Epic::OnlineServices::Auth::IdToken* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::IdToken*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_VERIFYIDTOKENOPTIONS_SET_IDTOKEN_OFFSET))(this, value);
		}
	};
}
