#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Connect { class IdToken; }

#define EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENOPTIONS_GET_IDTOKEN_OFFSET UNITYSDK_OFFSET(0x1DF26490)
#define EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENOPTIONS_SET_IDTOKEN_OFFSET UNITYSDK_OFFSET(0x1DF264A0)
#define EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF264B0)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int VerifyIdTokenOptions_TypeDefinitionIndex = 46196;

	class VerifyIdTokenOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::Connect::IdToken* _IdToken_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Connect::IdToken* get_IdToken()
		{
			return ((::Epic::OnlineServices::Connect::IdToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENOPTIONS_GET_IDTOKEN_OFFSET))(this);
		}

		::System::Void set_IdToken(::Epic::OnlineServices::Connect::IdToken* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::IdToken*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENOPTIONS_SET_IDTOKEN_OFFSET))(this, a1);
		}
	};
}
