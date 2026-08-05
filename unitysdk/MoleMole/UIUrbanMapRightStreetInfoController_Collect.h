#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapRightTastListWidget02WidgetController_2.h"

class Class_3_A6EB908668FE306E;
namespace MoleMole { class UIUrbanMapRightStreetInfoContext_Collect; }

#define MOLEMOLE_UIURBANMAPRIGHTSTREETINFOCONTROLLER_COLLECT__CTOR_OFFSET UNITYSDK_OFFSET(0x162AD350)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightStreetInfoController_Collect_TypeDefinitionIndex = 55386;

	class UIUrbanMapRightStreetInfoController_Collect : public ::MoleMole::UIUrbanMapRightTastListWidget02WidgetController_2<::Class_3_A6EB908668FE306E*, ::MoleMole::UIUrbanMapRightStreetInfoContext_Collect*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTSTREETINFOCONTROLLER_COLLECT__CTOR_OFFSET))(this);
		}
	};
}
