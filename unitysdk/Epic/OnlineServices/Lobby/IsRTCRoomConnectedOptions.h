#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_ISRTCROOMCONNECTEDOPTIONS_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0xB387710)
#define EPIC_ONLINESERVICES_LOBBY_ISRTCROOMCONNECTEDOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xB387730)
#define EPIC_ONLINESERVICES_LOBBY_ISRTCROOMCONNECTEDOPTIONS_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0xB387720)
#define EPIC_ONLINESERVICES_LOBBY_ISRTCROOMCONNECTEDOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xB387740)
#define EPIC_ONLINESERVICES_LOBBY_ISRTCROOMCONNECTEDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xB387750)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int IsRTCRoomConnectedOptions_TypeDefinitionIndex = 45699;

	class IsRTCRoomConnectedOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::System::String* _LobbyId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ISRTCROOMCONNECTEDOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_LobbyId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ISRTCROOMCONNECTEDOPTIONS_GET_LOBBYID_OFFSET))(this);
		}

		::System::Void set_LobbyId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ISRTCROOMCONNECTEDOPTIONS_SET_LOBBYID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ISRTCROOMCONNECTEDOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ISRTCROOMCONNECTEDOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}
	};
}
