#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapRightTastListWidget02WidgetContext.h"

class Class_1_3A7D5BC012150C72;
template <typename T> class Class_1_BBE667D4A3124D9B;

#define MOLEMOLE_UIURBANMAPRIGHTSTREETINFOCONTEXT_QUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x15A77110)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightStreetInfoContext_Quest_TypeDefinitionIndex = 47604;

	class UIUrbanMapRightStreetInfoContext_Quest : public ::MoleMole::UIUrbanMapRightTastListWidget02WidgetContext
	{
	public:
		::Class_1_BBE667D4A3124D9B<::Class_1_3A7D5BC012150C72*>* QuestDatas; // 0x30
		::System::Int32 MapAreaId; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTSTREETINFOCONTEXT_QUEST__CTOR_OFFSET))(this);
		}
	};
}
