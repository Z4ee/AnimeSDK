#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYRTCROOMCONNECTIONCHANGEDOPTIONS_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x1D82C920)
#define EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYRTCROOMCONNECTIONCHANGEDOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D82C940)
#define EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYRTCROOMCONNECTIONCHANGEDOPTIONS_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x1D82C930)
#define EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYRTCROOMCONNECTIONCHANGEDOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D82C950)
#define EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYRTCROOMCONNECTIONCHANGEDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D82C960)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int AddNotifyRTCRoomConnectionChangedOptions_TypeDefinitionIndex = 36264;

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

		::System::Void set_LobbyId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYRTCROOMCONNECTIONCHANGEDOPTIONS_SET_LOBBYID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYRTCROOMCONNECTIONCHANGEDOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYRTCROOMCONNECTIONCHANGEDOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}
	};
}
