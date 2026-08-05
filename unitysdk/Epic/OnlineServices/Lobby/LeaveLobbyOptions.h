#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYOPTIONS_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x1DFED980)
#define EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1DFED960)
#define EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYOPTIONS_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x1DFED990)
#define EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1DFED970)
#define EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFED9A0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LeaveLobbyOptions_TypeDefinitionIndex = 36308;

	class LeaveLobbyOptions : public ::System::Object
	{
	public:
		::System::String* _LobbyId_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_LobbyId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYOPTIONS_GET_LOBBYID_OFFSET))(this);
		}

		::System::Void set_LobbyId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYOPTIONS_SET_LOBBYID_OFFSET))(this, value);
		}
	};
}
