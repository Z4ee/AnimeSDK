#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHCOPYSEARCHRESULTBYINDEXOPTIONS_GET_LOBBYINDEX_OFFSET UNITYSDK_OFFSET(0x1BF8E250)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHCOPYSEARCHRESULTBYINDEXOPTIONS_SET_LOBBYINDEX_OFFSET UNITYSDK_OFFSET(0x1BF8E260)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHCOPYSEARCHRESULTBYINDEXOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF8E270)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbySearchCopySearchResultByIndexOptions_TypeDefinitionIndex = 43586;

	class LobbySearchCopySearchResultByIndexOptions : public ::System::Object
	{
	public:
		::System::UInt32 _LobbyIndex_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHCOPYSEARCHRESULTBYINDEXOPTIONS__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_LobbyIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHCOPYSEARCHRESULTBYINDEXOPTIONS_GET_LOBBYINDEX_OFFSET))(this);
		}

		::System::Void set_LobbyIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHCOPYSEARCHRESULTBYINDEXOPTIONS_SET_LOBBYINDEX_OFFSET))(this, a1);
		}
	};
}
