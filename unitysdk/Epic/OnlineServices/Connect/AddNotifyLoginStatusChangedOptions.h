#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_CONNECT_ADDNOTIFYLOGINSTATUSCHANGEDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4B9940)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int AddNotifyLoginStatusChangedOptions_TypeDefinitionIndex = 36039;

	class AddNotifyLoginStatusChangedOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_ADDNOTIFYLOGINSTATUSCHANGEDOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
