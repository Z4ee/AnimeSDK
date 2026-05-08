#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1027;
class Class_2_39E2D7E8A370D068;
namespace MoleMole { class UIHandBookZeroWidgetController; }

#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1688A010)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__DISPLAYCLASS9_0__ONUIINIT_B__0_OFFSET UNITYSDK_OFFSET(0x1688A020)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__DISPLAYCLASS9_0__ONUIINIT_B__1_OFFSET UNITYSDK_OFFSET(0x1688A050)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__DISPLAYCLASS9_0__ONUIINIT_B__2_OFFSET UNITYSDK_OFFSET(0x1688A080)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookZeroWidgetController___c__DisplayClass9_0_TypeDefinitionIndex = 38648;

	class UIHandBookZeroWidgetController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHandBookZeroWidgetController* __4__this; // 0x10
		::Class_2_39E2D7E8A370D068* lockModel; // 0x18

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

		::System::Boolean _OnUIInit_b__2(::Class_2_208CC9941471731A_1027* entry)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_1027*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__DISPLAYCLASS9_0__ONUIINIT_B__2_OFFSET))(this, entry);
		}
	};
}
