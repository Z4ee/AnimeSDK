#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS80_0__CTOR_OFFSET UNITYSDK_OFFSET(0x182B0990)
#define MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS80_0__ONCLICKQUITBATTLEBTN_B__0_OFFSET UNITYSDK_OFFSET(0x182B09A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseDialogPopWindowController___c__DisplayClass80_0_TypeDefinitionIndex = 59722;

	class UIInLevelPauseDialogPopWindowController___c__DisplayClass80_0 : public ::System::Object
	{
	public:
		::System::Action* quitBattleCallback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS80_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickQuitBattleBtn_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS80_0__ONCLICKQUITBATTLEBTN_B__0_OFFSET))(this);
		}
	};
}
