#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMissionTipsContainerWidgetController_MissionTipData.h"
#include "unitysdk/MoleMole/UIMissionTipsContainerWidgetController_MissionTipType.h"

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER_HDDQUESTHANGTIPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15D5AA00)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController_HDDQuestHangTipData_TypeDefinitionIndex = 55060;

	class UIMissionTipsContainerWidgetController_HDDQuestHangTipData : public ::MoleMole::UIMissionTipsContainerWidgetController_MissionTipData
	{
	public:
		::System::Int32 HangQuestID; // 0x20
		::System::Boolean NeedPlayFadeInAnim; // 0x24

		::System::Void _ctor(::MoleMole::UIMissionTipsContainerWidgetController_MissionTipType tipType, ::System::Boolean fromResume, ::System::Int32 questID)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMissionTipsContainerWidgetController_MissionTipType, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER_HDDQUESTHANGTIPDATA__CTOR_OFFSET))(this, tipType, fromResume, questID);
		}
	};
}
