#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERBYINDEXOPTIONS_GET_MEMBERINDEX_OFFSET UNITYSDK_OFFSET(0x867B720)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERBYINDEXOPTIONS_SET_MEMBERINDEX_OFFSET UNITYSDK_OFFSET(0x867B730)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERBYINDEXOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x867B740)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyDetailsGetMemberByIndexOptions_TypeDefinitionIndex = 36061;

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

		::System::Void set_MemberIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERBYINDEXOPTIONS_SET_MEMBERINDEX_OFFSET))(this, value);
		}
	};
}
