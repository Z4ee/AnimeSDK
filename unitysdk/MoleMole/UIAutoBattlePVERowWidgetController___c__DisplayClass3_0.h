#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoGamepadScrollView; }

#define MOLEMOLE_UIAUTOBATTLEPVEROWWIDGETCONTROLLER___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18E2E820)
#define MOLEMOLE_UIAUTOBATTLEPVEROWWIDGETCONTROLLER___C__DISPLAYCLASS3_0__ONUIINIT_B__0_OFFSET UNITYSDK_OFFSET(0x18E2E830)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePVERowWidgetController___c__DisplayClass3_0_TypeDefinitionIndex = 44415;

	class UIAutoBattlePVERowWidgetController___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::MoleMole::MonoGamepadScrollView* gamepadScrollView; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEROWWIDGETCONTROLLER___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__0(::System::Boolean b)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEROWWIDGETCONTROLLER___C__DISPLAYCLASS3_0__ONUIINIT_B__0_OFFSET))(this, b);
		}
	};
}
