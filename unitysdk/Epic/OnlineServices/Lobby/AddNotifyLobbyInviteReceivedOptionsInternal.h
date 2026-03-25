#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Lobby { class AddNotifyLobbyInviteReceivedOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYLOBBYINVITERECEIVEDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYLOBBYINVITERECEIVEDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x45FC0)
#define EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYLOBBYINVITERECEIVEDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x1900)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int AddNotifyLobbyInviteReceivedOptionsInternal_TypeDefinitionIndex = 35990;

	struct alignas(4) AddNotifyLobbyInviteReceivedOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::Lobby::AddNotifyLobbyInviteReceivedOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::AddNotifyLobbyInviteReceivedOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYLOBBYINVITERECEIVEDOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYLOBBYINVITERECEIVEDOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYLOBBYINVITERECEIVEDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
