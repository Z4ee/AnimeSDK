#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Lobby { class LobbySearchSetTargetUserIdOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETTARGETUSERIDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x506F0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETTARGETUSERIDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x505C0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETTARGETUSERIDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x504F0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETTARGETUSERIDOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x50430)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbySearchSetTargetUserIdOptionsInternal_TypeDefinitionIndex = 41941;

	struct alignas(8) LobbySearchSetTargetUserIdOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_TargetUserId; // 0x18

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETTARGETUSERIDOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Lobby::LobbySearchSetTargetUserIdOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbySearchSetTargetUserIdOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETTARGETUSERIDOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETTARGETUSERIDOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETTARGETUSERIDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
