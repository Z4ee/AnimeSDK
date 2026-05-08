#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class TweenFov; }
namespace MoleMole { class UIGeneral3DModelDialogPopWindowController; }

#define MOLEMOLE_UIGENERAL3DMODELDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS75_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14FAC650)
#define MOLEMOLE_UIGENERAL3DMODELDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS75_0__ONCLICKRESET_B__0_OFFSET UNITYSDK_OFFSET(0x14FAC660)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneral3DModelDialogPopWindowController___c__DisplayClass75_0_TypeDefinitionIndex = 64392;

	class UIGeneral3DModelDialogPopWindowController___c__DisplayClass75_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneral3DModelDialogPopWindowController* __4__this; // 0x10
		::MoleMole::TweenFov* tweenFov; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERAL3DMODELDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS75_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickReset_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERAL3DMODELDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS75_0__ONCLICKRESET_B__0_OFFSET))(this);
		}
	};
}
