#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Lobby { class LobbyDetailsGetMemberByIndexOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERBYINDEXOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x501D0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERBYINDEXOPTIONSINTERNAL_SET_MEMBERINDEX_OFFSET UNITYSDK_OFFSET(0x21F0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERBYINDEXOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x2200)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyDetailsGetMemberByIndexOptionsInternal_TypeDefinitionIndex = 42691;

	struct alignas(4) LobbyDetailsGetMemberByIndexOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt32 m_MemberIndex; // 0x14

		::System::Void set_MemberIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERBYINDEXOPTIONSINTERNAL_SET_MEMBERINDEX_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberByIndexOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberByIndexOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERBYINDEXOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERBYINDEXOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
