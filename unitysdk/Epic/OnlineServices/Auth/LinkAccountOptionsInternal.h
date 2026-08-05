#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Auth/LinkAccountFlags.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ContinuanceToken; }
namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Auth { class LinkAccountOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_AUTH_LINKACCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x95EB00)
#define EPIC_ONLINESERVICES_AUTH_LINKACCOUNTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x95EA90)
#define EPIC_ONLINESERVICES_AUTH_LINKACCOUNTOPTIONSINTERNAL_SET_CONTINUANCETOKEN_OFFSET UNITYSDK_OFFSET(0x95E900)
#define EPIC_ONLINESERVICES_AUTH_LINKACCOUNTOPTIONSINTERNAL_SET_LINKACCOUNTFLAGS_OFFSET UNITYSDK_OFFSET(0x6329D0)
#define EPIC_ONLINESERVICES_AUTH_LINKACCOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x95E9C0)
#define EPIC_ONLINESERVICES_AUTH_LINKACCOUNTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x95EA80)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int LinkAccountOptionsInternal_TypeDefinitionIndex = 36816;

	struct alignas(8) LinkAccountOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::Epic::OnlineServices::Auth::LinkAccountFlags m_LinkAccountFlags; // 0x14
		::System::IntPtr m_ContinuanceToken; // 0x18
		::System::IntPtr m_LocalUserId; // 0x20

		::System::Void set_LinkAccountFlags(::Epic::OnlineServices::Auth::LinkAccountFlags value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::LinkAccountFlags))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LINKACCOUNTOPTIONSINTERNAL_SET_LINKACCOUNTFLAGS_OFFSET))(this, value);
		}

		::System::Void set_ContinuanceToken(::Epic::OnlineServices::ContinuanceToken* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ContinuanceToken*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LINKACCOUNTOPTIONSINTERNAL_SET_CONTINUANCETOKEN_OFFSET))(this, value);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LINKACCOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Auth::LinkAccountOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::LinkAccountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LINKACCOUNTOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LINKACCOUNTOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LINKACCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
