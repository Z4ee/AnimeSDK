#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16F52910)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMain_TopWidgetController_Context_TypeDefinitionIndex = 60842;

	class UIFlowerMain_TopWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_TOPWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
