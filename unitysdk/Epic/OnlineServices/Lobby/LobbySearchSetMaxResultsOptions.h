#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETMAXRESULTSOPTIONS_GET_MAXRESULTS_OFFSET UNITYSDK_OFFSET(0x1C2B60D0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETMAXRESULTSOPTIONS_SET_MAXRESULTS_OFFSET UNITYSDK_OFFSET(0x1C2B60E0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETMAXRESULTSOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2B60F0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbySearchSetMaxResultsOptions_TypeDefinitionIndex = 36377;

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

		::System::Void set_MaxResults(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETMAXRESULTSOPTIONS_SET_MAXRESULTS_OFFSET))(this, value);
		}
	};
}
