#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Lobby { class AddNotifyLobbyInviteAcceptedOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYLOBBYINVITEACCEPTEDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYLOBBYINVITEACCEPTEDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x45F50)
#define EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYLOBBYINVITEACCEPTEDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x1900)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int AddNotifyLobbyInviteAcceptedOptionsInternal_TypeDefinitionIndex = 35988;

	struct alignas(4) AddNotifyLobbyInviteAcceptedOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::Lobby::AddNotifyLobbyInviteAcceptedOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::AddNotifyLobbyInviteAcceptedOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYLOBBYINVITEACCEPTEDOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYLOBBYINVITEACCEPTEDOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYLOBBYINVITEACCEPTEDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
