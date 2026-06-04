#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYJOINLOBBYACCEPTEDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA2DD940)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int AddNotifyJoinLobbyAcceptedOptions_TypeDefinitionIndex = 42614;

	class AddNotifyJoinLobbyAcceptedOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYJOINLOBBYACCEPTEDOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
