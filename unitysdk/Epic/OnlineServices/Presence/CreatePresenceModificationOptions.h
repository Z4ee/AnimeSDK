#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_PRESENCE_CREATEPRESENCEMODIFICATIONOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1A2C4E70)
#define EPIC_ONLINESERVICES_PRESENCE_CREATEPRESENCEMODIFICATIONOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1A2C4E80)
#define EPIC_ONLINESERVICES_PRESENCE_CREATEPRESENCEMODIFICATIONOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2C4E90)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int CreatePresenceModificationOptions_TypeDefinitionIndex = 33801;

	class CreatePresenceModificationOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_CREATEPRESENCEMODIFICATIONOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_CREATEPRESENCEMODIFICATIONOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_CREATEPRESENCEMODIFICATIONOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}
	};
}
