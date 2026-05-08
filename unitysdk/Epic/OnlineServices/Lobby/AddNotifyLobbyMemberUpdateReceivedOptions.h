#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYLOBBYMEMBERUPDATERECEIVEDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA79E20)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int AddNotifyLobbyMemberUpdateReceivedOptions_TypeDefinitionIndex = 34038;

	class AddNotifyLobbyMemberUpdateReceivedOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYLOBBYMEMBERUPDATERECEIVEDOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
