#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ADDNOTIFYPEERACTIONREQUIREDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x837CF20)

namespace Epic::OnlineServices::AntiCheatClient
{
	inline static constexpr unsigned int AddNotifyPeerActionRequiredOptions_TypeDefinitionIndex = 36694;

	class AddNotifyPeerActionRequiredOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ADDNOTIFYPEERACTIONREQUIREDOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
