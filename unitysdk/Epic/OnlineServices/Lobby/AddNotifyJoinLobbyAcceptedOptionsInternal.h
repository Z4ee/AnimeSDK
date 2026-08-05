#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Lobby { class AddNotifyJoinLobbyAcceptedOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYJOINLOBBYACCEPTEDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYJOINLOBBYACCEPTEDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x971570)
#define EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYJOINLOBBYACCEPTEDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9029E0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int AddNotifyJoinLobbyAcceptedOptionsInternal_TypeDefinitionIndex = 36253;

	struct alignas(4) AddNotifyJoinLobbyAcceptedOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::Lobby::AddNotifyJoinLobbyAcceptedOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::AddNotifyJoinLobbyAcceptedOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYJOINLOBBYACCEPTEDOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYJOINLOBBYACCEPTEDOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYJOINLOBBYACCEPTEDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
