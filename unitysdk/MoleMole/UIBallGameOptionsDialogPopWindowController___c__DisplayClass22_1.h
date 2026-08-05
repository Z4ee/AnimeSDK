#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A725E4562D03EA4E_5.h"
#include "unitysdk/System/Object.h"

class Class_2_79AE422BA06F6D26_177;
namespace MoleMole { class UIBallGameOptionsDialogPopWindowController___c__DisplayClass22_0; }

#define MOLEMOLE_UIBALLGAMEOPTIONSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS22_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBDCDE0)
#define MOLEMOLE_UIBALLGAMEOPTIONSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS22_1__INITEVENT_B__2_OFFSET UNITYSDK_OFFSET(0x1EBDCDF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameOptionsDialogPopWindowController___c__DisplayClass22_1_TypeDefinitionIndex = 93222;

	class UIBallGameOptionsDialogPopWindowController___c__DisplayClass22_1 : public ::System::Object
	{
	public:
		::MoleMole::UIBallGameOptionsDialogPopWindowController___c__DisplayClass22_0* CS___8__locals1; // 0x10
		::Struct_2_A725E4562D03EA4E_5 option; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEOPTIONSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS22_1__CTOR_OFFSET))(this);
		}

		::System::Void _InitEvent_b__2(::Class_2_79AE422BA06F6D26_177* _view, ::System::Int32 newBulletID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_79AE422BA06F6D26_177*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEOPTIONSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS22_1__INITEVENT_B__2_OFFSET))(this, _view, newBulletID);
		}
	};
}
