#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_0B9DD3B9A8F92F66_1;
namespace MoleMole { class UIThreeDMapElement_PartnerDateContext; }

#define MOLEMOLE_UIURBANMAPPOINTPARTNERDATEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x167873D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointPartnerDateWidgetController_TypeDefinitionIndex = 47664;

	class UIUrbanMapPointPartnerDateWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_0B9DD3B9A8F92F66_1*, ::MoleMole::UIThreeDMapElement_PartnerDateContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTPARTNERDATEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
