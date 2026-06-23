#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYREWARDLISTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15A85BB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHIADoubleWeekActivityRewardListDialogPopWindowController_Context_TypeDefinitionIndex = 84660;

	class UIHIADoubleWeekActivityRewardListDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 weeklyBingoGroupID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYREWARDLISTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
