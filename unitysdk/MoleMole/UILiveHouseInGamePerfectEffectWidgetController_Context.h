#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UILIVEHOUSEINGAMEPERFECTEFFECTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15D603D0)

namespace MoleMole
{
	inline static constexpr unsigned int UILiveHouseInGamePerfectEffectWidgetController_Context_TypeDefinitionIndex = 53641;

	class UILiveHouseInGamePerfectEffectWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEINGAMEPERFECTEFFECTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
