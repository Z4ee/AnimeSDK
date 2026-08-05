#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS81_0__CTOR_OFFSET UNITYSDK_OFFSET(0x182B0AC0)
#define MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS81_0__ONRESETBTNCLICKED_B__0_OFFSET UNITYSDK_OFFSET(0x182B0AD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseDialogPopWindowController___c__DisplayClass81_0_TypeDefinitionIndex = 59718;

	class UIInLevelPauseDialogPopWindowController___c__DisplayClass81_0 : public ::System::Object
	{
	public:
		::MoleMole::ESystemSettingType settingType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS81_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnResetBtnClicked_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS81_0__ONRESETBTNCLICKED_B__0_OFFSET))(this);
		}
	};
}
