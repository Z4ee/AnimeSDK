#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIArcadeBasePlayChildWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIARCADEBASEPLAYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0x196F5A60)
#define MOLEMOLE_UIARCADEBASEPLAYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS42_0__PLAYBLACKMASKANIM_B__0_OFFSET UNITYSDK_OFFSET(0x196F5A70)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeBasePlayChildWindowController___c__DisplayClass42_0_TypeDefinitionIndex = 47782;

	class UIArcadeBasePlayChildWindowController___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::MoleMole::UIArcadeBasePlayChildWindowController* __4__this; // 0x10
		::System::Action* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEBASEPLAYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayBlackMaskAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEBASEPLAYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS42_0__PLAYBLACKMASKANIM_B__0_OFFSET))(this);
		}
	};
}
