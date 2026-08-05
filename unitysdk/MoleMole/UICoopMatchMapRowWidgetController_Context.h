#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UICOOPMATCHMAPROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18569260)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopMatchMapRowWidgetController_Context_TypeDefinitionIndex = 60450;

	class UICoopMatchMapRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 QuestId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHMAPROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
