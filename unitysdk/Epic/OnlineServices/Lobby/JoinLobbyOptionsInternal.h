#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Lobby { class JoinLobbyOptions; }
namespace Epic::OnlineServices::Lobby { class LobbyDetails; }
namespace Epic::OnlineServices::Lobby { class LocalRTCOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_JOINLOBBYOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B1BD0)
#define EPIC_ONLINESERVICES_LOBBY_JOINLOBBYOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9B1B60)
#define EPIC_ONLINESERVICES_LOBBY_JOINLOBBYOPTIONSINTERNAL_SET_LOBBYDETAILSHANDLE_OFFSET UNITYSDK_OFFSET(0x9B18B0)
#define EPIC_ONLINESERVICES_LOBBY_JOINLOBBYOPTIONSINTERNAL_SET_LOCALRTCOPTIONS_OFFSET UNITYSDK_OFFSET(0x9B1AE0)
#define EPIC_ONLINESERVICES_LOBBY_JOINLOBBYOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x9B1970)
#define EPIC_ONLINESERVICES_LOBBY_JOINLOBBYOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9B1B50)
#define EPIC_ONLINESERVICES_LOBBY_JOINLOBBYOPTIONSINTERNAL_SET_PRESENCEENABLED_OFFSET UNITYSDK_OFFSET(0x9B1A30)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int JoinLobbyOptionsInternal_TypeDefinitionIndex = 35642;

	struct alignas(8) JoinLobbyOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LobbyDetailsHandle; // 0x18
		::System::IntPtr m_LocalUserId; // 0x20
		::System::Int32 m_PresenceEnabled; // 0x28
		::System::IntPtr m_LocalRTCOptions; // 0x30

		::System::Void set_LobbyDetailsHandle(::Epic::OnlineServices::Lobby::LobbyDetails* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyDetails*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_JOINLOBBYOPTIONSINTERNAL_SET_LOBBYDETAILSHANDLE_OFFSET))(this, value);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_JOINLOBBYOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_PresenceEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_JOINLOBBYOPTIONSINTERNAL_SET_PRESENCEENABLED_OFFSET))(this, value);
		}

		::System::Void set_LocalRTCOptions(::Epic::OnlineServices::Lobby::LocalRTCOptions* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LocalRTCOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_JOINLOBBYOPTIONSINTERNAL_SET_LOCALRTCOPTIONS_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Lobby::JoinLobbyOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::JoinLobbyOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_JOINLOBBYOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_JOINLOBBYOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_JOINLOBBYOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
