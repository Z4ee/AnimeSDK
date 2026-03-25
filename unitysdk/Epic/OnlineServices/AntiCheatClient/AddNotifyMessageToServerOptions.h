#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ADDNOTIFYMESSAGETOSERVEROPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x837CE80)

namespace Epic::OnlineServices::AntiCheatClient
{
	inline static constexpr unsigned int AddNotifyMessageToServerOptions_TypeDefinitionIndex = 36692;

	class AddNotifyMessageToServerOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ADDNOTIFYMESSAGETOSERVEROPTIONS__CTOR_OFFSET))(this);
		}
	};
}
