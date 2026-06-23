#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGrandMarcelAdventureTipsRowWidgetController; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIGRANDMARCELADVENTURETIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x169D0500)
#define MOLEMOLE_UIGRANDMARCELADVENTURETIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS3_0__SHOWTIP_B__0_OFFSET UNITYSDK_OFFSET(0x169D0510)
#define MOLEMOLE_UIGRANDMARCELADVENTURETIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS3_0__SHOWTIP_B__1_OFFSET UNITYSDK_OFFSET(0x169D0560)

namespace MoleMole
{
	inline static constexpr unsigned int UIGrandMarcelAdventureTipsRowWidgetController___c__DisplayClass3_0_TypeDefinitionIndex = 83881;

	class UIGrandMarcelAdventureTipsRowWidgetController___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Action* overHandle; // 0x10
		::System::String* fadeOutAni; // 0x18
		::MoleMole::UIGrandMarcelAdventureTipsRowWidgetController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTURETIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowTip_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTURETIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS3_0__SHOWTIP_B__0_OFFSET))(this);
		}

		::System::Void _ShowTip_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTURETIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS3_0__SHOWTIP_B__1_OFFSET))(this);
		}
	};
}
