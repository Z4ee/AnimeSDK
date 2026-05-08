#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Lobby { class LobbyDetails; }
namespace Epic::OnlineServices::Lobby { class LocalRTCOptions; }

#define EPIC_ONLINESERVICES_LOBBY_JOINLOBBYOPTIONS_GET_LOBBYDETAILSHANDLE_OFFSET UNITYSDK_OFFSET(0x1A48BBC0)
#define EPIC_ONLINESERVICES_LOBBY_JOINLOBBYOPTIONS_GET_LOCALRTCOPTIONS_OFFSET UNITYSDK_OFFSET(0x1A48BC20)
#define EPIC_ONLINESERVICES_LOBBY_JOINLOBBYOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1A48BBE0)
#define EPIC_ONLINESERVICES_LOBBY_JOINLOBBYOPTIONS_GET_PRESENCEENABLED_OFFSET UNITYSDK_OFFSET(0x1A48BC00)
#define EPIC_ONLINESERVICES_LOBBY_JOINLOBBYOPTIONS_SET_LOBBYDETAILSHANDLE_OFFSET UNITYSDK_OFFSET(0x1A48BBD0)
#define EPIC_ONLINESERVICES_LOBBY_JOINLOBBYOPTIONS_SET_LOCALRTCOPTIONS_OFFSET UNITYSDK_OFFSET(0x1A48BC30)
#define EPIC_ONLINESERVICES_LOBBY_JOINLOBBYOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1A48BBF0)
#define EPIC_ONLINESERVICES_LOBBY_JOINLOBBYOPTIONS_SET_PRESENCEENABLED_OFFSET UNITYSDK_OFFSET(0x1A48BC10)
#define EPIC_ONLINESERVICES_LOBBY_JOINLOBBYOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A48BC40)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int JoinLobbyOptions_TypeDefinitionIndex = 34078;

	class JoinLobbyOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::Lobby::LocalRTCOptions* _LocalRTCOptions_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::Lobby::LobbyDetails* _LobbyDetailsHandle_k__BackingField; // 0x20
		::System::Boolean _PresenceEnabled_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_JOINLOBBYOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Lobby::LobbyDetails* get_LobbyDetailsHandle()
		{
			return ((::Epic::OnlineServices::Lobby::LobbyDetails*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_JOINLOBBYOPTIONS_GET_LOBBYDETAILSHANDLE_OFFSET))(this);
		}

		::System::Void set_LobbyDetailsHandle(::Epic::OnlineServices::Lobby::LobbyDetails* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyDetails*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_JOINLOBBYOPTIONS_SET_LOBBYDETAILSHANDLE_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_JOINLOBBYOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_JOINLOBBYOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Boolean get_PresenceEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_JOINLOBBYOPTIONS_GET_PRESENCEENABLED_OFFSET))(this);
		}

		::System::Void set_PresenceEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_JOINLOBBYOPTIONS_SET_PRESENCEENABLED_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Lobby::LocalRTCOptions* get_LocalRTCOptions()
		{
			return ((::Epic::OnlineServices::Lobby::LocalRTCOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_JOINLOBBYOPTIONS_GET_LOCALRTCOPTIONS_OFFSET))(this);
		}

		::System::Void set_LocalRTCOptions(::Epic::OnlineServices::Lobby::LocalRTCOptions* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LocalRTCOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_JOINLOBBYOPTIONS_SET_LOCALRTCOPTIONS_OFFSET))(this, value);
		}
	};
}
