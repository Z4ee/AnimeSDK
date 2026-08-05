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

#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATION_ADDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1DBD1C40)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATION_ADDMEMBERATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1DBD1E70)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATION_RELEASE_OFFSET UNITYSDK_OFFSET(0x1DBD20A0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATION_REMOVEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1DBD2120)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATION_REMOVEMEMBERATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1DBD2320)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATION_SETBUCKETID_OFFSET UNITYSDK_OFFSET(0x1DBD2520)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATION_SETINVITESALLOWED_OFFSET UNITYSDK_OFFSET(0x1DBD2720)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATION_SETMAXMEMBERS_OFFSET UNITYSDK_OFFSET(0x1DBD2910)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATION_SETPERMISSIONLEVEL_OFFSET UNITYSDK_OFFSET(0x1DBD2A60)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DBD1C30)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBD1C20)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyModification_TypeDefinitionIndex = 36344;

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

		::System::Void _ctor_1(::System::IntPtr innerHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATION__CTOR_1_OFFSET))(this, innerHandle);
		}

		::Epic::OnlineServices::Result AddAttribute(::Epic::OnlineServices::Lobby::LobbyModificationAddAttributeOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyModificationAddAttributeOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATION_ADDATTRIBUTE_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result AddMemberAttribute(::Epic::OnlineServices::Lobby::LobbyModificationAddMemberAttributeOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyModificationAddMemberAttributeOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATION_ADDMEMBERATTRIBUTE_OFFSET))(this, options);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATION_RELEASE_OFFSET))(this);
		}

		::Epic::OnlineServices::Result RemoveAttribute(::Epic::OnlineServices::Lobby::LobbyModificationRemoveAttributeOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyModificationRemoveAttributeOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATION_REMOVEATTRIBUTE_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result RemoveMemberAttribute(::Epic::OnlineServices::Lobby::LobbyModificationRemoveMemberAttributeOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyModificationRemoveMemberAttributeOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATION_REMOVEMEMBERATTRIBUTE_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result SetBucketId(::Epic::OnlineServices::Lobby::LobbyModificationSetBucketIdOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyModificationSetBucketIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATION_SETBUCKETID_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result SetInvitesAllowed(::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATION_SETINVITESALLOWED_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result SetMaxMembers(::Epic::OnlineServices::Lobby::LobbyModificationSetMaxMembersOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyModificationSetMaxMembersOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATION_SETMAXMEMBERS_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result SetPermissionLevel(::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATION_SETPERMISSIONLEVEL_OFFSET))(this, options);
		}
	};
}
