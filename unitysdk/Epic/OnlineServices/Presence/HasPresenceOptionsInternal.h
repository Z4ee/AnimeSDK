#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Presence { class HasPresenceOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PRESENCE_HASPRESENCEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x621C0)
#define EPIC_ONLINESERVICES_PRESENCE_HASPRESENCEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x62150)
#define EPIC_ONLINESERVICES_PRESENCE_HASPRESENCEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x61FC0)
#define EPIC_ONLINESERVICES_PRESENCE_HASPRESENCEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x62140)
#define EPIC_ONLINESERVICES_PRESENCE_HASPRESENCEOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x62080)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int HasPresenceOptionsInternal_TypeDefinitionIndex = 41589;

	struct alignas(8) HasPresenceOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_TargetUserId; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_HASPRESENCEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_HASPRESENCEOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Presence::HasPresenceOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Presence::HasPresenceOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_HASPRESENCEOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_HASPRESENCEOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_HASPRESENCEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
