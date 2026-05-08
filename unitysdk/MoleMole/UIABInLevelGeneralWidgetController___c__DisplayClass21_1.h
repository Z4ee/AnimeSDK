#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIABInLevelCampInfoWidgetController; }
namespace MoleMole { class UIABInLevelGeneralWidgetController___c__DisplayClass21_0; }

#define MOLEMOLE_UIABINLEVELGENERALWIDGETCONTROLLER___C__DISPLAYCLASS21_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1586C100)
#define MOLEMOLE_UIABINLEVELGENERALWIDGETCONTROLLER___C__DISPLAYCLASS21_1__TOGGLECAMPINFO_B__0_OFFSET UNITYSDK_OFFSET(0x1586C110)

namespace MoleMole
{
	inline static constexpr unsigned int UIABInLevelGeneralWidgetController___c__DisplayClass21_1_TypeDefinitionIndex = 39095;

	class UIABInLevelGeneralWidgetController___c__DisplayClass21_1 : public ::System::Object
	{
	public:
		::MoleMole::UIABInLevelGeneralWidgetController___c__DisplayClass21_0* CS___8__locals1; // 0x10
		::System::Int32 idx; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELGENERALWIDGETCONTROLLER___C__DISPLAYCLASS21_1__CTOR_OFFSET))(this);
		}

		::System::Void _ToggleCampInfo_b__0(::MoleMole::UIABInLevelCampInfoWidgetController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIABInLevelCampInfoWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELGENERALWIDGETCONTROLLER___C__DISPLAYCLASS21_1__TOGGLECAMPINFO_B__0_OFFSET))(this, controller);
		}
	};
}
