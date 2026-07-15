#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_GETRTCROOMNAMEOPTIONS_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x1C2B73F0)
#define EPIC_ONLINESERVICES_LOBBY_GETRTCROOMNAMEOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C2B7410)
#define EPIC_ONLINESERVICES_LOBBY_GETRTCROOMNAMEOPTIONS_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x1C2B7400)
#define EPIC_ONLINESERVICES_LOBBY_GETRTCROOMNAMEOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C2B7420)
#define EPIC_ONLINESERVICES_LOBBY_GETRTCROOMNAMEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2B7430)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int GetRTCRoomNameOptions_TypeDefinitionIndex = 43515;

	class GetRTCRoomNameOptions : public ::System::Object
	{
	public:
		::System::String* _LobbyId_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_GETRTCROOMNAMEOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_LobbyId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_GETRTCROOMNAMEOPTIONS_GET_LOBBYID_OFFSET))(this);
		}

		::System::Void set_LobbyId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_GETRTCROOMNAMEOPTIONS_SET_LOBBYID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_GETRTCROOMNAMEOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_GETRTCROOMNAMEOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}
	};
}
