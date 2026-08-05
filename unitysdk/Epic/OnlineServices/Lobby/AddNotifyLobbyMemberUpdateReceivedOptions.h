#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYLOBBYMEMBERUPDATERECEIVEDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1A8CF0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int AddNotifyLobbyMemberUpdateReceivedOptions_TypeDefinitionIndex = 36260;

	class AddNotifyLobbyMemberUpdateReceivedOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYLOBBYMEMBERUPDATERECEIVEDOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
