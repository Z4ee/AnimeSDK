#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_469466241042B140;
class Class_1_782D7B640E2E81AE;
namespace MoleMole { class UIArcadeBasePlayChildWindowController; }

#define MOLEMOLE_UIARCADEBASEPLAYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x192058B0)
#define MOLEMOLE_UIARCADEBASEPLAYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS30_0__EXITMINIGAME_B__3_OFFSET UNITYSDK_OFFSET(0x192058C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeBasePlayChildWindowController___c__DisplayClass30_0_TypeDefinitionIndex = 47780;

	class UIArcadeBasePlayChildWindowController___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::Class_1_469466241042B140* miniGame; // 0x10
		::MoleMole::UIArcadeBasePlayChildWindowController* __4__this; // 0x18
		::Class_1_782D7B640E2E81AE* oldLogic; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEBASEPLAYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Void _ExitMiniGame_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEBASEPLAYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS30_0__EXITMINIGAME_B__3_OFFSET))(this);
		}
	};
}
