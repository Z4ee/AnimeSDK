#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Lobby/LobbyAttributeVisibility.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Lobby { class AttributeData; }
namespace Epic::OnlineServices::Lobby { class LobbyModificationAddMemberAttributeOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONADDMEMBERATTRIBUTEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x53AF0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONADDMEMBERATTRIBUTEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x53AE0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONADDMEMBERATTRIBUTEOPTIONSINTERNAL_SET_ATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x539F0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONADDMEMBERATTRIBUTEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x53A60)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONADDMEMBERATTRIBUTEOPTIONSINTERNAL_SET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x2A90)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyModificationAddMemberAttributeOptionsInternal_TypeDefinitionIndex = 42710;

	struct alignas(8) LobbyModificationAddMemberAttributeOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_Attribute; // 0x18
		::Epic::OnlineServices::Lobby::LobbyAttributeVisibility m_Visibility; // 0x20

		::System::Void set_Attribute(::Epic::OnlineServices::Lobby::AttributeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::AttributeData*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONADDMEMBERATTRIBUTEOPTIONSINTERNAL_SET_ATTRIBUTE_OFFSET))(this, a1);
		}

		::System::Void set_Visibility(::Epic::OnlineServices::Lobby::LobbyAttributeVisibility a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyAttributeVisibility))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONADDMEMBERATTRIBUTEOPTIONSINTERNAL_SET_VISIBILITY_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Lobby::LobbyModificationAddMemberAttributeOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyModificationAddMemberAttributeOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONADDMEMBERATTRIBUTEOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONADDMEMBERATTRIBUTEOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONADDMEMBERATTRIBUTEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
