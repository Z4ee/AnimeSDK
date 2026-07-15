#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Lobby/LobbyPermissionLevel.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Lobby { class LobbyDetailsInfo; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3ABD170)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_GET_ALLOWHOSTMIGRATION_OFFSET UNITYSDK_OFFSET(0x3ABCE20)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_GET_ALLOWINVITES_OFFSET UNITYSDK_OFFSET(0x3ABCB60)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_GET_AVAILABLESLOTS_OFFSET UNITYSDK_OFFSET(0x7A7FC0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_GET_BUCKETID_OFFSET UNITYSDK_OFFSET(0x3ABCCC0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x3ABC8D0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_GET_LOBBYOWNERUSERID_OFFSET UNITYSDK_OFFSET(0x3ABCA30)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_GET_MAXMEMBERS_OFFSET UNITYSDK_OFFSET(0x7A7FD0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_GET_PERMISSIONLEVEL_OFFSET UNITYSDK_OFFSET(0x7A7FB0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_GET_RTCROOMENABLED_OFFSET UNITYSDK_OFFSET(0x3ABCF80)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3ABD0F0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_ALLOWHOSTMIGRATION_OFFSET UNITYSDK_OFFSET(0x3ABCED0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_ALLOWINVITES_OFFSET UNITYSDK_OFFSET(0x3ABCC10)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_AVAILABLESLOTS_OFFSET UNITYSDK_OFFSET(0x7C2960)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_BUCKETID_OFFSET UNITYSDK_OFFSET(0x3ABCD70)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x3ABC980)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_LOBBYOWNERUSERID_OFFSET UNITYSDK_OFFSET(0x3ABCAA0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_MAXMEMBERS_OFFSET UNITYSDK_OFFSET(0x395BE80)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3ABD0E0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_PERMISSIONLEVEL_OFFSET UNITYSDK_OFFSET(0x38ECC60)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_RTCROOMENABLED_OFFSET UNITYSDK_OFFSET(0x3ABD030)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyDetailsInfoInternal_TypeDefinitionIndex = 43556;

	struct alignas(8) LobbyDetailsInfoInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LobbyId; // 0x18
		::System::IntPtr m_LobbyOwnerUserId; // 0x20
		::Epic::OnlineServices::Lobby::LobbyPermissionLevel m_PermissionLevel; // 0x28
		::System::UInt32 m_AvailableSlots; // 0x2C
		::System::UInt32 m_MaxMembers; // 0x30
		::System::Int32 m_AllowInvites; // 0x34
		::System::IntPtr m_BucketId; // 0x38
		::System::Int32 m_AllowHostMigration; // 0x40
		::System::Int32 m_RTCRoomEnabled; // 0x44

		::System::String* get_LobbyId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_GET_LOBBYID_OFFSET))(this);
		}

		::System::Void set_LobbyId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_LOBBYID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_LobbyOwnerUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_GET_LOBBYOWNERUSERID_OFFSET))(this);
		}

		::System::Void set_LobbyOwnerUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_LOBBYOWNERUSERID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Lobby::LobbyPermissionLevel get_PermissionLevel()
		{
			return ((::Epic::OnlineServices::Lobby::LobbyPermissionLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_GET_PERMISSIONLEVEL_OFFSET))(this);
		}

		::System::Void set_PermissionLevel(::Epic::OnlineServices::Lobby::LobbyPermissionLevel a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyPermissionLevel))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_PERMISSIONLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvailableSlots()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_GET_AVAILABLESLOTS_OFFSET))(this);
		}

		::System::Void set_AvailableSlots(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_AVAILABLESLOTS_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxMembers()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_GET_MAXMEMBERS_OFFSET))(this);
		}

		::System::Void set_MaxMembers(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_MAXMEMBERS_OFFSET))(this, a1);
		}

		::System::Boolean get_AllowInvites()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_GET_ALLOWINVITES_OFFSET))(this);
		}

		::System::Void set_AllowInvites(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_ALLOWINVITES_OFFSET))(this, a1);
		}

		::System::String* get_BucketId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_GET_BUCKETID_OFFSET))(this);
		}

		::System::Void set_BucketId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_BUCKETID_OFFSET))(this, a1);
		}

		::System::Boolean get_AllowHostMigration()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_GET_ALLOWHOSTMIGRATION_OFFSET))(this);
		}

		::System::Void set_AllowHostMigration(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_ALLOWHOSTMIGRATION_OFFSET))(this, a1);
		}

		::System::Boolean get_RTCRoomEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_GET_RTCROOMENABLED_OFFSET))(this);
		}

		::System::Void set_RTCRoomEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_RTCROOMENABLED_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Lobby::LobbyDetailsInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyDetailsInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
