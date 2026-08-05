#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIABRewardItemWidgetController; }
namespace MoleMole { class UIAutoBattleRewardPopWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIABREWARDITEMWIDGETCONTROLLER___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x197A5990)
#define MOLEMOLE_UIABREWARDITEMWIDGETCONTROLLER___C__DISPLAYCLASS3_0__ONUIINIT_B__0_OFFSET UNITYSDK_OFFSET(0x197A59A0)
#define MOLEMOLE_UIABREWARDITEMWIDGETCONTROLLER___C__DISPLAYCLASS3_0__ONUIINIT_B__1_OFFSET UNITYSDK_OFFSET(0x197A5A30)

namespace MoleMole
{
	inline static constexpr unsigned int UIABRewardItemWidgetController___c__DisplayClass3_0_TypeDefinitionIndex = 63183;

	class UIABRewardItemWidgetController___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::MoleMole::UIABRewardItemWidgetController* __4__this; // 0x10
		::System::Action* __9__1; // 0x18
		::MoleMole::UIAutoBattleRewardPopWindowController* parent; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABREWARDITEMWIDGETCONTROLLER___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABREWARDITEMWIDGETCONTROLLER___C__DISPLAYCLASS3_0__ONUIINIT_B__0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABREWARDITEMWIDGETCONTROLLER___C__DISPLAYCLASS3_0__ONUIINIT_B__1_OFFSET))(this);
		}
	};
}
