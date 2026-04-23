#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Lobby/LobbyPermissionLevel.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Lobby { class LobbyModificationSetPermissionLevelOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETPERMISSIONLEVELOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETPERMISSIONLEVELOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x4F5A0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETPERMISSIONLEVELOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x1D60)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETPERMISSIONLEVELOPTIONSINTERNAL_SET_PERMISSIONLEVEL_OFFSET UNITYSDK_OFFSET(0x1D50)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyModificationSetPermissionLevelOptionsInternal_TypeDefinitionIndex = 41919;

	struct alignas(4) LobbyModificationSetPermissionLevelOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::Epic::OnlineServices::Lobby::LobbyPermissionLevel m_PermissionLevel; // 0x14

		::System::Void set_PermissionLevel(::Epic::OnlineServices::Lobby::LobbyPermissionLevel value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyPermissionLevel))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETPERMISSIONLEVELOPTIONSINTERNAL_SET_PERMISSIONLEVEL_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETPERMISSIONLEVELOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETPERMISSIONLEVELOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETPERMISSIONLEVELOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
