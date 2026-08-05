#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIABInLevelGeneralWidgetController___c__DisplayClass20_0; }
namespace MoleMole { class UIABInLevelItemInfoWidgetController; }

#define MOLEMOLE_UIABINLEVELGENERALWIDGETCONTROLLER___C__DISPLAYCLASS20_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18DF84C0)
#define MOLEMOLE_UIABINLEVELGENERALWIDGETCONTROLLER___C__DISPLAYCLASS20_1__TOGGLEITEMINFO_B__0_OFFSET UNITYSDK_OFFSET(0x18DF84D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIABInLevelGeneralWidgetController___c__DisplayClass20_1_TypeDefinitionIndex = 68003;

	class UIABInLevelGeneralWidgetController___c__DisplayClass20_1 : public ::System::Object
	{
	public:
		::MoleMole::UIABInLevelGeneralWidgetController___c__DisplayClass20_0* CS___8__locals1; // 0x10
		::System::Int32 idx; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELGENERALWIDGETCONTROLLER___C__DISPLAYCLASS20_1__CTOR_OFFSET))(this);
		}

		::System::Void _ToggleItemInfo_b__0(::MoleMole::UIABInLevelItemInfoWidgetController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIABInLevelItemInfoWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELGENERALWIDGETCONTROLLER___C__DISPLAYCLASS20_1__TOGGLEITEMINFO_B__0_OFFSET))(this, controller);
		}
	};
}
