#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1431F0D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMainTagWidgetController_Context_TypeDefinitionIndex = 79119;

	class UIFlowerMainTagWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
