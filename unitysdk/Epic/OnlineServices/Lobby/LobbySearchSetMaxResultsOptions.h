#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETMAXRESULTSOPTIONS_GET_MAXRESULTS_OFFSET UNITYSDK_OFFSET(0xA2F72C0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETMAXRESULTSOPTIONS_SET_MAXRESULTS_OFFSET UNITYSDK_OFFSET(0xA2F72D0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETMAXRESULTSOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA2F72E0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbySearchSetMaxResultsOptions_TypeDefinitionIndex = 42739;

	class LobbySearchSetMaxResultsOptions : public ::System::Object
	{
	public:
		::System::UInt32 _MaxResults_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETMAXRESULTSOPTIONS__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_MaxResults()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETMAXRESULTSOPTIONS_GET_MAXRESULTS_OFFSET))(this);
		}

		::System::Void set_MaxResults(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETMAXRESULTSOPTIONS_SET_MAXRESULTS_OFFSET))(this, a1);
		}
	};
}
