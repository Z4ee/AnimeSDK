#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/Result.h"

namespace Epic::OnlineServices::Sessions { class SessionModificationAddAttributeOptions; }
namespace Epic::OnlineServices::Sessions { class SessionModificationRemoveAttributeOptions; }
namespace Epic::OnlineServices::Sessions { class SessionModificationSetBucketIdOptions; }
namespace Epic::OnlineServices::Sessions { class SessionModificationSetHostAddressOptions; }
namespace Epic::OnlineServices::Sessions { class SessionModificationSetInvitesAllowedOptions; }
namespace Epic::OnlineServices::Sessions { class SessionModificationSetJoinInProgressAllowedOptions; }
namespace Epic::OnlineServices::Sessions { class SessionModificationSetMaxPlayersOptions; }
namespace Epic::OnlineServices::Sessions { class SessionModificationSetPermissionLevelOptions; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATION_ADDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xA0E8BE0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATION_RELEASE_OFFSET UNITYSDK_OFFSET(0xA0E8E10)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATION_REMOVEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xA0E8E90)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATION_SETBUCKETID_OFFSET UNITYSDK_OFFSET(0xA0E9090)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATION_SETHOSTADDRESS_OFFSET UNITYSDK_OFFSET(0xA0E9290)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATION_SETINVITESALLOWED_OFFSET UNITYSDK_OFFSET(0xA0E9490)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATION_SETJOININPROGRESSALLOWED_OFFSET UNITYSDK_OFFSET(0xA0E9680)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATION_SETMAXPLAYERS_OFFSET UNITYSDK_OFFSET(0xA0E9870)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATION_SETPERMISSIONLEVEL_OFFSET UNITYSDK_OFFSET(0xA0E99D0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATION__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA0E8BD0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATION__CTOR_OFFSET UNITYSDK_OFFSET(0xA0E8BC0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionModification_TypeDefinitionIndex = 42146;

	class SessionModification : public ::Epic::OnlineServices::Handle
	{
	public:
		// static const ::System::Int32 SessionmodificationAddattributeApiLatest = 0x1; // 0x0
		// static const ::System::Int32 SessionmodificationMaxSessionAttributeLength = 0x40; // 0x0
		// static const ::System::Int32 SessionmodificationMaxSessionAttributes = 0x40; // 0x0
		// static const ::System::Int32 SessionmodificationMaxSessionidoverrideLength = 0x40; // 0x0
		// static const ::System::Int32 SessionmodificationMinSessionidoverrideLength = 0x10; // 0x0
		// static const ::System::Int32 SessionmodificationRemoveattributeApiLatest = 0x1; // 0x0
		// static const ::System::Int32 SessionmodificationSetbucketidApiLatest = 0x1; // 0x0
		// static const ::System::Int32 SessionmodificationSethostaddressApiLatest = 0x1; // 0x0
		// static const ::System::Int32 SessionmodificationSetinvitesallowedApiLatest = 0x1; // 0x0
		// static const ::System::Int32 SessionmodificationSetjoininprogressallowedApiLatest = 0x1; // 0x0
		// static const ::System::Int32 SessionmodificationSetmaxplayersApiLatest = 0x1; // 0x0
		// static const ::System::Int32 SessionmodificationSetpermissionlevelApiLatest = 0x1; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATION__CTOR_1_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result AddAttribute(::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATION_ADDATTRIBUTE_OFFSET))(this, a1);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATION_RELEASE_OFFSET))(this);
		}

		::Epic::OnlineServices::Result RemoveAttribute(::Epic::OnlineServices::Sessions::SessionModificationRemoveAttributeOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionModificationRemoveAttributeOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATION_REMOVEATTRIBUTE_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result SetBucketId(::Epic::OnlineServices::Sessions::SessionModificationSetBucketIdOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionModificationSetBucketIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATION_SETBUCKETID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result SetHostAddress(::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATION_SETHOSTADDRESS_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result SetInvitesAllowed(::Epic::OnlineServices::Sessions::SessionModificationSetInvitesAllowedOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionModificationSetInvitesAllowedOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATION_SETINVITESALLOWED_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result SetJoinInProgressAllowed(::Epic::OnlineServices::Sessions::SessionModificationSetJoinInProgressAllowedOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionModificationSetJoinInProgressAllowedOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATION_SETJOININPROGRESSALLOWED_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result SetMaxPlayers(::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATION_SETMAXPLAYERS_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result SetPermissionLevel(::Epic::OnlineServices::Sessions::SessionModificationSetPermissionLevelOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionModificationSetPermissionLevelOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATION_SETPERMISSIONLEVEL_OFFSET))(this, a1);
		}
	};
}
