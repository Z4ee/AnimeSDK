#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ADDNOTIFYMESSAGETOPEEROPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDB9990)

namespace Epic::OnlineServices::AntiCheatClient
{
	inline static constexpr unsigned int AddNotifyMessageToPeerOptions_TypeDefinitionIndex = 44180;

	class AddNotifyMessageToPeerOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ADDNOTIFYMESSAGETOPEEROPTIONS__CTOR_OFFSET))(this);
		}
	};
}
