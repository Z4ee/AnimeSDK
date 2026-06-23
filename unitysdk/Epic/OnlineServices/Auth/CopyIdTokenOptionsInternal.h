#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Auth { class CopyIdTokenOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_AUTH_COPYIDTOKENOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8B1810)
#define EPIC_ONLINESERVICES_AUTH_COPYIDTOKENOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x8B16E0)
#define EPIC_ONLINESERVICES_AUTH_COPYIDTOKENOPTIONSINTERNAL_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x8B1550)
#define EPIC_ONLINESERVICES_AUTH_COPYIDTOKENOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x8B1610)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int CopyIdTokenOptionsInternal_TypeDefinitionIndex = 36142;

	struct alignas(8) CopyIdTokenOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_AccountId; // 0x18

		::System::Void set_AccountId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_COPYIDTOKENOPTIONSINTERNAL_SET_ACCOUNTID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Auth::CopyIdTokenOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::CopyIdTokenOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_COPYIDTOKENOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_COPYIDTOKENOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_COPYIDTOKENOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
