#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Lobby/LobbyPermissionLevel.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Lobby { class CreateLobbyOptions; }
namespace Epic::OnlineServices::Lobby { class LocalRTCOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x47F70)
#define EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x47F00)
#define EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONSINTERNAL_SET_ALLOWINVITES_OFFSET UNITYSDK_OFFSET(0x47B10)
#define EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONSINTERNAL_SET_BUCKETID_OFFSET UNITYSDK_OFFSET(0x47BC0)
#define EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONSINTERNAL_SET_DISABLEHOSTMIGRATION_OFFSET UNITYSDK_OFFSET(0x47C70)
#define EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONSINTERNAL_SET_ENABLERTCROOM_OFFSET UNITYSDK_OFFSET(0x47D20)
#define EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONSINTERNAL_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x47E40)
#define EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONSINTERNAL_SET_LOCALRTCOPTIONS_OFFSET UNITYSDK_OFFSET(0x47DD0)
#define EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x479A0)
#define EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONSINTERNAL_SET_MAXLOBBYMEMBERS_OFFSET UNITYSDK_OFFSET(0x26F0)
#define EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x47EF0)
#define EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONSINTERNAL_SET_PERMISSIONLEVEL_OFFSET UNITYSDK_OFFSET(0x6910)
#define EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONSINTERNAL_SET_PRESENCEENABLED_OFFSET UNITYSDK_OFFSET(0x47A60)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int CreateLobbyOptionsInternal_TypeDefinitionIndex = 36014;

	struct alignas(8) CreateLobbyOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::UInt32 m_MaxLobbyMembers; // 0x20
		::Epic::OnlineServices::Lobby::LobbyPermissionLevel m_PermissionLevel; // 0x24
		::System::Int32 m_PresenceEnabled; // 0x28
		::System::Int32 m_AllowInvites; // 0x2C
		::System::IntPtr m_BucketId; // 0x30
		::System::Int32 m_DisableHostMigration; // 0x38
		::System::Int32 m_EnableRTCRoom; // 0x3C
		::System::IntPtr m_LocalRTCOptions; // 0x40
		::System::IntPtr m_LobbyId; // 0x48

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_MaxLobbyMembers(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONSINTERNAL_SET_MAXLOBBYMEMBERS_OFFSET))(this, value);
		}

		::System::Void set_PermissionLevel(::Epic::OnlineServices::Lobby::LobbyPermissionLevel value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyPermissionLevel))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONSINTERNAL_SET_PERMISSIONLEVEL_OFFSET))(this, value);
		}

		::System::Void set_PresenceEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONSINTERNAL_SET_PRESENCEENABLED_OFFSET))(this, value);
		}

		::System::Void set_AllowInvites(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONSINTERNAL_SET_ALLOWINVITES_OFFSET))(this, value);
		}

		::System::Void set_BucketId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONSINTERNAL_SET_BUCKETID_OFFSET))(this, value);
		}

		::System::Void set_DisableHostMigration(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONSINTERNAL_SET_DISABLEHOSTMIGRATION_OFFSET))(this, value);
		}

		::System::Void set_EnableRTCRoom(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONSINTERNAL_SET_ENABLERTCROOM_OFFSET))(this, value);
		}

		::System::Void set_LocalRTCOptions(::Epic::OnlineServices::Lobby::LocalRTCOptions* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LocalRTCOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONSINTERNAL_SET_LOCALRTCOPTIONS_OFFSET))(this, value);
		}

		::System::Void set_LobbyId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONSINTERNAL_SET_LOBBYID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Lobby::CreateLobbyOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::CreateLobbyOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
