#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIRABINLEVELQUESTTIPSWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1845B5A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABInLevelQuestTipsWidgetController_Context_TypeDefinitionIndex = 70852;

	class UIRABInLevelQuestTipsWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 QuestID; // 0x28
		::System::Boolean IsSuccess; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELQUESTTIPSWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
