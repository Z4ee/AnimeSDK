#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Lobby/LobbyDetailsInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Lobby/LobbyPermissionLevel.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_ALLOWHOSTMIGRATION_OFFSET UNITYSDK_OFFSET(0xB38D600)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_ALLOWINVITES_OFFSET UNITYSDK_OFFSET(0xB38D5C0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_AVAILABLESLOTS_OFFSET UNITYSDK_OFFSET(0xB38D580)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_BUCKETID_OFFSET UNITYSDK_OFFSET(0xB38D5E0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0xB38D520)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_LOBBYOWNERUSERID_OFFSET UNITYSDK_OFFSET(0xB38D540)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_MAXMEMBERS_OFFSET UNITYSDK_OFFSET(0xB38D5A0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_PERMISSIONLEVEL_OFFSET UNITYSDK_OFFSET(0xB38D560)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_RTCROOMENABLED_OFFSET UNITYSDK_OFFSET(0xB38D620)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xB38E1B0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_ALLOWHOSTMIGRATION_OFFSET UNITYSDK_OFFSET(0xB38D610)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_ALLOWINVITES_OFFSET UNITYSDK_OFFSET(0xB38D5D0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_AVAILABLESLOTS_OFFSET UNITYSDK_OFFSET(0xB38D590)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_BUCKETID_OFFSET UNITYSDK_OFFSET(0xB38D5F0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0xB38D530)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_LOBBYOWNERUSERID_OFFSET UNITYSDK_OFFSET(0xB38D550)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_MAXMEMBERS_OFFSET UNITYSDK_OFFSET(0xB38D5B0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_OFFSET UNITYSDK_OFFSET(0xB38D640)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_PERMISSIONLEVEL_OFFSET UNITYSDK_OFFSET(0xB38D570)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_RTCROOMENABLED_OFFSET UNITYSDK_OFFSET(0xB38D630)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB38E2F0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyDetailsInfo_TypeDefinitionIndex = 45737;

	class LobbyDetailsInfo : public ::System::Object
	{
	public:
		::System::String* _BucketId_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LobbyOwnerUserId_k__BackingField; // 0x18
		::System::String* _LobbyId_k__BackingField; // 0x20
		::System::Boolean _AllowInvites_k__BackingField; // 0x28
		::System::Boolean _RTCRoomEnabled_k__BackingField; // 0x29
		::System::Boolean _AllowHostMigration_k__BackingField; // 0x2A
		::Epic::OnlineServices::Lobby::LobbyPermissionLevel _PermissionLevel_k__BackingField; // 0x2C
		::System::UInt32 _MaxMembers_k__BackingField; // 0x30
		::System::UInt32 _AvailableSlots_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO__CTOR_OFFSET))(this);
		}

		::System::String* get_LobbyId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_LOBBYID_OFFSET))(this);
		}

		::System::Void set_LobbyId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_LOBBYID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_LobbyOwnerUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_LOBBYOWNERUSERID_OFFSET))(this);
		}

		::System::Void set_LobbyOwnerUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_LOBBYOWNERUSERID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Lobby::LobbyPermissionLevel get_PermissionLevel()
		{
			return ((::Epic::OnlineServices::Lobby::LobbyPermissionLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_PERMISSIONLEVEL_OFFSET))(this);
		}

		::System::Void set_PermissionLevel(::Epic::OnlineServices::Lobby::LobbyPermissionLevel a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyPermissionLevel))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_PERMISSIONLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvailableSlots()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_AVAILABLESLOTS_OFFSET))(this);
		}

		::System::Void set_AvailableSlots(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_AVAILABLESLOTS_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxMembers()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_MAXMEMBERS_OFFSET))(this);
		}

		::System::Void set_MaxMembers(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_MAXMEMBERS_OFFSET))(this, a1);
		}

		::System::Boolean get_AllowInvites()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_ALLOWINVITES_OFFSET))(this);
		}

		::System::Void set_AllowInvites(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_ALLOWINVITES_OFFSET))(this, a1);
		}

		::System::String* get_BucketId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_BUCKETID_OFFSET))(this);
		}

		::System::Void set_BucketId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_BUCKETID_OFFSET))(this, a1);
		}

		::System::Boolean get_AllowHostMigration()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_ALLOWHOSTMIGRATION_OFFSET))(this);
		}

		::System::Void set_AllowHostMigration(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_ALLOWHOSTMIGRATION_OFFSET))(this, a1);
		}

		::System::Boolean get_RTCRoomEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_RTCROOMENABLED_OFFSET))(this);
		}

		::System::Void set_RTCRoomEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_RTCROOMENABLED_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Lobby::LobbyDetailsInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Lobby::LobbyDetailsInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
