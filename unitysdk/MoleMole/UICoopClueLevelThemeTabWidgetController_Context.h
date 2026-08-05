#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CA81EEAA0E1B3609_Enum_3_D9F6F92CA4C186D8.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UICOOPCLUELEVELTHEMETABWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x193769F0)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopClueLevelThemeTabWidgetController_Context_TypeDefinitionIndex = 81323;

	class UICoopClueLevelThemeTabWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_CA81EEAA0E1B3609_Enum_3_D9F6F92CA4C186D8 TargetTheme; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUELEVELTHEMETABWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
