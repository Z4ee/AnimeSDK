#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/Result.h"

namespace Epic::OnlineServices::Lobby { class LobbyModificationAddAttributeOptions; }
namespace Epic::OnlineServices::Lobby { class LobbyModificationAddMemberAttributeOptions; }
namespace Epic::OnlineServices::Lobby { class LobbyModificationRemoveAttributeOptions; }
namespace Epic::OnlineServices::Lobby { class LobbyModificationRemoveMemberAttributeOptions; }
namespace Epic::OnlineServices::Lobby { class LobbyModificationSetBucketIdOptions; }
namespace Epic::OnlineServices::Lobby { class LobbyModificationSetInvitesAllowedOptions; }
namespace Epic::OnlineServices::Lobby { class LobbyModificationSetMaxMembersOptions; }
namespace Epic::OnlineServices::Lobby { class LobbyModificationSetPermissionLevelOptions; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATION_ADDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1BF8ACE0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATION_ADDMEMBERATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1BF8AF10)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATION_RELEASE_OFFSET UNITYSDK_OFFSET(0x1BF8B140)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATION_REMOVEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1BF8B1C0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATION_REMOVEMEMBERATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1BF8B3C0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATION_SETBUCKETID_OFFSET UNITYSDK_OFFSET(0x1BF8B5C0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATION_SETINVITESALLOWED_OFFSET UNITYSDK_OFFSET(0x1BF8B7C0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATION_SETMAXMEMBERS_OFFSET UNITYSDK_OFFSET(0x1BF8B9B0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATION_SETPERMISSIONLEVEL_OFFSET UNITYSDK_OFFSET(0x1BF8BB10)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BF8ACD0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF8ACC0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyModification_TypeDefinitionIndex = 43567;

	class LobbyModification : public ::Epic::OnlineServices::Handle
	{
	public:
		// static const ::System::Int32 LobbymodificationAddattributeApiLatest = 0x1; // 0x0
		// static const ::System::Int32 LobbymodificationAddmemberattributeApiLatest = 0x1; // 0x0
		// static const ::System::Int32 LobbymodificationMaxAttributeLength = 0x40; // 0x0
		// static const ::System::Int32 LobbymodificationMaxAttributes = 0x40; // 0x0
		// static const ::System::Int32 LobbymodificationRemoveattributeApiLatest = 0x1; // 0x0
		// static const ::System::Int32 LobbymodificationRemovememberattributeApiLatest = 0x1; // 0x0
		// static const ::System::Int32 LobbymodificationSetbucketidApiLatest = 0x1; // 0x0
		// static const ::System::Int32 LobbymodificationSetinvitesallowedApiLatest = 0x1; // 0x0
		// static const ::System::Int32 LobbymodificationSetmaxmembersApiLatest = 0x1; // 0x0
		// static const ::System::Int32 LobbymodificationSetpermissionlevelApiLatest = 0x1; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATION__CTOR_1_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result AddAttribute(::Epic::OnlineServices::Lobby::LobbyModificationAddAttributeOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyModificationAddAttributeOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATION_ADDATTRIBUTE_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result AddMemberAttribute(::Epic::OnlineServices::Lobby::LobbyModificationAddMemberAttributeOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyModificationAddMemberAttributeOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATION_ADDMEMBERATTRIBUTE_OFFSET))(this, a1);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATION_RELEASE_OFFSET))(this);
		}

		::Epic::OnlineServices::Result RemoveAttribute(::Epic::OnlineServices::Lobby::LobbyModificationRemoveAttributeOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyModificationRemoveAttributeOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATION_REMOVEATTRIBUTE_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result RemoveMemberAttribute(::Epic::OnlineServices::Lobby::LobbyModificationRemoveMemberAttributeOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyModificationRemoveMemberAttributeOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATION_REMOVEMEMBERATTRIBUTE_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result SetBucketId(::Epic::OnlineServices::Lobby::LobbyModificationSetBucketIdOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyModificationSetBucketIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATION_SETBUCKETID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result SetInvitesAllowed(::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATION_SETINVITESALLOWED_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result SetMaxMembers(::Epic::OnlineServices::Lobby::LobbyModificationSetMaxMembersOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyModificationSetMaxMembersOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATION_SETMAXMEMBERS_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result SetPermissionLevel(::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATION_SETPERMISSIONLEVEL_OFFSET))(this, a1);
		}
	};
}
