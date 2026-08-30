#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYRTCROOMCONNECTIONCHANGEDOPTIONS_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x1DFEB920)
#define EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYRTCROOMCONNECTIONCHANGEDOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1DFEB940)
#define EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYRTCROOMCONNECTIONCHANGEDOPTIONS_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x1DFEB930)
#define EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYRTCROOMCONNECTIONCHANGEDOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1DFEB950)
#define EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYRTCROOMCONNECTIONCHANGEDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFEB960)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int AddNotifyRTCRoomConnectionChangedOptions_TypeDefinitionIndex = 45669;

	class AddNotifyRTCRoomConnectionChangedOptions : public ::System::Object
	{
	public:
		::System::String* _LobbyId_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYRTCROOMCONNECTIONCHANGEDOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_LobbyId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYRTCROOMCONNECTIONCHANGEDOPTIONS_GET_LOBBYID_OFFSET))(this);
		}

		::System::Void set_LobbyId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYRTCROOMCONNECTIONCHANGEDOPTIONS_SET_LOBBYID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYRTCROOMCONNECTIONCHANGEDOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYRTCROOMCONNECTIONCHANGEDOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}
	};
}
