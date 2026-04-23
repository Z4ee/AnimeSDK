#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Presence { class AddNotifyOnPresenceChangedOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PRESENCE_ADDNOTIFYONPRESENCECHANGEDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_PRESENCE_ADDNOTIFYONPRESENCECHANGEDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x61110)
#define EPIC_ONLINESERVICES_PRESENCE_ADDNOTIFYONPRESENCECHANGEDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x1900)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int AddNotifyOnPresenceChangedOptionsInternal_TypeDefinitionIndex = 41579;

	struct alignas(4) AddNotifyOnPresenceChangedOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::Presence::AddNotifyOnPresenceChangedOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Presence::AddNotifyOnPresenceChangedOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_ADDNOTIFYONPRESENCECHANGEDOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_ADDNOTIFYONPRESENCECHANGEDOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_ADDNOTIFYONPRESENCECHANGEDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
