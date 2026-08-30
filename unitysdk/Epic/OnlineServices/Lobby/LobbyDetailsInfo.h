#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Lobby/LobbyDetailsInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Lobby/LobbyPermissionLevel.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_ALLOWHOSTMIGRATION_OFFSET UNITYSDK_OFFSET(0x1DFF83B0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_ALLOWINVITES_OFFSET UNITYSDK_OFFSET(0x1DFF8370)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_AVAILABLESLOTS_OFFSET UNITYSDK_OFFSET(0x1DFF8330)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_BUCKETID_OFFSET UNITYSDK_OFFSET(0x1DFF8390)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x1DFF82D0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_LOBBYOWNERUSERID_OFFSET UNITYSDK_OFFSET(0x1DFF82F0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_MAXMEMBERS_OFFSET UNITYSDK_OFFSET(0x1DFF8350)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_PERMISSIONLEVEL_OFFSET UNITYSDK_OFFSET(0x1DFF8310)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_GET_RTCROOMENABLED_OFFSET UNITYSDK_OFFSET(0x1DFF83D0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1DFF8F60)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_ALLOWHOSTMIGRATION_OFFSET UNITYSDK_OFFSET(0x1DFF83C0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_ALLOWINVITES_OFFSET UNITYSDK_OFFSET(0x1DFF8380)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_AVAILABLESLOTS_OFFSET UNITYSDK_OFFSET(0x1DFF8340)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_BUCKETID_OFFSET UNITYSDK_OFFSET(0x1DFF83A0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x1DFF82E0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_LOBBYOWNERUSERID_OFFSET UNITYSDK_OFFSET(0x1DFF8300)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_MAXMEMBERS_OFFSET UNITYSDK_OFFSET(0x1DFF8360)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_OFFSET UNITYSDK_OFFSET(0x1DFF83F0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_PERMISSIONLEVEL_OFFSET UNITYSDK_OFFSET(0x1DFF8320)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO_SET_RTCROOMENABLED_OFFSET UNITYSDK_OFFSET(0x1DFF83E0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFF90A0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyDetailsInfo_TypeDefinitionIndex = 45737;

	class LobbyDetailsInfo : public ::System::Object
	{
	public:
		::System::String* _BucketId_k__BackingField; // 0x10
		::System::String* _LobbyId_k__BackingField; // 0x18
		::Epic::OnlineServices::ProductUserId* _LobbyOwnerUserId_k__BackingField; // 0x20
		::System::UInt32 _MaxMembers_k__BackingField; // 0x28
		::Epic::OnlineServices::Lobby::LobbyPermissionLevel _PermissionLevel_k__BackingField; // 0x2C
		::System::Boolean _AllowInvites_k__BackingField; // 0x30
		::System::Boolean _RTCRoomEnabled_k__BackingField; // 0x31
		::System::Boolean _AllowHostMigration_k__BackingField; // 0x32
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
