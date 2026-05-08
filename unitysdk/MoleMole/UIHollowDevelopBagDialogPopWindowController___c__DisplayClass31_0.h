#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIHollowDevelopBagDialogPopWindowController; }

#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15FA40F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowDevelopBagDialogPopWindowController___c__DisplayClass31_0_TypeDefinitionIndex = 68838;

	class UIHollowDevelopBagDialogPopWindowController___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowDevelopBagDialogPopWindowController* __4__this; // 0x10
		::MoleMole::MonoGamepadCustomList* gamepad; // 0x18
		::System::Int32 gamepadSelectedIndex; // 0x20
		::System::Int32 parentIndex; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
		}
	};
}
