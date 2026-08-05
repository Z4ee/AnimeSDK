#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__DISPLAYCLASS131_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11A24140)
#define MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__DISPLAYCLASS131_0__ONCLICKDESTORYBTN_B__0_OFFSET UNITYSDK_OFFSET(0x11A24150)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovWorkbenchDialogPageController___c__DisplayClass131_0_TypeDefinitionIndex = 41179;

	class UIZenkovWorkbenchDialogPageController___c__DisplayClass131_0 : public ::System::Object
	{
	public:
		::System::Action* onCloseAction; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__DISPLAYCLASS131_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickDestoryBtn_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__DISPLAYCLASS131_0__ONCLICKDESTORYBTN_B__0_OFFSET))(this);
		}
	};
}
