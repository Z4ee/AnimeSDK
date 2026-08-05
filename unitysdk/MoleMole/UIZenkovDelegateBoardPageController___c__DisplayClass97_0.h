#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIZenkovDelegateBoardPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS97_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10AF6410)
#define MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS97_0__FOCUSLEFTPANELGAMEPADMODULE_B__0_OFFSET UNITYSDK_OFFSET(0x10AF6420)
#define MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS97_0__FOCUSLEFTPANELGAMEPADMODULE_B__1_OFFSET UNITYSDK_OFFSET(0x10AF64B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovDelegateBoardPageController___c__DisplayClass97_0_TypeDefinitionIndex = 88477;

	class UIZenkovDelegateBoardPageController___c__DisplayClass97_0 : public ::System::Object
	{
	public:
		::MoleMole::UIZenkovDelegateBoardPageController* __4__this; // 0x10
		::System::Action* __9__1; // 0x18
		::System::Int32 leftSelectIndex; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS97_0__CTOR_OFFSET))(this);
		}

		::System::Void _FocusLeftPanelGamepadModule_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS97_0__FOCUSLEFTPANELGAMEPADMODULE_B__0_OFFSET))(this);
		}

		::System::Void _FocusLeftPanelGamepadModule_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS97_0__FOCUSLEFTPANELGAMEPADMODULE_B__1_OFFSET))(this);
		}
	};
}
