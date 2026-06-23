#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_PRESENCE_COPYPRESENCEOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1ADE7E80)
#define EPIC_ONLINESERVICES_PRESENCE_COPYPRESENCEOPTIONS_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1ADE7EA0)
#define EPIC_ONLINESERVICES_PRESENCE_COPYPRESENCEOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1ADE7E90)
#define EPIC_ONLINESERVICES_PRESENCE_COPYPRESENCEOPTIONS_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1ADE7EB0)
#define EPIC_ONLINESERVICES_PRESENCE_COPYPRESENCEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADE7EC0)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int CopyPresenceOptions_TypeDefinitionIndex = 35362;

	class CopyPresenceOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _TargetUserId_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_COPYPRESENCEOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_COPYPRESENCEOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_COPYPRESENCEOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::EpicAccountId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_COPYPRESENCEOPTIONS_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_COPYPRESENCEOPTIONS_SET_TARGETUSERID_OFFSET))(this, value);
		}
	};
}
