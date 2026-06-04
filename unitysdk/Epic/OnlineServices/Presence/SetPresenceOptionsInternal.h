#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Presence { class PresenceModification; }
namespace Epic::OnlineServices::Presence { class SetPresenceOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x6A320)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x6A2A0)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x6A110)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x6A290)
#define EPIC_ONLINESERVICES_PRESENCE_SETPRESENCEOPTIONSINTERNAL_SET_PRESENCEMODIFICATIONHANDLE_OFFSET UNITYSDK_OFFSET(0x6A1D0)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int SetPresenceOptionsInternal_TypeDefinitionIndex = 42428;

	struct alignas(8) SetPresenceOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_PresenceModificationHandle; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_SETPRESENCEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_PresenceModificationHandle(::Epic::OnlineServices::Presence::PresenceModification* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Presence::PresenceModification*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_SETPRESENCEOPTIONSINTERNAL_SET_PRESENCEMODIFICATIONHANDLE_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Presence::SetPresenceOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Presence::SetPresenceOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_SETPRESENCEOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_SETPRESENCEOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_SETPRESENCEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
