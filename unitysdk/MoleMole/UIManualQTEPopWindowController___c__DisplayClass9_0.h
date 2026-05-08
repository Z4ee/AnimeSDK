#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIManualQTEPopWindowController; }

#define MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x147BD2E0)
#define MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__ONCONFIRMBTNCLICKED_B__0_OFFSET UNITYSDK_OFFSET(0x147BD2F0)
#define MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__ONCONFIRMBTNCLICKED_B__1_OFFSET UNITYSDK_OFFSET(0x147BD4C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIManualQTEPopWindowController___c__DisplayClass9_0_TypeDefinitionIndex = 43130;

	class UIManualQTEPopWindowController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::MoleMole::UIManualQTEPopWindowController* __4__this; // 0x10
		::System::Int32 mode; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnConfirmBtnClicked_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__ONCONFIRMBTNCLICKED_B__0_OFFSET))(this);
		}

		::System::Void _OnConfirmBtnClicked_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__ONCONFIRMBTNCLICKED_B__1_OFFSET))(this);
		}
	};
}
