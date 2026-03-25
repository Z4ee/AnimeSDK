#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Auth { class IdToken; }
namespace Epic::OnlineServices::Auth { class VerifyIdTokenOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_AUTH_VERIFYIDTOKENOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2E440)
#define EPIC_ONLINESERVICES_AUTH_VERIFYIDTOKENOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x2E430)
#define EPIC_ONLINESERVICES_AUTH_VERIFYIDTOKENOPTIONSINTERNAL_SET_IDTOKEN_OFFSET UNITYSDK_OFFSET(0x2E340)
#define EPIC_ONLINESERVICES_AUTH_VERIFYIDTOKENOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x2E3B0)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int VerifyIdTokenOptionsInternal_TypeDefinitionIndex = 36588;

	struct alignas(8) VerifyIdTokenOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_IdToken; // 0x18

		::System::Void set_IdToken(::Epic::OnlineServices::Auth::IdToken* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::IdToken*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_VERIFYIDTOKENOPTIONSINTERNAL_SET_IDTOKEN_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Auth::VerifyIdTokenOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::VerifyIdTokenOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_VERIFYIDTOKENOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_VERIFYIDTOKENOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_VERIFYIDTOKENOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
