#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Connect { class IdToken; }
namespace Epic::OnlineServices::Connect { class VerifyIdTokenOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x35D70)
#define EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x35D60)
#define EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENOPTIONSINTERNAL_SET_IDTOKEN_OFFSET UNITYSDK_OFFSET(0x35C70)
#define EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x35CE0)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int VerifyIdTokenOptionsInternal_TypeDefinitionIndex = 42351;

	struct alignas(8) VerifyIdTokenOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_IdToken; // 0x18

		::System::Void set_IdToken(::Epic::OnlineServices::Connect::IdToken* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::IdToken*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENOPTIONSINTERNAL_SET_IDTOKEN_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Connect::VerifyIdTokenOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::VerifyIdTokenOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_VERIFYIDTOKENOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
