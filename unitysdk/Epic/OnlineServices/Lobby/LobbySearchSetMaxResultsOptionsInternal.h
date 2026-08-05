#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Lobby { class LobbySearchSetMaxResultsOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETMAXRESULTSOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETMAXRESULTSOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9C9400)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETMAXRESULTSOPTIONSINTERNAL_SET_MAXRESULTS_OFFSET UNITYSDK_OFFSET(0x6329D0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETMAXRESULTSOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x961230)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbySearchSetMaxResultsOptionsInternal_TypeDefinitionIndex = 36378;

	struct alignas(4) LobbySearchSetMaxResultsOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt32 m_MaxResults; // 0x14

		::System::Void set_MaxResults(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETMAXRESULTSOPTIONSINTERNAL_SET_MAXRESULTS_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Lobby::LobbySearchSetMaxResultsOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbySearchSetMaxResultsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETMAXRESULTSOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETMAXRESULTSOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETMAXRESULTSOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
