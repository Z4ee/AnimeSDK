#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Lobby { class LobbyDetailsGetMemberAttributeCountOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERATTRIBUTECOUNTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C53290)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERATTRIBUTECOUNTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3C53280)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERATTRIBUTECOUNTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3C531B0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERATTRIBUTECOUNTOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x3C530F0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyDetailsGetMemberAttributeCountOptionsInternal_TypeDefinitionIndex = 45732;

	struct alignas(8) LobbyDetailsGetMemberAttributeCountOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_TargetUserId; // 0x18

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERATTRIBUTECOUNTOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberAttributeCountOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberAttributeCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERATTRIBUTECOUNTOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERATTRIBUTECOUNTOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERATTRIBUTECOUNTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
