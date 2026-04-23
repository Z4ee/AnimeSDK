#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEOPTIONS_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x8EA6090)
#define EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8EA60B0)
#define EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEOPTIONS_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x8EA60A0)
#define EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8EA60C0)
#define EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8EA60D0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int CopyLobbyDetailsHandleOptions_TypeDefinitionIndex = 41835;

	class CopyLobbyDetailsHandleOptions : public ::System::Object
	{
	public:
		::System::String* _LobbyId_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_LobbyId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEOPTIONS_GET_LOBBYID_OFFSET))(this);
		}

		::System::Void set_LobbyId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEOPTIONS_SET_LOBBYID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_COPYLOBBYDETAILSHANDLEOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}
	};
}
