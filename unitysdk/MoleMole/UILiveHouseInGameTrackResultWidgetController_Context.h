#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UILIVEHOUSEINGAMETRACKRESULTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14B89230)

namespace MoleMole
{
	inline static constexpr unsigned int UILiveHouseInGameTrackResultWidgetController_Context_TypeDefinitionIndex = 72890;

	class UILiveHouseInGameTrackResultWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 Index; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEINGAMETRACKRESULTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
