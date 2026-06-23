#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBallGameMainPageController; }
namespace MoleMole { class UIInLevelPauseDialogPopWindowController; }

#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0A9280)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER___C__DISPLAYCLASS31_0__ONPAUSE_B__1_OFFSET UNITYSDK_OFFSET(0x1E0A9850)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER___C__DISPLAYCLASS31_0__ONPAUSE_B__2_OFFSET UNITYSDK_OFFSET(0x1E0A9880)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER___C__DISPLAYCLASS31_0__ONPAUSE_B__3_OFFSET UNITYSDK_OFFSET(0x1E0A9290)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER___C__DISPLAYCLASS31_0__ONPAUSE_B__4_OFFSET UNITYSDK_OFFSET(0x1E0A9540)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameMainPageController___c__DisplayClass31_0_TypeDefinitionIndex = 89378;

	class UIBallGameMainPageController___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBallGameMainPageController* __4__this; // 0x10
		::MoleMole::UIInLevelPauseDialogPopWindowController* popWindowController; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnPause_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER___C__DISPLAYCLASS31_0__ONPAUSE_B__3_OFFSET))(this);
		}

		::System::Void _OnPause_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER___C__DISPLAYCLASS31_0__ONPAUSE_B__4_OFFSET))(this);
		}

		::System::Void _OnPause_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER___C__DISPLAYCLASS31_0__ONPAUSE_B__1_OFFSET))(this);
		}

		::System::Void _OnPause_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER___C__DISPLAYCLASS31_0__ONPAUSE_B__2_OFFSET))(this);
		}
	};
}
