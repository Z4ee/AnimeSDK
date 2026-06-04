#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ADDNOTIFYMESSAGETOSERVEROPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA0BF5B0)

namespace Epic::OnlineServices::AntiCheatClient
{
	inline static constexpr unsigned int AddNotifyMessageToServerOptions_TypeDefinitionIndex = 43321;

	class AddNotifyMessageToServerOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ADDNOTIFYMESSAGETOSERVEROPTIONS__CTOR_OFFSET))(this);
		}
	};
}
