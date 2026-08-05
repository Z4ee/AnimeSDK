#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralTipsPopWindowController; }

#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1845E260)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER___C__DISPLAYCLASS20_0__SHOWREPAIRSUCCESS_B__0_OFFSET UNITYSDK_OFFSET(0x1845E270)

namespace MoleMole
{
	inline static constexpr unsigned int UIRepairPopWindowController___c__DisplayClass20_0_TypeDefinitionIndex = 44739;

	class UIRepairPopWindowController___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralTipsPopWindowController* tipsctrl; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowRepairSuccess_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER___C__DISPLAYCLASS20_0__SHOWREPAIRSUCCESS_B__0_OFFSET))(this);
		}
	};
}
