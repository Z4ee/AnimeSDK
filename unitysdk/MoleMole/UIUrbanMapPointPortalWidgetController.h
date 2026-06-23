#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_AAAC44FF4CB2D937;
namespace MoleMole { class UIThreeDMapElement_PortalContext; }

#define MOLEMOLE_UIURBANMAPPOINTPORTALWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15C40540)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointPortalWidgetController_TypeDefinitionIndex = 43397;

	class UIUrbanMapPointPortalWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_AAAC44FF4CB2D937*, ::MoleMole::UIThreeDMapElement_PortalContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTPORTALWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
