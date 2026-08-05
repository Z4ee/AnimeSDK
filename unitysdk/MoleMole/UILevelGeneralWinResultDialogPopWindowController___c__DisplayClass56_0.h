#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoLevelResultPageConfig; }

#define MOLEMOLE_UILEVELGENERALWINRESULTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS56_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18312A30)
#define MOLEMOLE_UILEVELGENERALWINRESULTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS56_0___ONANIMEVENT_B__2_OFFSET UNITYSDK_OFFSET(0x18312A40)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelGeneralWinResultDialogPopWindowController___c__DisplayClass56_0_TypeDefinitionIndex = 60685;

	class UILevelGeneralWinResultDialogPopWindowController___c__DisplayClass56_0 : public ::System::Object
	{
	public:
		::MoleMole::MonoLevelResultPageConfig* config; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELGENERALWINRESULTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS56_0__CTOR_OFFSET))(this);
		}

		::System::Void __OnAnimEvent_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELGENERALWINRESULTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS56_0___ONANIMEVENT_B__2_OFFSET))(this);
		}
	};
}
