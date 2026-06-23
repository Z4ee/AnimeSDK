#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ADDNOTIFYPEERAUTHSTATUSCHANGEDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C711050)

namespace Epic::OnlineServices::AntiCheatClient
{
	inline static constexpr unsigned int AddNotifyPeerAuthStatusChangedOptions_TypeDefinitionIndex = 36304;

	class AddNotifyPeerAuthStatusChangedOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ADDNOTIFYPEERAUTHSTATUSCHANGEDOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
