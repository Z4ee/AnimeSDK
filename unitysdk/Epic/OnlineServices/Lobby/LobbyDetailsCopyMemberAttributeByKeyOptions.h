#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYMEMBERATTRIBUTEBYKEYOPTIONS_GET_ATTRKEY_OFFSET UNITYSDK_OFFSET(0xA2E9950)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYMEMBERATTRIBUTEBYKEYOPTIONS_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xA2E9930)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYMEMBERATTRIBUTEBYKEYOPTIONS_SET_ATTRKEY_OFFSET UNITYSDK_OFFSET(0xA2E9960)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYMEMBERATTRIBUTEBYKEYOPTIONS_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xA2E9940)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYMEMBERATTRIBUTEBYKEYOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA2E9970)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyDetailsCopyMemberAttributeByKeyOptions_TypeDefinitionIndex = 42682;

	class LobbyDetailsCopyMemberAttributeByKeyOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _TargetUserId_k__BackingField; // 0x10
		::System::String* _AttrKey_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYMEMBERATTRIBUTEBYKEYOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYMEMBERATTRIBUTEBYKEYOPTIONS_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYMEMBERATTRIBUTEBYKEYOPTIONS_SET_TARGETUSERID_OFFSET))(this, a1);
		}

		::System::String* get_AttrKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYMEMBERATTRIBUTEBYKEYOPTIONS_GET_ATTRKEY_OFFSET))(this);
		}

		::System::Void set_AttrKey(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYMEMBERATTRIBUTEBYKEYOPTIONS_SET_ATTRKEY_OFFSET))(this, a1);
		}
	};
}
