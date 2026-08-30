#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHGETSEARCHRESULTCOUNTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xB399920)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbySearchGetSearchResultCountOptions_TypeDefinitionIndex = 45774;

	class LobbySearchGetSearchResultCountOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHGETSEARCHRESULTCOUNTOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
