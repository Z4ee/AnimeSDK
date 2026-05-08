#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_31FA216B8128BBFD_5;

#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x152576E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHIADoubleWeekActivityRowWidgetController_Context_TypeDefinitionIndex = 64783;

	class UIHIADoubleWeekActivityRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_3_31FA216B8128BBFD_5* gridData; // 0x28
		::System::Int32 weeklyBingoGroupID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
