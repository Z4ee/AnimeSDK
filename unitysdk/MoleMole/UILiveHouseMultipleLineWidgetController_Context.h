#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UILIVEHOUSEMULTIPLELINEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15C4BA80)

namespace MoleMole
{
	inline static constexpr unsigned int UILiveHouseMultipleLineWidgetController_Context_TypeDefinitionIndex = 47729;

	class UILiveHouseMultipleLineWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 LevelID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEMULTIPLELINEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
