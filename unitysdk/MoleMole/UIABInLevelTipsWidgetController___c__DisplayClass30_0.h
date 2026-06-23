#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIABInLevelTipsWidgetController; }

#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15E38E00)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS30_0__SHOWTIPS_B__0_OFFSET UNITYSDK_OFFSET(0x15E38E10)

namespace MoleMole
{
	inline static constexpr unsigned int UIABInLevelTipsWidgetController___c__DisplayClass30_0_TypeDefinitionIndex = 49124;

	class UIABInLevelTipsWidgetController___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::MoleMole::UIABInLevelTipsWidgetController* __4__this; // 0x10
		::System::Boolean isPersistent; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowTips_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS30_0__SHOWTIPS_B__0_OFFSET))(this);
		}
	};
}
