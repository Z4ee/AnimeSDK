#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapRightTastListWidget02WidgetController_2.h"

class Class_3_468AACA7FBAA98D9;
namespace MoleMole { class UIUrbanMapRightStreetInfoContext_Collect; }

#define MOLEMOLE_UIURBANMAPRIGHTSTREETINFOCONTROLLER_COLLECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1341ABE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightStreetInfoController_Collect_TypeDefinitionIndex = 47224;

	class UIUrbanMapRightStreetInfoController_Collect : public ::MoleMole::UIUrbanMapRightTastListWidget02WidgetController_2<::Class_3_468AACA7FBAA98D9*, ::MoleMole::UIUrbanMapRightStreetInfoContext_Collect*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTSTREETINFOCONTROLLER_COLLECT__CTOR_OFFSET))(this);
		}
	};
}
