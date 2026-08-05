#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InLevelOptionsCardSelectItemData.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelCardOptionsDialogPopWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIINLEVELCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1899F300)
#define MOLEMOLE_UIINLEVELCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__INITINLEVELCARDOBJ_B__0_OFFSET UNITYSDK_OFFSET(0x1899F310)
#define MOLEMOLE_UIINLEVELCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__INITINLEVELCARDOBJ_B__1_OFFSET UNITYSDK_OFFSET(0x1899F4C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelCardOptionsDialogPopWindowController___c__DisplayClass9_0_TypeDefinitionIndex = 86247;

	class UIInLevelCardOptionsDialogPopWindowController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::MoleMole::UIInLevelCardOptionsDialogPopWindowController* __4__this; // 0x10
		::System::Action* __9__1; // 0x18
		::System::Int32 index; // 0x20
		::MoleMole::InLevelOptionsCardSelectItemData item; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _InitInlevelCardObj_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__INITINLEVELCARDOBJ_B__0_OFFSET))(this);
		}

		::System::Void _InitInlevelCardObj_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__INITINLEVELCARDOBJ_B__1_OFFSET))(this);
		}
	};
}
