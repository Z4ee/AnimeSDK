#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Lobby { class AddNotifyLobbyMemberUpdateReceivedOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYLOBBYMEMBERUPDATERECEIVEDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10F00)
#define EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYLOBBYMEMBERUPDATERECEIVEDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3C4E370)
#define EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYLOBBYMEMBERUPDATERECEIVEDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3BCBDF0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int AddNotifyLobbyMemberUpdateReceivedOptionsInternal_TypeDefinitionIndex = 45666;

	struct alignas(4) AddNotifyLobbyMemberUpdateReceivedOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::Lobby::AddNotifyLobbyMemberUpdateReceivedOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::AddNotifyLobbyMemberUpdateReceivedOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYLOBBYMEMBERUPDATERECEIVEDOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYLOBBYMEMBERUPDATERECEIVEDOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYLOBBYMEMBERUPDATERECEIVEDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
