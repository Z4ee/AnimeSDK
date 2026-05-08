#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_24B9743ED3B822A9_1;
namespace MoleMole { class UIThreeDMapElement_TreasureContext; }

#define MOLEMOLE_UIURBANMAPPOINTTREASUREWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xF629E90)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointTreasureWidgetController_TypeDefinitionIndex = 77813;

	class UIUrbanMapPointTreasureWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_24B9743ED3B822A9_1*, ::MoleMole::UIThreeDMapElement_TreasureContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTTREASUREWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
