#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Lobby/LobbyPermissionLevel.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Lobby { class LobbyDetailsInfo; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9972D0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_GET_ALLOWHOSTMIGRATION_OFFSET UNITYSDK_OFFSET(0x996F90)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_GET_ALLOWINVITES_OFFSET UNITYSDK_OFFSET(0x996CD0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_GET_AVAILABLESLOTS_OFFSET UNITYSDK_OFFSET(0x3FDF10)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_GET_BUCKETID_OFFSET UNITYSDK_OFFSET(0x996E30)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x996A40)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_GET_LOBBYOWNERUSERID_OFFSET UNITYSDK_OFFSET(0x996BA0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_GET_MAXMEMBERS_OFFSET UNITYSDK_OFFSET(0x3FDE90)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_GET_PERMISSIONLEVEL_OFFSET UNITYSDK_OFFSET(0x352810)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_GET_RTCROOMENABLED_OFFSET UNITYSDK_OFFSET(0x9970F0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x997260)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_ALLOWHOSTMIGRATION_OFFSET UNITYSDK_OFFSET(0x997040)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_ALLOWINVITES_OFFSET UNITYSDK_OFFSET(0x996D80)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_AVAILABLESLOTS_OFFSET UNITYSDK_OFFSET(0x3FDF20)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_BUCKETID_OFFSET UNITYSDK_OFFSET(0x996EE0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x996AF0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_LOBBYOWNERUSERID_OFFSET UNITYSDK_OFFSET(0x996C10)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_MAXMEMBERS_OFFSET UNITYSDK_OFFSET(0x86B770)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x997250)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_PERMISSIONLEVEL_OFFSET UNITYSDK_OFFSET(0x36CDA0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_RTCROOMENABLED_OFFSET UNITYSDK_OFFSET(0x9971A0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyDetailsInfoInternal_TypeDefinitionIndex = 36333;

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

		::System::Void set_LobbyId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_LOBBYID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LobbyOwnerUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_GET_LOBBYOWNERUSERID_OFFSET))(this);
		}

		::System::Void set_LobbyOwnerUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_LOBBYOWNERUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Lobby::LobbyPermissionLevel get_PermissionLevel()
		{
			return ((::Epic::OnlineServices::Lobby::LobbyPermissionLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_GET_PERMISSIONLEVEL_OFFSET))(this);
		}

		::System::Void set_PermissionLevel(::Epic::OnlineServices::Lobby::LobbyPermissionLevel value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyPermissionLevel))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_PERMISSIONLEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_AvailableSlots()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_GET_AVAILABLESLOTS_OFFSET))(this);
		}

		::System::Void set_AvailableSlots(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_AVAILABLESLOTS_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxMembers()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_GET_MAXMEMBERS_OFFSET))(this);
		}

		::System::Void set_MaxMembers(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_MAXMEMBERS_OFFSET))(this, value);
		}

		::System::Boolean get_AllowInvites()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_GET_ALLOWINVITES_OFFSET))(this);
		}

		::System::Void set_AllowInvites(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_ALLOWINVITES_OFFSET))(this, value);
		}

		::System::String* get_BucketId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_GET_BUCKETID_OFFSET))(this);
		}

		::System::Void set_BucketId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_BUCKETID_OFFSET))(this, value);
		}

		::System::Boolean get_AllowHostMigration()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_GET_ALLOWHOSTMIGRATION_OFFSET))(this);
		}

		::System::Void set_AllowHostMigration(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_ALLOWHOSTMIGRATION_OFFSET))(this, value);
		}

		::System::Boolean get_RTCRoomEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_GET_RTCROOMENABLED_OFFSET))(this);
		}

		::System::Void set_RTCRoomEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_RTCROOMENABLED_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Lobby::LobbyDetailsInfo* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyDetailsInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFOINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
