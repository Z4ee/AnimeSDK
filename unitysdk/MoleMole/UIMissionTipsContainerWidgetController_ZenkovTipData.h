#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMissionTipsContainerWidgetController_MissionTipData.h"
#include "unitysdk/MoleMole/UIMissionTipsContainerWidgetController_MissionTipType.h"

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER_ZENKOVTIPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19017050)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController_ZenkovTipData_TypeDefinitionIndex = 91201;

	class UIMissionTipsContainerWidgetController_ZenkovTipData : public ::MoleMole::UIMissionTipsContainerWidgetController_MissionTipData
	{
	public:
		::System::Void _ctor(::MoleMole::UIMissionTipsContainerWidgetController_MissionTipType tipType, ::System::Boolean fromResume, ::System::Int32 questID)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMissionTipsContainerWidgetController_MissionTipType, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER_ZENKOVTIPDATA__CTOR_OFFSET))(this, tipType, fromResume, questID);
		}
	};
}
