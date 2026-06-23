#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralTipsPopWindowController; }

#define MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS78_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16A15E10)
#define MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS78_0__ONSHOWTRAININGFORBIDDEN_B__0_OFFSET UNITYSDK_OFFSET(0x16A15E20)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseDialogPopWindowController___c__DisplayClass78_0_TypeDefinitionIndex = 86467;

	class UIInLevelPauseDialogPopWindowController___c__DisplayClass78_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralTipsPopWindowController* ctrl; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS78_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnShowTrainingForbidden_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS78_0__ONSHOWTRAININGFORBIDDEN_B__0_OFFSET))(this);
		}
	};
}
