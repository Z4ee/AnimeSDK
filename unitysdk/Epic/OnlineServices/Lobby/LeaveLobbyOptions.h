#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYOPTIONS_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0xA2E7480)
#define EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2E7460)
#define EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYOPTIONS_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0xA2E7490)
#define EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2E7470)
#define EPIC_ONLINESERVICES_LOBBY_LEAVELOBBYOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA2E74A0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LeaveLobbyOptions_TypeDefinitionIndex = 42670;

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
