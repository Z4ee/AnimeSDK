#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Presence { class CopyPresenceOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PRESENCE_COPYPRESENCEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x69130)
#define EPIC_ONLINESERVICES_PRESENCE_COPYPRESENCEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x690B0)
#define EPIC_ONLINESERVICES_PRESENCE_COPYPRESENCEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x68F20)
#define EPIC_ONLINESERVICES_PRESENCE_COPYPRESENCEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x690A0)
#define EPIC_ONLINESERVICES_PRESENCE_COPYPRESENCEOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x68FE0)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int CopyPresenceOptionsInternal_TypeDefinitionIndex = 45427;

	struct alignas(8) CopyPresenceOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_TargetUserId; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_COPYPRESENCEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_COPYPRESENCEOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Presence::CopyPresenceOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Presence::CopyPresenceOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_COPYPRESENCEOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_COPYPRESENCEOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_COPYPRESENCEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
