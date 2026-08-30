#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Auth/LinkAccountFlags.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ContinuanceToken; }
namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Auth { class LinkAccountOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_AUTH_LINKACCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3BDF240)
#define EPIC_ONLINESERVICES_AUTH_LINKACCOUNTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3BDF1C0)
#define EPIC_ONLINESERVICES_AUTH_LINKACCOUNTOPTIONSINTERNAL_SET_CONTINUANCETOKEN_OFFSET UNITYSDK_OFFSET(0x3BDF030)
#define EPIC_ONLINESERVICES_AUTH_LINKACCOUNTOPTIONSINTERNAL_SET_LINKACCOUNTFLAGS_OFFSET UNITYSDK_OFFSET(0xB596A0)
#define EPIC_ONLINESERVICES_AUTH_LINKACCOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x3BDF0F0)
#define EPIC_ONLINESERVICES_AUTH_LINKACCOUNTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3BDF1B0)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int LinkAccountOptionsInternal_TypeDefinitionIndex = 46221;

	struct alignas(8) LinkAccountOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::Epic::OnlineServices::Auth::LinkAccountFlags m_LinkAccountFlags; // 0x14
		::System::IntPtr m_ContinuanceToken; // 0x18
		::System::IntPtr m_LocalUserId; // 0x20

		::System::Void set_LinkAccountFlags(::Epic::OnlineServices::Auth::LinkAccountFlags a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::LinkAccountFlags))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LINKACCOUNTOPTIONSINTERNAL_SET_LINKACCOUNTFLAGS_OFFSET))(this, a1);
		}

		::System::Void set_ContinuanceToken(::Epic::OnlineServices::ContinuanceToken* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ContinuanceToken*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LINKACCOUNTOPTIONSINTERNAL_SET_CONTINUANCETOKEN_OFFSET))(this, a1);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LINKACCOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Auth::LinkAccountOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::LinkAccountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LINKACCOUNTOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LINKACCOUNTOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LINKACCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
