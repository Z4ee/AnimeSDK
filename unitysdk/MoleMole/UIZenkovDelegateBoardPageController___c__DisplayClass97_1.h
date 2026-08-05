#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIZenkovDelegateBoardPageController___c__DisplayClass97_0; }

#define MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS97_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10AF67A0)
#define MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS97_1__FOCUSLEFTPANELGAMEPADMODULE_G__DOSELECTONREADY_2_OFFSET UNITYSDK_OFFSET(0x10AF67B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovDelegateBoardPageController___c__DisplayClass97_1_TypeDefinitionIndex = 88482;

	class UIZenkovDelegateBoardPageController___c__DisplayClass97_1 : public ::System::Object
	{
	public:
		::MoleMole::UIZenkovDelegateBoardPageController___c__DisplayClass97_0* CS___8__locals1; // 0x10
		::MoleMole::MonoGamepadModule* rightContent; // 0x18
		::System::Boolean handled; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS97_1__CTOR_OFFSET))(this);
		}

		::System::Void _FocusLeftPanelGamepadModule_g__DoSelectOnReady_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS97_1__FOCUSLEFTPANELGAMEPADMODULE_G__DOSELECTONREADY_2_OFFSET))(this);
		}
	};
}
