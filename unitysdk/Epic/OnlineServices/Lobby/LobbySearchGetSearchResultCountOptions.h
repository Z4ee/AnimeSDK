#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHGETSEARCHRESULTCOUNTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC3D630)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbySearchGetSearchResultCountOptions_TypeDefinitionIndex = 36369;

	class LobbySearchGetSearchResultCountOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHGETSEARCHRESULTCOUNTOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
