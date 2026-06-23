#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowInfoDialogPopWindowController; }
namespace MoleMole { class UIHollowMainPageController; }

#define MOLEMOLE_UIHOLLOWINFODIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16AC01C0)
#define MOLEMOLE_UIHOLLOWINFODIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__SAVEDUNGEON_B__0_OFFSET UNITYSDK_OFFSET(0x16AC2DD0)
#define MOLEMOLE_UIHOLLOWINFODIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__SAVEDUNGEON_B__1_OFFSET UNITYSDK_OFFSET(0x16AC2E80)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowInfoDialogPopWindowController___c__DisplayClass14_0_TypeDefinitionIndex = 79134;

	class UIHollowInfoDialogPopWindowController___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowInfoDialogPopWindowController* __4__this; // 0x10
		::MoleMole::UIHollowMainPageController* mainPage; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFODIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _SaveDungeon_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFODIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__SAVEDUNGEON_B__0_OFFSET))(this);
		}

		::System::Void _SaveDungeon_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFODIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__SAVEDUNGEON_B__1_OFFSET))(this);
		}
	};
}
