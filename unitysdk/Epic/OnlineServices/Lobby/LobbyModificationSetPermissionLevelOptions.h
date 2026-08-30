#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Lobby/LobbyPermissionLevel.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETPERMISSIONLEVELOPTIONS_GET_PERMISSIONLEVEL_OFFSET UNITYSDK_OFFSET(0x1DCDF070)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETPERMISSIONLEVELOPTIONS_SET_PERMISSIONLEVEL_OFFSET UNITYSDK_OFFSET(0x1DCDF080)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETPERMISSIONLEVELOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCDF090)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyModificationSetPermissionLevelOptions_TypeDefinitionIndex = 45764;

	class LobbyModificationSetPermissionLevelOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::Lobby::LobbyPermissionLevel _PermissionLevel_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETPERMISSIONLEVELOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Lobby::LobbyPermissionLevel get_PermissionLevel()
		{
			return ((::Epic::OnlineServices::Lobby::LobbyPermissionLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETPERMISSIONLEVELOPTIONS_GET_PERMISSIONLEVEL_OFFSET))(this);
		}

		::System::Void set_PermissionLevel(::Epic::OnlineServices::Lobby::LobbyPermissionLevel a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyPermissionLevel))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETPERMISSIONLEVELOPTIONS_SET_PERMISSIONLEVEL_OFFSET))(this, a1);
		}
	};
}
