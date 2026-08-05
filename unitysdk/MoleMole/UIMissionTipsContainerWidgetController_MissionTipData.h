#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMissionTipsContainerWidgetController_MissionTipType.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER_MISSIONTIPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x189CCBE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController_MissionTipData_TypeDefinitionIndex = 91203;

	class UIMissionTipsContainerWidgetController_MissionTipData : public ::System::Object
	{
	public:
		::System::Boolean IsFadeOut; // 0x10
		::System::Boolean EnableDelayClose; // 0x11
		::System::Boolean IsModified; // 0x12
		::System::Boolean IsFromResume; // 0x13
		::MoleMole::UIMissionTipsContainerWidgetController_MissionTipType TipType; // 0x14
		::System::Int32 QuestID; // 0x18
		::System::Int32 DelayTime; // 0x1C

		::System::Void _ctor(::MoleMole::UIMissionTipsContainerWidgetController_MissionTipType tipType, ::System::Boolean fromResume, ::System::Int32 questID)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMissionTipsContainerWidgetController_MissionTipType, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER_MISSIONTIPDATA__CTOR_OFFSET))(this, tipType, fromResume, questID);
		}
	};
}
