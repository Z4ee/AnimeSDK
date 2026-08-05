#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Lobby { class LobbySearchFindOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHFINDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9EFC00)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHFINDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9EFAD0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHFINDOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x9EF940)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHFINDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9EFA00)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbySearchFindOptionsInternal_TypeDefinitionIndex = 36368;

	struct alignas(8) LobbySearchFindOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHFINDOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Lobby::LobbySearchFindOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbySearchFindOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHFINDOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHFINDOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHFINDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
