#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Lobby/LobbyAttributeVisibility.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Lobby { class AttributeData; }
namespace Epic::OnlineServices::Lobby { class LobbyModificationAddMemberAttributeOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONADDMEMBERATTRIBUTEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x88B080)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONADDMEMBERATTRIBUTEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x88B070)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONADDMEMBERATTRIBUTEOPTIONSINTERNAL_SET_ATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x88AF80)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONADDMEMBERATTRIBUTEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x88AFF0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONADDMEMBERATTRIBUTEOPTIONSINTERNAL_SET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x577FD0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyModificationAddMemberAttributeOptionsInternal_TypeDefinitionIndex = 34126;

	struct alignas(8) LobbyModificationAddMemberAttributeOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_Attribute; // 0x18
		::Epic::OnlineServices::Lobby::LobbyAttributeVisibility m_Visibility; // 0x20

		::System::Void set_Attribute(::Epic::OnlineServices::Lobby::AttributeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::AttributeData*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONADDMEMBERATTRIBUTEOPTIONSINTERNAL_SET_ATTRIBUTE_OFFSET))(this, value);
		}

		::System::Void set_Visibility(::Epic::OnlineServices::Lobby::LobbyAttributeVisibility value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyAttributeVisibility))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONADDMEMBERATTRIBUTEOPTIONSINTERNAL_SET_VISIBILITY_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Lobby::LobbyModificationAddMemberAttributeOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyModificationAddMemberAttributeOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONADDMEMBERATTRIBUTEOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONADDMEMBERATTRIBUTEOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONADDMEMBERATTRIBUTEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
