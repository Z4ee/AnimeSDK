#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_FRIENDS_SENDINVITEOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2CB990)
#define EPIC_ONLINESERVICES_FRIENDS_SENDINVITEOPTIONS_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xA2CB9B0)
#define EPIC_ONLINESERVICES_FRIENDS_SENDINVITEOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2CB9A0)
#define EPIC_ONLINESERVICES_FRIENDS_SENDINVITEOPTIONS_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xA2CB9C0)
#define EPIC_ONLINESERVICES_FRIENDS_SENDINVITEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA2CB9D0)

namespace Epic::OnlineServices::Friends
{
	inline static constexpr unsigned int SendInviteOptions_TypeDefinitionIndex = 42935;

	class SendInviteOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _TargetUserId_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_SENDINVITEOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_SENDINVITEOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_SENDINVITEOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::EpicAccountId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_SENDINVITEOPTIONS_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_SENDINVITEOPTIONS_SET_TARGETUSERID_OFFSET))(this, a1);
		}
	};
}
