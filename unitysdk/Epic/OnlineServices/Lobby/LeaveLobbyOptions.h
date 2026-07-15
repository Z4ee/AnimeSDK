#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYOPTIONS_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x1C2BA6F0)
#define EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C2BA6D0)
#define EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYOPTIONS_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x1C2BA700)
#define EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C2BA6E0)
#define EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2BA710)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LeaveLobbyOptions_TypeDefinitionIndex = 43531;

	class LeaveLobbyOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::System::String* _LobbyId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::String* get_LobbyId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYOPTIONS_GET_LOBBYID_OFFSET))(this);
		}

		::System::Void set_LobbyId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYOPTIONS_SET_LOBBYID_OFFSET))(this, a1);
		}
	};
}
