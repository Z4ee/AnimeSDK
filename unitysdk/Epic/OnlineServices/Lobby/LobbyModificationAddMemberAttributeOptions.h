#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Lobby/LobbyAttributeVisibility.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Lobby { class AttributeData; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONADDMEMBERATTRIBUTEOPTIONS_GET_ATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1DF72880)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONADDMEMBERATTRIBUTEOPTIONS_GET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x1DF728A0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONADDMEMBERATTRIBUTEOPTIONS_SET_ATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1DF72890)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONADDMEMBERATTRIBUTEOPTIONS_SET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x1DF728B0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONADDMEMBERATTRIBUTEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF728C0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyModificationAddMemberAttributeOptions_TypeDefinitionIndex = 36347;

	class LobbyModificationAddMemberAttributeOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::Lobby::AttributeData* _Attribute_k__BackingField; // 0x10
		::Epic::OnlineServices::Lobby::LobbyAttributeVisibility _Visibility_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONADDMEMBERATTRIBUTEOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Lobby::AttributeData* get_Attribute()
		{
			return ((::Epic::OnlineServices::Lobby::AttributeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONADDMEMBERATTRIBUTEOPTIONS_GET_ATTRIBUTE_OFFSET))(this);
		}

		::System::Void set_Attribute(::Epic::OnlineServices::Lobby::AttributeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::AttributeData*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONADDMEMBERATTRIBUTEOPTIONS_SET_ATTRIBUTE_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Lobby::LobbyAttributeVisibility get_Visibility()
		{
			return ((::Epic::OnlineServices::Lobby::LobbyAttributeVisibility(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONADDMEMBERATTRIBUTEOPTIONS_GET_VISIBILITY_OFFSET))(this);
		}

		::System::Void set_Visibility(::Epic::OnlineServices::Lobby::LobbyAttributeVisibility value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyAttributeVisibility))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONADDMEMBERATTRIBUTEOPTIONS_SET_VISIBILITY_OFFSET))(this, value);
		}
	};
}
