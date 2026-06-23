#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYLOBBYINVITERECEIVEDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE71E40)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int AddNotifyLobbyInviteReceivedOptions_TypeDefinitionIndex = 35597;

	class AddNotifyLobbyInviteReceivedOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYLOBBYINVITERECEIVEDOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
