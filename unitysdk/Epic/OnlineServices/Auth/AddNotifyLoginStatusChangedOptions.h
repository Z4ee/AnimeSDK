#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_AUTH_ADDNOTIFYLOGINSTATUSCHANGEDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA1D20)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int AddNotifyLoginStatusChangedOptions_TypeDefinitionIndex = 36795;

	class AddNotifyLoginStatusChangedOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_ADDNOTIFYLOGINSTATUSCHANGEDOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
