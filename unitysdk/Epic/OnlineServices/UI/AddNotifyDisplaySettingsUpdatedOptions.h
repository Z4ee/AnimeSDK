#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_UI_ADDNOTIFYDISPLAYSETTINGSUPDATEDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x83CA4E0)

namespace Epic::OnlineServices::UI
{
	inline static constexpr unsigned int AddNotifyDisplaySettingsUpdatedOptions_TypeDefinitionIndex = 35301;

	class AddNotifyDisplaySettingsUpdatedOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ADDNOTIFYDISPLAYSETTINGSUPDATEDOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
