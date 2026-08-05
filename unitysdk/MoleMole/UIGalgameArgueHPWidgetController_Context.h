#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIGALGAMEARGUEHPWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18AD1810)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgameArgueHPWidgetController_Context_TypeDefinitionIndex = 48909;

	class UIGalgameArgueHPWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean isLeftSide; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
