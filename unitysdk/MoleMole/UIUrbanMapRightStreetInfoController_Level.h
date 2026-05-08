#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapRightTastListWidget02WidgetController_2.h"

class Class_3_F47C9D1272309848;
namespace MoleMole { class UIUrbanMapRightStreetInfoContext_Level; }

#define MOLEMOLE_UIURBANMAPRIGHTSTREETINFOCONTROLLER_LEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x137B53A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightStreetInfoController_Level_TypeDefinitionIndex = 48302;

	class UIUrbanMapRightStreetInfoController_Level : public ::MoleMole::UIUrbanMapRightTastListWidget02WidgetController_2<::Class_3_F47C9D1272309848*, ::MoleMole::UIUrbanMapRightStreetInfoContext_Level*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTSTREETINFOCONTROLLER_LEVEL__CTOR_OFFSET))(this);
		}
	};
}
