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

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATION_ADDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1D837390)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATION_RELEASE_OFFSET UNITYSDK_OFFSET(0x1D8375C0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATION_REMOVEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1D837640)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATION_SETBUCKETID_OFFSET UNITYSDK_OFFSET(0x1D837840)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATION_SETHOSTADDRESS_OFFSET UNITYSDK_OFFSET(0x1D837A40)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATION_SETINVITESALLOWED_OFFSET UNITYSDK_OFFSET(0x1D837C40)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATION_SETJOININPROGRESSALLOWED_OFFSET UNITYSDK_OFFSET(0x1D837E30)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATION_SETMAXPLAYERS_OFFSET UNITYSDK_OFFSET(0x1D838020)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATION_SETPERMISSIONLEVEL_OFFSET UNITYSDK_OFFSET(0x1D838170)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D837380)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D837370)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionModification_TypeDefinitionIndex = 35784;

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

		::System::Void _ctor_1(::System::IntPtr innerHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATION__CTOR_1_OFFSET))(this, innerHandle);
		}

		::Epic::OnlineServices::Result AddAttribute(::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATION_ADDATTRIBUTE_OFFSET))(this, options);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATION_RELEASE_OFFSET))(this);
		}

		::Epic::OnlineServices::Result RemoveAttribute(::Epic::OnlineServices::Sessions::SessionModificationRemoveAttributeOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionModificationRemoveAttributeOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATION_REMOVEATTRIBUTE_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result SetBucketId(::Epic::OnlineServices::Sessions::SessionModificationSetBucketIdOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionModificationSetBucketIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATION_SETBUCKETID_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result SetHostAddress(::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionModificationSetHostAddressOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATION_SETHOSTADDRESS_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result SetInvitesAllowed(::Epic::OnlineServices::Sessions::SessionModificationSetInvitesAllowedOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionModificationSetInvitesAllowedOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATION_SETINVITESALLOWED_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result SetJoinInProgressAllowed(::Epic::OnlineServices::Sessions::SessionModificationSetJoinInProgressAllowedOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionModificationSetJoinInProgressAllowedOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATION_SETJOININPROGRESSALLOWED_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result SetMaxPlayers(::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionModificationSetMaxPlayersOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATION_SETMAXPLAYERS_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result SetPermissionLevel(::Epic::OnlineServices::Sessions::SessionModificationSetPermissionLevelOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionModificationSetPermissionLevelOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATION_SETPERMISSIONLEVEL_OFFSET))(this, options);
		}
	};
}
