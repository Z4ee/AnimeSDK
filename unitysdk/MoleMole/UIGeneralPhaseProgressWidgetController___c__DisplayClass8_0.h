#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralPhaseProgressWidgetController; }

#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18AE2D40)
#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__PROGRESSBARANIM_B__0_OFFSET UNITYSDK_OFFSET(0x18AE2D50)
#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__PROGRESSBARANIM_B__1_OFFSET UNITYSDK_OFFSET(0x18AE2E30)
#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__PROGRESSBARANIM_B__2_OFFSET UNITYSDK_OFFSET(0x18AE30D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralPhaseProgressWidgetController___c__DisplayClass8_0_TypeDefinitionIndex = 70530;

	class UIGeneralPhaseProgressWidgetController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralPhaseProgressWidgetController* __4__this; // 0x10
		::System::Single tar; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Single _ProgressBarAnim_b__0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__PROGRESSBARANIM_B__0_OFFSET))(this);
		}

		::System::Void _ProgressBarAnim_b__1(::System::Single val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__PROGRESSBARANIM_B__1_OFFSET))(this, val);
		}

		::System::Void _ProgressBarAnim_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__PROGRESSBARANIM_B__2_OFFSET))(this);
		}
	};
}
