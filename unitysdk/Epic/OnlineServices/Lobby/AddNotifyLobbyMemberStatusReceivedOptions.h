#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYLOBBYMEMBERSTATUSRECEIVEDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADE2480)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int AddNotifyLobbyMemberStatusReceivedOptions_TypeDefinitionIndex = 35599;

	class AddNotifyLobbyMemberStatusReceivedOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYLOBBYMEMBERSTATUSRECEIVEDOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
