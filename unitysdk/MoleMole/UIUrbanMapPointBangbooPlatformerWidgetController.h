#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_24B9743ED3B822A9_2;
namespace MoleMole { class UIThreeDMapElement_BangbooPlatformerContext; }

#define MOLEMOLE_UIURBANMAPPOINTBANGBOOPLATFORMERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x126A8290)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointBangbooPlatformerWidgetController_TypeDefinitionIndex = 75301;

	class UIUrbanMapPointBangbooPlatformerWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_24B9743ED3B822A9_2*, ::MoleMole::UIThreeDMapElement_BangbooPlatformerContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTBANGBOOPLATFORMERWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
