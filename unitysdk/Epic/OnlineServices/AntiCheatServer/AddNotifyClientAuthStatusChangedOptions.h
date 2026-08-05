#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ADDNOTIFYCLIENTAUTHSTATUSCHANGEDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E519C40)

namespace Epic::OnlineServices::AntiCheatServer
{
	inline static constexpr unsigned int AddNotifyClientAuthStatusChangedOptions_TypeDefinitionIndex = 36868;

	class AddNotifyClientAuthStatusChangedOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ADDNOTIFYCLIENTAUTHSTATUSCHANGEDOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
