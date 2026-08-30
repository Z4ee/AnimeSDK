#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/ScreenColorCopySettingsData_CopyTypes.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_SCREENCOLORCOPYSETTINGSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6EDCD0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ScreenColorCopySettingsData_TypeDefinitionIndex = 37170;

	class ScreenColorCopySettingsData : public ::System::Object
	{
	public:
		::RPG::CustomRP::ScreenColorCopySettingsData_CopyTypes ScreenColorCopyType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SCREENCOLORCOPYSETTINGSDATA__CTOR_OFFSET))(this);
		}
	};
}
