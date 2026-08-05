#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIHOLLOWINFODIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x190EC8D0)
#define MOLEMOLE_UIHOLLOWINFODIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS34_0__ONRESETBTNCLICKED_B__0_OFFSET UNITYSDK_OFFSET(0x190EC8E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowInfoDialogPopWindowController___c__DisplayClass34_0_TypeDefinitionIndex = 75519;

	class UIHollowInfoDialogPopWindowController___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::MoleMole::ESystemSettingType settingType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFODIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnResetBtnClicked_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFODIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS34_0__ONRESETBTNCLICKED_B__0_OFFSET))(this);
		}
	};
}
