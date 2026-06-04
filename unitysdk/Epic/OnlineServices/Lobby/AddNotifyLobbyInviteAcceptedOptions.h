#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYLOBBYINVITEACCEPTEDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA2DD9E0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int AddNotifyLobbyInviteAcceptedOptions_TypeDefinitionIndex = 42616;

	class AddNotifyLobbyInviteAcceptedOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYLOBBYINVITEACCEPTEDOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
