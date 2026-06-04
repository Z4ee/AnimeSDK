#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYMEMBERATTRIBUTEBYINDEXOPTIONS_GET_ATTRINDEX_OFFSET UNITYSDK_OFFSET(0xA2E9550)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYMEMBERATTRIBUTEBYINDEXOPTIONS_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xA2E9530)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYMEMBERATTRIBUTEBYINDEXOPTIONS_SET_ATTRINDEX_OFFSET UNITYSDK_OFFSET(0xA2E9560)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYMEMBERATTRIBUTEBYINDEXOPTIONS_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xA2E9540)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYMEMBERATTRIBUTEBYINDEXOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA2E9570)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyDetailsCopyMemberAttributeByIndexOptions_TypeDefinitionIndex = 42680;

	class LobbyDetailsCopyMemberAttributeByIndexOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _TargetUserId_k__BackingField; // 0x10
		::System::UInt32 _AttrIndex_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYMEMBERATTRIBUTEBYINDEXOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYMEMBERATTRIBUTEBYINDEXOPTIONS_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYMEMBERATTRIBUTEBYINDEXOPTIONS_SET_TARGETUSERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_AttrIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYMEMBERATTRIBUTEBYINDEXOPTIONS_GET_ATTRINDEX_OFFSET))(this);
		}

		::System::Void set_AttrIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSCOPYMEMBERATTRIBUTEBYINDEXOPTIONS_SET_ATTRINDEX_OFFSET))(this, a1);
		}
	};
}
