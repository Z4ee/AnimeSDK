#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAutoBattlePVPTipsRowWidgetController; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIAUTOBATTLEPVPTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15ECAFE0)
#define MOLEMOLE_UIAUTOBATTLEPVPTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS3_0__SHOWTIP_B__0_OFFSET UNITYSDK_OFFSET(0x15ECAFF0)
#define MOLEMOLE_UIAUTOBATTLEPVPTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS3_0__SHOWTIP_B__1_OFFSET UNITYSDK_OFFSET(0x15ECB040)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePVPTipsRowWidgetController___c__DisplayClass3_0_TypeDefinitionIndex = 37940;

	class UIAutoBattlePVPTipsRowWidgetController___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::String* fadeOutAni; // 0x10
		::MoleMole::UIAutoBattlePVPTipsRowWidgetController* __4__this; // 0x18
		::System::Action* overHandle; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowTip_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS3_0__SHOWTIP_B__0_OFFSET))(this);
		}

		::System::Void _ShowTip_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS3_0__SHOWTIP_B__1_OFFSET))(this);
		}
	};
}
