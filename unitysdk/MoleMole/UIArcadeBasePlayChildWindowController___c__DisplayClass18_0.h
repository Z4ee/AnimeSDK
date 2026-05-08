#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_977;
namespace MoleMole { class UIArcadeBasePlayChildWindowController; }
namespace MoleMole::MiniGame { class MiniGameWorldBase; }
namespace System { class Action; }

#define MOLEMOLE_UIARCADEBASEPLAYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS18_0__CREATEMINIGAMEWORLD_B__0_OFFSET UNITYSDK_OFFSET(0x164566A0)
#define MOLEMOLE_UIARCADEBASEPLAYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS18_0__CREATEMINIGAMEWORLD_B__2_OFFSET UNITYSDK_OFFSET(0x16456710)
#define MOLEMOLE_UIARCADEBASEPLAYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS18_0__CREATEMINIGAMEWORLD_B__3_OFFSET UNITYSDK_OFFSET(0x16456870)
#define MOLEMOLE_UIARCADEBASEPLAYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS18_0__CREATEMINIGAMEWORLD_B__4_OFFSET UNITYSDK_OFFSET(0x16456900)
#define MOLEMOLE_UIARCADEBASEPLAYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16456690)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeBasePlayChildWindowController___c__DisplayClass18_0_TypeDefinitionIndex = 47947;

	class UIArcadeBasePlayChildWindowController___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::MoleMole::UIArcadeBasePlayChildWindowController* __4__this; // 0x10
		::MoleMole::MiniGame::MiniGameWorldBase* world; // 0x18
		::Class_2_208CC9941471731A_977* arcadeConfig; // 0x20
		::System::Action* __9__4; // 0x28
		::System::Action* __9__3; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEBASEPLAYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _CreateMiniGameWorld_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEBASEPLAYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS18_0__CREATEMINIGAMEWORLD_B__0_OFFSET))(this);
		}

		::System::Void _CreateMiniGameWorld_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEBASEPLAYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS18_0__CREATEMINIGAMEWORLD_B__2_OFFSET))(this);
		}

		::System::Void _CreateMiniGameWorld_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEBASEPLAYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS18_0__CREATEMINIGAMEWORLD_B__3_OFFSET))(this);
		}

		::System::Void _CreateMiniGameWorld_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEBASEPLAYCHILDWINDOWCONTROLLER___C__DISPLAYCLASS18_0__CREATEMINIGAMEWORLD_B__4_OFFSET))(this);
		}
	};
}
