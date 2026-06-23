#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Lobby { class LobbyDetailsGetMemberByIndexOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERBYINDEXOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x962DB0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERBYINDEXOPTIONSINTERNAL_SET_MEMBERINDEX_OFFSET UNITYSDK_OFFSET(0x5120D0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERBYINDEXOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x916EA0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyDetailsGetMemberByIndexOptionsInternal_TypeDefinitionIndex = 35670;

	struct alignas(4) LobbyDetailsGetMemberByIndexOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt32 m_MemberIndex; // 0x14

		::System::Void set_MemberIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERBYINDEXOPTIONSINTERNAL_SET_MEMBERINDEX_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberByIndexOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberByIndexOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERBYINDEXOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERBYINDEXOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
