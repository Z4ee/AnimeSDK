#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_741C9708D553FB97_6;
namespace MoleMole { class UIThreeDMapElement_EvacuationContext; }

#define MOLEMOLE_UIURBANMAPPOINTEVACUATIONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x162AD2E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointEvacuationWidgetController_TypeDefinitionIndex = 58524;

	class UIUrbanMapPointEvacuationWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_741C9708D553FB97_6*, ::MoleMole::UIThreeDMapElement_EvacuationContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTEVACUATIONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
