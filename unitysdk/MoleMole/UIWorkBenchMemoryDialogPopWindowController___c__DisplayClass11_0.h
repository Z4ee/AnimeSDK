#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_410;
namespace MoleMole { class UIWorkBenchMemoryDialogPopWindowController_Context; }
namespace System { class Action; }

#define MOLEMOLE_UIWORKBENCHMEMORYDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE85B1A0)
#define MOLEMOLE_UIWORKBENCHMEMORYDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__SELECTEDMEMORY_B__0_OFFSET UNITYSDK_OFFSET(0xE85B1B0)
#define MOLEMOLE_UIWORKBENCHMEMORYDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__SELECTEDMEMORY_B__1_OFFSET UNITYSDK_OFFSET(0xE85B340)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchMemoryDialogPopWindowController___c__DisplayClass11_0_TypeDefinitionIndex = 42837;

	class UIWorkBenchMemoryDialogPopWindowController___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::MoleMole::UIWorkBenchMemoryDialogPopWindowController_Context* context; // 0x10
		::Class_2_208CC9941471731A_410* templateData; // 0x18
		::System::Action* __9__1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMEMORYDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _SelectedMemory_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMEMORYDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__SELECTEDMEMORY_B__0_OFFSET))(this);
		}

		::System::Void _SelectedMemory_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMEMORYDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__SELECTEDMEMORY_B__1_OFFSET))(this);
		}
	};
}
