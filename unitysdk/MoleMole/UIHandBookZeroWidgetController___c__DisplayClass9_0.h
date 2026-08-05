#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_643;
class Class_2_BCB29D9ECCEF0E00;
namespace MoleMole { class UIHandBookZeroWidgetController; }

#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18422A30)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__DISPLAYCLASS9_0__ONUIINIT_B__0_OFFSET UNITYSDK_OFFSET(0x18422A40)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__DISPLAYCLASS9_0__ONUIINIT_B__1_OFFSET UNITYSDK_OFFSET(0x18422A70)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__DISPLAYCLASS9_0__ONUIINIT_B__2_OFFSET UNITYSDK_OFFSET(0x18422AA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookZeroWidgetController___c__DisplayClass9_0_TypeDefinitionIndex = 62180;

	class UIHandBookZeroWidgetController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::Class_2_BCB29D9ECCEF0E00* lockModel; // 0x10
		::MoleMole::UIHandBookZeroWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__DISPLAYCLASS9_0__ONUIINIT_B__0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__DISPLAYCLASS9_0__ONUIINIT_B__1_OFFSET))(this);
		}

		::System::Boolean _OnUIInit_b__2(::Class_2_208CC9941471731A_643* entry)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_643*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__DISPLAYCLASS9_0__ONUIINIT_B__2_OFFSET))(this, entry);
		}
	};
}
