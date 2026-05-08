#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UILIVEHOUSEINGAMESINGLENOTE1WIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x148D6A90)

namespace MoleMole
{
	inline static constexpr unsigned int UILiveHouseInGameSingleNote1WidgetController_Context_TypeDefinitionIndex = 66492;

	class UILiveHouseInGameSingleNote1WidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEINGAMESINGLENOTE1WIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
