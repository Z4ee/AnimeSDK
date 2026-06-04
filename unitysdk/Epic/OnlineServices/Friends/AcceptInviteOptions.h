#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITEOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2C6350)
#define EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITEOPTIONS_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xA2C6370)
#define EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITEOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2C6360)
#define EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITEOPTIONS_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xA2C6380)
#define EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA2C6390)

namespace Epic::OnlineServices::Friends
{
	inline static constexpr unsigned int AcceptInviteOptions_TypeDefinitionIndex = 42901;

	class AcceptInviteOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _TargetUserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITEOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITEOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITEOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::EpicAccountId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITEOPTIONS_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ACCEPTINVITEOPTIONS_SET_TARGETUSERID_OFFSET))(this, a1);
		}
	};
}
