#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsContainerWidgetController; }
namespace MoleMole { class UIMissionTipsContainerWidgetController_MissionTipData; }
namespace MoleMole { class UIMissionTipsRowMultiWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS179_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15164D90)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS179_0__PLAYSLIDERMISSIONFINISH_B__0_OFFSET UNITYSDK_OFFSET(0x15164DA0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS179_0__PLAYSLIDERMISSIONFINISH_B__1_OFFSET UNITYSDK_OFFSET(0x15164ED0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS179_0__PLAYSLIDERMISSIONFINISH_B__2_OFFSET UNITYSDK_OFFSET(0x15164F80)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS179_0__PLAYSLIDERMISSIONFINISH_B__3_OFFSET UNITYSDK_OFFSET(0x15165090)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass179_0_TypeDefinitionIndex = 91202;

	class UIMissionTipsContainerWidgetController___c__DisplayClass179_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::MoleMole::UIMissionTipsContainerWidgetController_MissionTipData* tipData; // 0x18
		::MoleMole::UIMissionTipsRowMultiWidgetController* questWidget; // 0x20
		::System::Action* __9__2; // 0x28
		::MoleMole::UIMissionTipsContainerWidgetController* __4__this; // 0x30
		::System::Action* __9__3; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS179_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlaySliderMissionFinish_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS179_0__PLAYSLIDERMISSIONFINISH_B__0_OFFSET))(this);
		}

		::System::Void _PlaySliderMissionFinish_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS179_0__PLAYSLIDERMISSIONFINISH_B__1_OFFSET))(this);
		}

		::System::Void _PlaySliderMissionFinish_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS179_0__PLAYSLIDERMISSIONFINISH_B__2_OFFSET))(this);
		}

		::System::Void _PlaySliderMissionFinish_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS179_0__PLAYSLIDERMISSIONFINISH_B__3_OFFSET))(this);
		}
	};
}
