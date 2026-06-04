#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Presence/Status.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Presence { class PresenceModificationSetStatusOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETSTATUSOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETSTATUSOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x699F0)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETSTATUSOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x2200)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETSTATUSOPTIONSINTERNAL_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x21F0)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int PresenceModificationSetStatusOptionsInternal_TypeDefinitionIndex = 42418;

	struct alignas(4) PresenceModificationSetStatusOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::Epic::OnlineServices::Presence::Status m_Status; // 0x14

		::System::Void set_Status(::Epic::OnlineServices::Presence::Status a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Presence::Status))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETSTATUSOPTIONSINTERNAL_SET_STATUS_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETSTATUSOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETSTATUSOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETSTATUSOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
