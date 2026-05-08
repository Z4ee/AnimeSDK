#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AE39A46B421CC812_1.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIPlayerSkinSwitchWidgetController; }

#define MOLEMOLE_UIPLAYERSKINSWITCHWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12E60490)
#define MOLEMOLE_UIPLAYERSKINSWITCHWIDGETCONTROLLER___C__DISPLAYCLASS11_0__SWITCHTOSKIN_B__0_OFFSET UNITYSDK_OFFSET(0x12E604A0)
#define MOLEMOLE_UIPLAYERSKINSWITCHWIDGETCONTROLLER___C__DISPLAYCLASS11_0__SWITCHTOSKIN_B__1_OFFSET UNITYSDK_OFFSET(0x12E604B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerSkinSwitchWidgetController___c__DisplayClass11_0_TypeDefinitionIndex = 60439;

	class UIPlayerSkinSwitchWidgetController___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::MoleMole::UIPlayerSkinSwitchWidgetController* __4__this; // 0x10
		::System::Int32 avatarID; // 0x18
		::System::Int32 skinID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERSKINSWITCHWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SwitchToSkin_b__0(::System::Int32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERSKINSWITCHWIDGETCONTROLLER___C__DISPLAYCLASS11_0__SWITCHTOSKIN_B__0_OFFSET))(this, x);
		}

		::System::Boolean _SwitchToSkin_b__1(::Struct_2_AE39A46B421CC812_1 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_AE39A46B421CC812_1))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERSKINSWITCHWIDGETCONTROLLER___C__DISPLAYCLASS11_0__SWITCHTOSKIN_B__1_OFFSET))(this, x);
		}
	};
}
