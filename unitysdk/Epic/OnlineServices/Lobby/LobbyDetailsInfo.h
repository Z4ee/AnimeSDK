#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Lobby/LobbyDetailsInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Lobby/LobbyPermissionLevel.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_ALLOWHOSTMIGRATION_OFFSET UNITYSDK_OFFSET(0x1CE72430)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_ALLOWINVITES_OFFSET UNITYSDK_OFFSET(0x1CE723F0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_AVAILABLESLOTS_OFFSET UNITYSDK_OFFSET(0x1CE723B0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_BUCKETID_OFFSET UNITYSDK_OFFSET(0x1CE72410)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x1CE72350)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_LOBBYOWNERUSERID_OFFSET UNITYSDK_OFFSET(0x1CE72370)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_MAXMEMBERS_OFFSET UNITYSDK_OFFSET(0x1CE723D0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_PERMISSIONLEVEL_OFFSET UNITYSDK_OFFSET(0x1CE72390)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_RTCROOMENABLED_OFFSET UNITYSDK_OFFSET(0x1CE72450)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1CE72C00)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_ALLOWHOSTMIGRATION_OFFSET UNITYSDK_OFFSET(0x1CE72440)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_ALLOWINVITES_OFFSET UNITYSDK_OFFSET(0x1CE72400)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_AVAILABLESLOTS_OFFSET UNITYSDK_OFFSET(0x1CE723C0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_BUCKETID_OFFSET UNITYSDK_OFFSET(0x1CE72420)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x1CE72360)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_LOBBYOWNERUSERID_OFFSET UNITYSDK_OFFSET(0x1CE72380)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_MAXMEMBERS_OFFSET UNITYSDK_OFFSET(0x1CE723E0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_OFFSET UNITYSDK_OFFSET(0x1CE72470)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_PERMISSIONLEVEL_OFFSET UNITYSDK_OFFSET(0x1CE723A0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_RTCROOMENABLED_OFFSET UNITYSDK_OFFSET(0x1CE72460)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE72D50)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyDetailsInfo_TypeDefinitionIndex = 35673;

	class LobbyDetailsInfo : public ::System::Object
	{
	public:
		::System::String* _LobbyId_k__BackingField; // 0x10
		::System::String* _BucketId_k__BackingField; // 0x18
		::Epic::OnlineServices::ProductUserId* _LobbyOwnerUserId_k__BackingField; // 0x20
		::Epic::OnlineServices::Lobby::LobbyPermissionLevel _PermissionLevel_k__BackingField; // 0x28
		::System::UInt32 _MaxMembers_k__BackingField; // 0x2C
		::System::Boolean _AllowInvites_k__BackingField; // 0x30
		::System::Boolean _AllowHostMigration_k__BackingField; // 0x31
		::System::Boolean _RTCRoomEnabled_k__BackingField; // 0x32
		::System::UInt32 _AvailableSlots_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO__CTOR_OFFSET))(this);
		}

		::System::String* get_LobbyId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_LOBBYID_OFFSET))(this);
		}

		::System::Void set_LobbyId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_LOBBYID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LobbyOwnerUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_LOBBYOWNERUSERID_OFFSET))(this);
		}

		::System::Void set_LobbyOwnerUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_LOBBYOWNERUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Lobby::LobbyPermissionLevel get_PermissionLevel()
		{
			return ((::Epic::OnlineServices::Lobby::LobbyPermissionLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_PERMISSIONLEVEL_OFFSET))(this);
		}

		::System::Void set_PermissionLevel(::Epic::OnlineServices::Lobby::LobbyPermissionLevel value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyPermissionLevel))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_PERMISSIONLEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_AvailableSlots()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_AVAILABLESLOTS_OFFSET))(this);
		}

		::System::Void set_AvailableSlots(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_AVAILABLESLOTS_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxMembers()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_MAXMEMBERS_OFFSET))(this);
		}

		::System::Void set_MaxMembers(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_MAXMEMBERS_OFFSET))(this, value);
		}

		::System::Boolean get_AllowInvites()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_ALLOWINVITES_OFFSET))(this);
		}

		::System::Void set_AllowInvites(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_ALLOWINVITES_OFFSET))(this, value);
		}

		::System::String* get_BucketId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_BUCKETID_OFFSET))(this);
		}

		::System::Void set_BucketId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_BUCKETID_OFFSET))(this, value);
		}

		::System::Boolean get_AllowHostMigration()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_ALLOWHOSTMIGRATION_OFFSET))(this);
		}

		::System::Void set_AllowHostMigration(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_ALLOWHOSTMIGRATION_OFFSET))(this, value);
		}

		::System::Boolean get_RTCRoomEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_RTCROOMENABLED_OFFSET))(this);
		}

		::System::Void set_RTCRoomEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_RTCROOMENABLED_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Lobby::LobbyDetailsInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Lobby::LobbyDetailsInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_1_OFFSET))(this, other);
		}
	};
}
