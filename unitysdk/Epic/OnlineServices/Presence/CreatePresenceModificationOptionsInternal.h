#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Presence { class CreatePresenceModificationOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PRESENCE_CREATEPRESENCEMODIFICATIONOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C0F300)
#define EPIC_ONLINESERVICES_PRESENCE_CREATEPRESENCEMODIFICATIONOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3C0F2F0)
#define EPIC_ONLINESERVICES_PRESENCE_CREATEPRESENCEMODIFICATIONOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x3C0F160)
#define EPIC_ONLINESERVICES_PRESENCE_CREATEPRESENCEMODIFICATIONOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3C0F220)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int CreatePresenceModificationOptionsInternal_TypeDefinitionIndex = 45429;

	struct alignas(8) CreatePresenceModificationOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_CREATEPRESENCEMODIFICATIONOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Presence::CreatePresenceModificationOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Presence::CreatePresenceModificationOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_CREATEPRESENCEMODIFICATIONOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_CREATEPRESENCEMODIFICATIONOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_CREATEPRESENCEMODIFICATIONOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
