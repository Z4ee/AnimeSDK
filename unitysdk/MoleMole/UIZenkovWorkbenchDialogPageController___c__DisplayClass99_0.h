#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIZenkovWorkbenchDialogPageController; }

#define MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__DISPLAYCLASS99_0__CTOR_OFFSET UNITYSDK_OFFSET(0x162F25C0)
#define MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__DISPLAYCLASS99_0__SETUPLOCKDETAILROWS_B__0_OFFSET UNITYSDK_OFFSET(0x162F25D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovWorkbenchDialogPageController___c__DisplayClass99_0_TypeDefinitionIndex = 41182;

	class UIZenkovWorkbenchDialogPageController___c__DisplayClass99_0 : public ::System::Object
	{
	public:
		::MoleMole::UIZenkovWorkbenchDialogPageController* __4__this; // 0x10
		::System::Int32 capturedShopTabId; // 0x18
		::System::Int32 capturedBlueprintId; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__DISPLAYCLASS99_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetupLockDetailRows_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__DISPLAYCLASS99_0__SETUPLOCKDETAILROWS_B__0_OFFSET))(this);
		}
	};
}
