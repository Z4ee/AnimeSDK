#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Presence/Status.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETSTATUSOPTIONS_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1C009330)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETSTATUSOPTIONS_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x1C009340)
#define EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETSTATUSOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C009350)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int PresenceModificationSetStatusOptions_TypeDefinitionIndex = 43278;

	class PresenceModificationSetStatusOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::Presence::Status _Status_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETSTATUSOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Presence::Status get_Status()
		{
			return ((::Epic::OnlineServices::Presence::Status(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETSTATUSOPTIONS_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Epic::OnlineServices::Presence::Status a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Presence::Status))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_PRESENCEMODIFICATIONSETSTATUSOPTIONS_SET_STATUS_OFFSET))(this, a1);
		}
	};
}
