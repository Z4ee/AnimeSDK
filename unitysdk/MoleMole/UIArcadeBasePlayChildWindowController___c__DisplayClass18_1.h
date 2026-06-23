#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIArcadeBasePlayChildWindowController___c__DisplayClass18_0; }

#define MOLEMOLE_UIARCADEBASEPLAYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS18_1__CREATEMINIGAMEWORLD_B__1_OFFSET UNITYSDK_OFFSET(0x18A4E290)
#define MOLEMOLE_UIARCADEBASEPLAYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS18_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18A4E280)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeBasePlayChildWindowController___c__DisplayClass18_1_TypeDefinitionIndex = 61501;

	class UIArcadeBasePlayChildWindowController___c__DisplayClass18_1 : public ::System::Object
	{
	public:
		::MoleMole::UIArcadeBasePlayChildWindowController___c__DisplayClass18_0* CS___8__locals1; // 0x10
		::System::Boolean isSinglePlayerMultipleMode; // 0x18
		::System::Boolean isMultiPlayer; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEBASEPLAYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS18_1__CTOR_OFFSET))(this);
		}

		::System::Void _CreateMiniGameWorld_b__1(::System::Boolean isContinue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEBASEPLAYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS18_1__CREATEMINIGAMEWORLD_B__1_OFFSET))(this, isContinue);
		}
	};
}
