#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsContainerWidgetController; }
namespace MoleMole { class UIMissionTipsContainerWidgetController_MissionTipData; }
namespace MoleMole { class UIMissionTipsRowMultiWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS137_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15DC9D60)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS137_0__PLAYSLIDERMISSIONFINISH_B__0_OFFSET UNITYSDK_OFFSET(0x15DC9D70)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS137_0__PLAYSLIDERMISSIONFINISH_B__1_OFFSET UNITYSDK_OFFSET(0x15DC9EA0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS137_0__PLAYSLIDERMISSIONFINISH_B__2_OFFSET UNITYSDK_OFFSET(0x15DC9FB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass137_0_TypeDefinitionIndex = 55049;

	class UIMissionTipsContainerWidgetController___c__DisplayClass137_0 : public ::System::Object
	{
	public:
		::System::Action* __9__2; // 0x10
		::System::Action* __9__1; // 0x18
		::MoleMole::UIMissionTipsContainerWidgetController_MissionTipData* tipData; // 0x20
		::MoleMole::UIMissionTipsContainerWidgetController* __4__this; // 0x28
		::MoleMole::UIMissionTipsRowMultiWidgetController* questWidget; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS137_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlaySliderMissionFinish_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS137_0__PLAYSLIDERMISSIONFINISH_B__0_OFFSET))(this);
		}

		::System::Void _PlaySliderMissionFinish_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS137_0__PLAYSLIDERMISSIONFINISH_B__1_OFFSET))(this);
		}

		::System::Void _PlaySliderMissionFinish_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS137_0__PLAYSLIDERMISSIONFINISH_B__2_OFFSET))(this);
		}
	};
}
