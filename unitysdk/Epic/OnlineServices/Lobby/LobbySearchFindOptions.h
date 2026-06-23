#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHFINDOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1B7B6010)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHFINDOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1B7B6020)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHFINDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7B6030)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbySearchFindOptions_TypeDefinitionIndex = 35708;

	class LobbySearchFindOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHFINDOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHFINDOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHFINDOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}
	};
}
