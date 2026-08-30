#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERBYINDEXOPTIONS_GET_MEMBERINDEX_OFFSET UNITYSDK_OFFSET(0xB38D3A0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERBYINDEXOPTIONS_SET_MEMBERINDEX_OFFSET UNITYSDK_OFFSET(0xB38D3B0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERBYINDEXOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xB38D3C0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyDetailsGetMemberByIndexOptions_TypeDefinitionIndex = 45733;

	class LobbyDetailsGetMemberByIndexOptions : public ::System::Object
	{
	public:
		::System::UInt32 _MemberIndex_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERBYINDEXOPTIONS__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_MemberIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERBYINDEXOPTIONS_GET_MEMBERINDEX_OFFSET))(this);
		}

		::System::Void set_MemberIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERBYINDEXOPTIONS_SET_MEMBERINDEX_OFFSET))(this, a1);
		}
	};
}
