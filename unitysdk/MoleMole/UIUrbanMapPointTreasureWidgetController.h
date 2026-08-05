#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_741C9708D553FB97_7;
namespace MoleMole { class UIThreeDMapElement_TreasureContext; }

#define MOLEMOLE_UIURBANMAPPOINTTREASUREWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11A03300)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointTreasureWidgetController_TypeDefinitionIndex = 69433;

	class UIUrbanMapPointTreasureWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_741C9708D553FB97_7*, ::MoleMole::UIThreeDMapElement_TreasureContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTTREASUREWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
