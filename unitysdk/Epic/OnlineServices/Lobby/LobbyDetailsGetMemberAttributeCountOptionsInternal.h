#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Lobby { class LobbyDetailsGetMemberAttributeCountOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERATTRIBUTECOUNTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8C9890)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERATTRIBUTECOUNTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x8C9760)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERATTRIBUTECOUNTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x8C9690)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERATTRIBUTECOUNTOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x8C95D0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyDetailsGetMemberAttributeCountOptionsInternal_TypeDefinitionIndex = 34105;

	struct alignas(8) LobbyDetailsGetMemberAttributeCountOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_TargetUserId; // 0x18

		::System::Void set_TargetUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERATTRIBUTECOUNTOPTIONSINTERNAL_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberAttributeCountOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberAttributeCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERATTRIBUTECOUNTOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERATTRIBUTECOUNTOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYDETAILSGETMEMBERATTRIBUTECOUNTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
