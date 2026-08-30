#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETMAXMEMBERSOPTIONS_GET_MAXMEMBERS_OFFSET UNITYSDK_OFFSET(0xB397D80)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETMAXMEMBERSOPTIONS_SET_MAXMEMBERS_OFFSET UNITYSDK_OFFSET(0xB397D90)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETMAXMEMBERSOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xB397DA0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyModificationSetMaxMembersOptions_TypeDefinitionIndex = 45762;

	class LobbyModificationSetMaxMembersOptions : public ::System::Object
	{
	public:
		::System::UInt32 _MaxMembers_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETMAXMEMBERSOPTIONS__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_MaxMembers()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETMAXMEMBERSOPTIONS_GET_MAXMEMBERS_OFFSET))(this);
		}

		::System::Void set_MaxMembers(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONSETMAXMEMBERSOPTIONS_SET_MAXMEMBERS_OFFSET))(this, a1);
		}
	};
}
