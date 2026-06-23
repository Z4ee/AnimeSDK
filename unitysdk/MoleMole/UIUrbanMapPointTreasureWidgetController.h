#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_AAAC44FF4CB2D937_3;
namespace MoleMole { class UIThreeDMapElement_TreasureContext; }

#define MOLEMOLE_UIURBANMAPPOINTTREASUREWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x122C68A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointTreasureWidgetController_TypeDefinitionIndex = 72263;

	class UIUrbanMapPointTreasureWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_AAAC44FF4CB2D937_3*, ::MoleMole::UIThreeDMapElement_TreasureContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTTREASUREWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
