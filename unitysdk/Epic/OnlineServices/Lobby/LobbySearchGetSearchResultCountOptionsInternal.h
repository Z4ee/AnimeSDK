#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Lobby { class LobbySearchGetSearchResultCountOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHGETSEARCHRESULTCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHGETSEARCHRESULTCOUNTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9C0E70)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHGETSEARCHRESULTCOUNTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9029E0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbySearchGetSearchResultCountOptionsInternal_TypeDefinitionIndex = 36370;

	struct alignas(4) LobbySearchGetSearchResultCountOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::Lobby::LobbySearchGetSearchResultCountOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbySearchGetSearchResultCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHGETSEARCHRESULTCOUNTOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHGETSEARCHRESULTCOUNTOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHGETSEARCHRESULTCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
