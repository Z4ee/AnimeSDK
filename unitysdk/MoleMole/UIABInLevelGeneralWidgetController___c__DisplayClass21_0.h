#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIABInLevelCampInfoWidgetController; }
namespace MoleMole { class UIABInLevelGeneralWidgetController; }

#define MOLEMOLE_UIABINLEVELGENERALWIDGETCONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19747510)
#define MOLEMOLE_UIABINLEVELGENERALWIDGETCONTROLLER___C__DISPLAYCLASS21_0__TOGGLECAMPINFO_B__1_OFFSET UNITYSDK_OFFSET(0x19747520)

namespace MoleMole
{
	inline static constexpr unsigned int UIABInLevelGeneralWidgetController___c__DisplayClass21_0_TypeDefinitionIndex = 68008;

	class UIABInLevelGeneralWidgetController___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::MoleMole::UIABInLevelGeneralWidgetController* __4__this; // 0x10
		::System::Boolean isAdd; // 0x18
		::System::Int32 campId; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELGENERALWIDGETCONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void _ToggleCampInfo_b__1(::MoleMole::UIABInLevelCampInfoWidgetController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIABInLevelCampInfoWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELGENERALWIDGETCONTROLLER___C__DISPLAYCLASS21_0__TOGGLECAMPINFO_B__1_OFFSET))(this, controller);
		}
	};
}
