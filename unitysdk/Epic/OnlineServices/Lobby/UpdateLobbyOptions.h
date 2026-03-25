#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Lobby { class LobbyModification; }

#define EPIC_ONLINESERVICES_LOBBY_UPDATELOBBYOPTIONS_GET_LOBBYMODIFICATIONHANDLE_OFFSET UNITYSDK_OFFSET(0x86982F0)
#define EPIC_ONLINESERVICES_LOBBY_UPDATELOBBYOPTIONS_SET_LOBBYMODIFICATIONHANDLE_OFFSET UNITYSDK_OFFSET(0x8698300)
#define EPIC_ONLINESERVICES_LOBBY_UPDATELOBBYOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8698310)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int UpdateLobbyOptions_TypeDefinitionIndex = 36176;

	class UpdateLobbyOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::Lobby::LobbyModification* _LobbyModificationHandle_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_UPDATELOBBYOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Lobby::LobbyModification* get_LobbyModificationHandle()
		{
			return ((::Epic::OnlineServices::Lobby::LobbyModification*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_UPDATELOBBYOPTIONS_GET_LOBBYMODIFICATIONHANDLE_OFFSET))(this);
		}

		::System::Void set_LobbyModificationHandle(::Epic::OnlineServices::Lobby::LobbyModification* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyModification*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_UPDATELOBBYOPTIONS_SET_LOBBYMODIFICATIONHANDLE_OFFSET))(this, value);
		}
	};
}
