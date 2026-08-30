#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_UPDATELOBBYMODIFICATIONOPTIONS_GET_LOBBYID_OFFSET UNITYSDK_OFFSET(0xB3A2130)
#define EPIC_ONLINESERVICES_LOBBY_UPDATELOBBYMODIFICATIONOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xB3A2110)
#define EPIC_ONLINESERVICES_LOBBY_UPDATELOBBYMODIFICATIONOPTIONS_SET_LOBBYID_OFFSET UNITYSDK_OFFSET(0xB3A2140)
#define EPIC_ONLINESERVICES_LOBBY_UPDATELOBBYMODIFICATIONOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xB3A2120)
#define EPIC_ONLINESERVICES_LOBBY_UPDATELOBBYMODIFICATIONOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xB3A2150)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int UpdateLobbyModificationOptions_TypeDefinitionIndex = 45846;

	class UpdateLobbyModificationOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::System::String* _LobbyId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_UPDATELOBBYMODIFICATIONOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_UPDATELOBBYMODIFICATIONOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_UPDATELOBBYMODIFICATIONOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::String* get_LobbyId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_UPDATELOBBYMODIFICATIONOPTIONS_GET_LOBBYID_OFFSET))(this);
		}

		::System::Void set_LobbyId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_UPDATELOBBYMODIFICATIONOPTIONS_SET_LOBBYID_OFFSET))(this, a1);
		}
	};
}
