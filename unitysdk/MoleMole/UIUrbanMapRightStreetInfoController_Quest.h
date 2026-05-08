#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapRightTastListWidget02WidgetController_2.h"

class Class_3_B9390801E77EB038_1;
namespace MoleMole { class UIUrbanMapRightStreetInfoContext_Quest; }

#define MOLEMOLE_UIURBANMAPRIGHTSTREETINFOCONTROLLER_QUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x15530DA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightStreetInfoController_Quest_TypeDefinitionIndex = 58312;

	class UIUrbanMapRightStreetInfoController_Quest : public ::MoleMole::UIUrbanMapRightTastListWidget02WidgetController_2<::Class_3_B9390801E77EB038_1*, ::MoleMole::UIUrbanMapRightStreetInfoContext_Quest*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTSTREETINFOCONTROLLER_QUEST__CTOR_OFFSET))(this);
		}
	};
}
