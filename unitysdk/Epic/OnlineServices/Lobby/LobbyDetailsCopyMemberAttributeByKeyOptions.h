#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYMEMBERATTRIBUTEBYKEYOPTIONS_GET_ATTRKEY_OFFSET UNITYSDK_OFFSET(0x1E5AF2E0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYMEMBERATTRIBUTEBYKEYOPTIONS_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1E5AF2C0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYMEMBERATTRIBUTEBYKEYOPTIONS_SET_ATTRKEY_OFFSET UNITYSDK_OFFSET(0x1E5AF2F0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYMEMBERATTRIBUTEBYKEYOPTIONS_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1E5AF2D0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYMEMBERATTRIBUTEBYKEYOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5AF300)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyDetailsCopyMemberAttributeByKeyOptions_TypeDefinitionIndex = 36320;

	class LobbyDetailsCopyMemberAttributeByKeyOptions : public ::System::Object
	{
	public:
		::System::String* _AttrKey_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _TargetUserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYMEMBERATTRIBUTEBYKEYOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYMEMBERATTRIBUTEBYKEYOPTIONS_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYMEMBERATTRIBUTEBYKEYOPTIONS_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::System::String* get_AttrKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYMEMBERATTRIBUTEBYKEYOPTIONS_GET_ATTRKEY_OFFSET))(this);
		}

		::System::Void set_AttrKey(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYMEMBERATTRIBUTEBYKEYOPTIONS_SET_ATTRKEY_OFFSET))(this, value);
		}
	};
}
