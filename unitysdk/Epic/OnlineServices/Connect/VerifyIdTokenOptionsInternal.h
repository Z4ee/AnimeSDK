#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Connect { class IdToken; }
namespace Epic::OnlineServices::Connect { class VerifyIdTokenOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3A9B7E0)
#define EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3A9B7D0)
#define EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENOPTIONSINTERNAL_SET_IDTOKEN_OFFSET UNITYSDK_OFFSET(0x3A9B6E0)
#define EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3A9B750)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int VerifyIdTokenOptionsInternal_TypeDefinitionIndex = 44015;

	struct alignas(8) VerifyIdTokenOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_IdToken; // 0x18

		::System::Void set_IdToken(::Epic::OnlineServices::Connect::IdToken* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::IdToken*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENOPTIONSINTERNAL_SET_IDTOKEN_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Connect::VerifyIdTokenOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::VerifyIdTokenOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
