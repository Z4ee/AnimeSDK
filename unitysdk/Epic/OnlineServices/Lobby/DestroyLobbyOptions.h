#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_DESTROYLOBBYOPTIONS_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x86749E0)
#define EPIC_ONLINESERVICES_LOBBY_DESTROYLOBBYOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x86749C0)
#define EPIC_ONLINESERVICES_LOBBY_DESTROYLOBBYOPTIONS_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0x86749F0)
#define EPIC_ONLINESERVICES_LOBBY_DESTROYLOBBYOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x86749D0)
#define EPIC_ONLINESERVICES_LOBBY_DESTROYLOBBYOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8674A00)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int DestroyLobbyOptions_TypeDefinitionIndex = 36019;

	class DestroyLobbyOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::System::String* _LobbyId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_DESTROYLOBBYOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_DESTROYLOBBYOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_DESTROYLOBBYOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_LobbyId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_DESTROYLOBBYOPTIONS_GET_LOBBYID_OFFSET))(this);
		}

		::System::Void set_LobbyId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_DESTROYLOBBYOPTIONS_SET_LOBBYID_OFFSET))(this, value);
		}
	};
}
