#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRamenStoreWidgetController; }

#define MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11B9B0A0)
#define MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER___C__DISPLAYCLASS15_0__ONSHOWGETRAMENFINISHED_B__0_OFFSET UNITYSDK_OFFSET(0x11B9B0B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRamenStoreWidgetController___c__DisplayClass15_0_TypeDefinitionIndex = 47808;

	class UIRamenStoreWidgetController___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRamenStoreWidgetController* __4__this; // 0x10
		::System::Int32 id; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnShowGetRamenFinished_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER___C__DISPLAYCLASS15_0__ONSHOWGETRAMENFINISHED_B__0_OFFSET))(this);
		}
	};
}
