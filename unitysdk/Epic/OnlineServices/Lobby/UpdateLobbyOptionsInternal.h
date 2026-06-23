#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Lobby { class LobbyModification; }
namespace Epic::OnlineServices::Lobby { class UpdateLobbyOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_UPDATELOBBYOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A5EC0)
#define EPIC_ONLINESERVICES_LOBBY_UPDATELOBBYOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9A5D90)
#define EPIC_ONLINESERVICES_LOBBY_UPDATELOBBYOPTIONSINTERNAL_SET_LOBBYMODIFICATIONHANDLE_OFFSET UNITYSDK_OFFSET(0x9A5C00)
#define EPIC_ONLINESERVICES_LOBBY_UPDATELOBBYOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9A5CC0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int UpdateLobbyOptionsInternal_TypeDefinitionIndex = 35785;

	struct alignas(8) UpdateLobbyOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LobbyModificationHandle; // 0x18

		::System::Void set_LobbyModificationHandle(::Epic::OnlineServices::Lobby::LobbyModification* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyModification*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_UPDATELOBBYOPTIONSINTERNAL_SET_LOBBYMODIFICATIONHANDLE_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Lobby::UpdateLobbyOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::UpdateLobbyOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_UPDATELOBBYOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_UPDATELOBBYOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_UPDATELOBBYOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
