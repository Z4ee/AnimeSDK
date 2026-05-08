#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_9F8B7B204F0D8E1D_13;

#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYREWARDLISTROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x149EEBD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHIADoubleWeekActivityRewardListRowWidgetController_Context_TypeDefinitionIndex = 82287;

	class UIHIADoubleWeekActivityRewardListRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_3_9F8B7B204F0D8E1D_13* reward; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYREWARDLISTROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
