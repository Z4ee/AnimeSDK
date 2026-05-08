#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETTARGETUSERIDOPTIONS_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x19A2DDA0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETTARGETUSERIDOPTIONS_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x19A2DDB0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETTARGETUSERIDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x19A2DDC0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbySearchSetTargetUserIdOptions_TypeDefinitionIndex = 34159;

	class LobbySearchSetTargetUserIdOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _TargetUserId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETTARGETUSERIDOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETTARGETUSERIDOPTIONS_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETTARGETUSERIDOPTIONS_SET_TARGETUSERID_OFFSET))(this, value);
		}
	};
}
