#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIINCOMENUMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x184B22D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIIncomeNumWidgetController_Context_TypeDefinitionIndex = 51845;

	class UIIncomeNumWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINCOMENUMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
