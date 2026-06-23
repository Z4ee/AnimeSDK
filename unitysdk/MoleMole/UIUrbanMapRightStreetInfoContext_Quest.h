#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapRightTastListWidget02WidgetContext.h"

class Class_1_3A7D5BC012150C72;
template <typename T> class Class_1_4BC87A1432B12C4C;

#define MOLEMOLE_UIURBANMAPRIGHTSTREETINFOCONTEXT_QUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x148F8620)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightStreetInfoContext_Quest_TypeDefinitionIndex = 63379;

	class UIUrbanMapRightStreetInfoContext_Quest : public ::MoleMole::UIUrbanMapRightTastListWidget02WidgetContext
	{
	public:
		::Class_1_4BC87A1432B12C4C<::Class_1_3A7D5BC012150C72*>* QuestDatas; // 0x30
		::System::Int32 MapAreaId; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTSTREETINFOCONTEXT_QUEST__CTOR_OFFSET))(this);
		}
	};
}
