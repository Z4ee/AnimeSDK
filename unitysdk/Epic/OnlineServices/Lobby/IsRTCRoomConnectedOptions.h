#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_ISRTCROOMCONNECTEDOPTIONS_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x8EA9410)
#define EPIC_ONLINESERVICES_LOBBY_ISRTCROOMCONNECTEDOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8EA9430)
#define EPIC_ONLINESERVICES_LOBBY_ISRTCROOMCONNECTEDOPTIONS_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x8EA9420)
#define EPIC_ONLINESERVICES_LOBBY_ISRTCROOMCONNECTEDOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8EA9440)
#define EPIC_ONLINESERVICES_LOBBY_ISRTCROOMCONNECTEDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8EA9450)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int IsRTCRoomConnectedOptions_TypeDefinitionIndex = 41853;

	class IsRTCRoomConnectedOptions : public ::System::Object
	{
	public:
		::System::String* _LobbyId_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ISRTCROOMCONNECTEDOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_LobbyId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ISRTCROOMCONNECTEDOPTIONS_GET_LOBBYID_OFFSET))(this);
		}

		::System::Void set_LobbyId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ISRTCROOMCONNECTEDOPTIONS_SET_LOBBYID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ISRTCROOMCONNECTEDOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ISRTCROOMCONNECTEDOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}
	};
}
