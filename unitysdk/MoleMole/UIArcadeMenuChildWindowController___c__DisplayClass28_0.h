#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIArcadeMenuChildWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIARCADEMENUCHILDWINDOWCONTROLLER___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0x192F00E0)
#define MOLEMOLE_UIARCADEMENUCHILDWINDOWCONTROLLER___C__DISPLAYCLASS28_0__PLAYROOTANIM_B__0_OFFSET UNITYSDK_OFFSET(0x192F00F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeMenuChildWindowController___c__DisplayClass28_0_TypeDefinitionIndex = 75174;

	class UIArcadeMenuChildWindowController___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::MoleMole::UIArcadeMenuChildWindowController* __4__this; // 0x10
		::System::Action* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMENUCHILDWINDOWCONTROLLER___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayRootAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMENUCHILDWINDOWCONTROLLER___C__DISPLAYCLASS28_0__PLAYROOTANIM_B__0_OFFSET))(this);
		}
	};
}
