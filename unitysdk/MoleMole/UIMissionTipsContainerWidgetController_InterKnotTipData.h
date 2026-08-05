#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMissionTipsContainerWidgetController_MissionTipData.h"
#include "unitysdk/MoleMole/UIMissionTipsContainerWidgetController_MissionTipType.h"

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER_INTERKNOTTIPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x179661A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController_InterKnotTipData_TypeDefinitionIndex = 91180;

	class UIMissionTipsContainerWidgetController_InterKnotTipData : public ::MoleMole::UIMissionTipsContainerWidgetController_MissionTipData
	{
	public:
		::System::Boolean NeedPlayFadeInAnim; // 0x20

		::System::Void _ctor(::MoleMole::UIMissionTipsContainerWidgetController_MissionTipType tipType, ::System::Boolean fromResume, ::System::Int32 questID)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMissionTipsContainerWidgetController_MissionTipType, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER_INTERKNOTTIPDATA__CTOR_OFFSET))(this, tipType, fromResume, questID);
		}
	};
}
