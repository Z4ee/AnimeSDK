#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UILIVEHOUSEINGAMEROLLNOTEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x190086C0)

namespace MoleMole
{
	inline static constexpr unsigned int UILiveHouseInGameRollNoteWidgetController_Context_TypeDefinitionIndex = 77433;

	class UILiveHouseInGameRollNoteWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEINGAMEROLLNOTEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
