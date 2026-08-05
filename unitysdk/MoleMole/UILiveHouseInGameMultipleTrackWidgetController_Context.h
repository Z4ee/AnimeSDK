#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UILIVEHOUSEINGAMEMULTIPLETRACKWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x179E4200)

namespace MoleMole
{
	inline static constexpr unsigned int UILiveHouseInGameMultipleTrackWidgetController_Context_TypeDefinitionIndex = 49420;

	class UILiveHouseInGameMultipleTrackWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 Index; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEINGAMEMULTIPLETRACKWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
