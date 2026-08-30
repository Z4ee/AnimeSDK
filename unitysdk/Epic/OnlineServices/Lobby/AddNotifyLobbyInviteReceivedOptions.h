#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYLOBBYINVITERECEIVEDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFEB6A0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int AddNotifyLobbyInviteReceivedOptions_TypeDefinitionIndex = 45661;

	class AddNotifyLobbyInviteReceivedOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYLOBBYINVITERECEIVEDOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
