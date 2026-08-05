#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ADDNOTIFYMESSAGETOCLIENTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9BE360)

namespace Epic::OnlineServices::AntiCheatServer
{
	inline static constexpr unsigned int AddNotifyMessageToClientOptions_TypeDefinitionIndex = 36870;

	class AddNotifyMessageToClientOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ADDNOTIFYMESSAGETOCLIENTOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
