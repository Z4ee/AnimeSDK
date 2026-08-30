#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYLOBBYUPDATERECEIVEDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xB380AD0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int AddNotifyLobbyUpdateReceivedOptions_TypeDefinitionIndex = 45667;

	class AddNotifyLobbyUpdateReceivedOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYLOBBYUPDATERECEIVEDOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
