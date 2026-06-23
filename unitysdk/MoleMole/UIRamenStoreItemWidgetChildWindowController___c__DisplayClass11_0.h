#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRamenStoreItemWidgetChildWindowController; }

#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15C0B3C0)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS11_0__PLAYSELECTFADE_B__0_OFFSET UNITYSDK_OFFSET(0x15C0B400)
#define MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS11_0__PLAYSELECTFADE_B__1_OFFSET UNITYSDK_OFFSET(0x15C0B3D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRamenStoreItemWidgetChildWindowController___c__DisplayClass11_0_TypeDefinitionIndex = 85222;

	class UIRamenStoreItemWidgetChildWindowController___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRamenStoreItemWidgetChildWindowController* __4__this; // 0x10
		::System::Boolean fadeIn; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlaySelectFade_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS11_0__PLAYSELECTFADE_B__1_OFFSET))(this);
		}

		::System::Void _PlaySelectFade_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREITEMWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS11_0__PLAYSELECTFADE_B__0_OFFSET))(this);
		}
	};
}
