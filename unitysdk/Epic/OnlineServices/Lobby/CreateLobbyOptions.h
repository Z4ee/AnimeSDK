#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Lobby/LobbyPermissionLevel.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Lobby { class LocalRTCOptions; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONS_GET_ALLOWINVITES_OFFSET UNITYSDK_OFFSET(0x1C2B5130)
#define EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONS_GET_BUCKETID_OFFSET UNITYSDK_OFFSET(0x1C2B5150)
#define EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONS_GET_DISABLEHOSTMIGRATION_OFFSET UNITYSDK_OFFSET(0x1C2B5170)
#define EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONS_GET_ENABLERTCROOM_OFFSET UNITYSDK_OFFSET(0x1C2B5190)
#define EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONS_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x1C2B51D0)
#define EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONS_GET_LOCALRTCOPTIONS_OFFSET UNITYSDK_OFFSET(0x1C2B51B0)
#define EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C2B50B0)
#define EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONS_GET_MAXLOBBYMEMBERS_OFFSET UNITYSDK_OFFSET(0x1C2B50D0)
#define EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONS_GET_PERMISSIONLEVEL_OFFSET UNITYSDK_OFFSET(0x1C2B50F0)
#define EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONS_GET_PRESENCEENABLED_OFFSET UNITYSDK_OFFSET(0x1C2B5110)
#define EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONS_SET_ALLOWINVITES_OFFSET UNITYSDK_OFFSET(0x1C2B5140)
#define EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONS_SET_BUCKETID_OFFSET UNITYSDK_OFFSET(0x1C2B5160)
#define EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONS_SET_DISABLEHOSTMIGRATION_OFFSET UNITYSDK_OFFSET(0x1C2B5180)
#define EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONS_SET_ENABLERTCROOM_OFFSET UNITYSDK_OFFSET(0x1C2B51A0)
#define EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONS_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x1C2B51E0)
#define EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONS_SET_LOCALRTCOPTIONS_OFFSET UNITYSDK_OFFSET(0x1C2B51C0)
#define EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C2B50C0)
#define EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONS_SET_MAXLOBBYMEMBERS_OFFSET UNITYSDK_OFFSET(0x1C2B50E0)
#define EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONS_SET_PERMISSIONLEVEL_OFFSET UNITYSDK_OFFSET(0x1C2B5100)
#define EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONS_SET_PRESENCEENABLED_OFFSET UNITYSDK_OFFSET(0x1C2B5120)
#define EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2B51F0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int CreateLobbyOptions_TypeDefinitionIndex = 43503;

	class CreateLobbyOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::Lobby::LocalRTCOptions* _LocalRTCOptions_k__BackingField; // 0x10
		::System::String* _BucketId_k__BackingField; // 0x18
		::System::String* _LobbyId_k__BackingField; // 0x20
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x28
		::Epic::OnlineServices::Lobby::LobbyPermissionLevel _PermissionLevel_k__BackingField; // 0x30
		::System::UInt32 _MaxLobbyMembers_k__BackingField; // 0x34
		::System::Boolean _DisableHostMigration_k__BackingField; // 0x38
		::System::Boolean _AllowInvites_k__BackingField; // 0x39
		::System::Boolean _PresenceEnabled_k__BackingField; // 0x3A
		::System::Boolean _EnableRTCRoom_k__BackingField; // 0x3B

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxLobbyMembers()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONS_GET_MAXLOBBYMEMBERS_OFFSET))(this);
		}

		::System::Void set_MaxLobbyMembers(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONS_SET_MAXLOBBYMEMBERS_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Lobby::LobbyPermissionLevel get_PermissionLevel()
		{
			return ((::Epic::OnlineServices::Lobby::LobbyPermissionLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONS_GET_PERMISSIONLEVEL_OFFSET))(this);
		}

		::System::Void set_PermissionLevel(::Epic::OnlineServices::Lobby::LobbyPermissionLevel a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyPermissionLevel))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONS_SET_PERMISSIONLEVEL_OFFSET))(this, a1);
		}

		::System::Boolean get_PresenceEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONS_GET_PRESENCEENABLED_OFFSET))(this);
		}

		::System::Void set_PresenceEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONS_SET_PRESENCEENABLED_OFFSET))(this, a1);
		}

		::System::Boolean get_AllowInvites()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONS_GET_ALLOWINVITES_OFFSET))(this);
		}

		::System::Void set_AllowInvites(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONS_SET_ALLOWINVITES_OFFSET))(this, a1);
		}

		::System::String* get_BucketId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONS_GET_BUCKETID_OFFSET))(this);
		}

		::System::Void set_BucketId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONS_SET_BUCKETID_OFFSET))(this, a1);
		}

		::System::Boolean get_DisableHostMigration()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONS_GET_DISABLEHOSTMIGRATION_OFFSET))(this);
		}

		::System::Void set_DisableHostMigration(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONS_SET_DISABLEHOSTMIGRATION_OFFSET))(this, a1);
		}

		::System::Boolean get_EnableRTCRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONS_GET_ENABLERTCROOM_OFFSET))(this);
		}

		::System::Void set_EnableRTCRoom(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONS_SET_ENABLERTCROOM_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Lobby::LocalRTCOptions* get_LocalRTCOptions()
		{
			return ((::Epic::OnlineServices::Lobby::LocalRTCOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONS_GET_LOCALRTCOPTIONS_OFFSET))(this);
		}

		::System::Void set_LocalRTCOptions(::Epic::OnlineServices::Lobby::LocalRTCOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LocalRTCOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONS_SET_LOCALRTCOPTIONS_OFFSET))(this, a1);
		}

		::System::String* get_LobbyId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONS_GET_LOBBYID_OFFSET))(this);
		}

		::System::Void set_LobbyId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_CREATELOBBYOPTIONS_SET_LOBBYID_OFFSET))(this, a1);
		}
	};
}
