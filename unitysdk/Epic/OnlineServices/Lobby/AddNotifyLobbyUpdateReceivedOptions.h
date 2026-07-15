#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYLOBBYUPDATERECEIVEDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2B0CE0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int AddNotifyLobbyUpdateReceivedOptions_TypeDefinitionIndex = 43485;

	class AddNotifyLobbyUpdateReceivedOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ADDNOTIFYLOBBYUPDATERECEIVEDOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
