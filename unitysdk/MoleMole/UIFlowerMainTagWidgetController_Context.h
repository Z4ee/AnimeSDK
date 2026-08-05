#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16DACC30)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMainTagWidgetController_Context_TypeDefinitionIndex = 65528;

	class UIFlowerMainTagWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTAGWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
