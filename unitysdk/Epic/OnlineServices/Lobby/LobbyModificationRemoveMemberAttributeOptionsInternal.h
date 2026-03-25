#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Lobby { class LobbyModificationRemoveMemberAttributeOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONREMOVEMEMBERATTRIBUTEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x4E4D0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONREMOVEMEMBERATTRIBUTEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x4E3B0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONREMOVEMEMBERATTRIBUTEOPTIONSINTERNAL_SET_KEY_OFFSET UNITYSDK_OFFSET(0x4E230)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONREMOVEMEMBERATTRIBUTEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x4E2E0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyModificationRemoveMemberAttributeOptionsInternal_TypeDefinitionIndex = 36085;

	struct alignas(8) LobbyModificationRemoveMemberAttributeOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_Key; // 0x18

		::System::Void set_Key(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONREMOVEMEMBERATTRIBUTEOPTIONSINTERNAL_SET_KEY_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Lobby::LobbyModificationRemoveMemberAttributeOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbyModificationRemoveMemberAttributeOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONREMOVEMEMBERATTRIBUTEOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONREMOVEMEMBERATTRIBUTEOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYMODIFICATIONREMOVEMEMBERATTRIBUTEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
