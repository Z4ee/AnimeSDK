#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_741C9708D553FB97_8;
namespace MoleMole { class UIThreeDMapElement_PortalContext; }

#define MOLEMOLE_UIURBANMAPPOINTPORTALWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16104010)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointPortalWidgetController_TypeDefinitionIndex = 71797;

	class UIUrbanMapPointPortalWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_741C9708D553FB97_8*, ::MoleMole::UIThreeDMapElement_PortalContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTPORTALWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
