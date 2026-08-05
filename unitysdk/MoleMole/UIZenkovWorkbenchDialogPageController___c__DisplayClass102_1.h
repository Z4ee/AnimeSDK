#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIZenkovReplenishDialogPopWindowController; }
namespace MoleMole { class UIZenkovWorkbenchDialogPageController___c__DisplayClass102_0; }

#define MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__DISPLAYCLASS102_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12E7FC50)
#define MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__DISPLAYCLASS102_1__ONCLICKCRAFTBTN_B__0_OFFSET UNITYSDK_OFFSET(0x12E7FC60)
#define MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__DISPLAYCLASS102_1__ONCLICKCRAFTBTN_B__1_OFFSET UNITYSDK_OFFSET(0x12E7FCB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovWorkbenchDialogPageController___c__DisplayClass102_1_TypeDefinitionIndex = 41175;

	class UIZenkovWorkbenchDialogPageController___c__DisplayClass102_1 : public ::System::Object
	{
	public:
		::MoleMole::UIZenkovWorkbenchDialogPageController___c__DisplayClass102_0* CS___8__locals1; // 0x10
		::MoleMole::UIZenkovReplenishDialogPopWindowController* replenishDialog; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__DISPLAYCLASS102_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickCraftBtn_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__DISPLAYCLASS102_1__ONCLICKCRAFTBTN_B__0_OFFSET))(this);
		}

		::System::Void _OnClickCraftBtn_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__DISPLAYCLASS102_1__ONCLICKCRAFTBTN_B__1_OFFSET))(this);
		}
	};
}
