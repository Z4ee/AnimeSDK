#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_3A8CF64A6AFDEA00;
namespace MoleMole { class UIThreeDMapElement_PartnerDateContext; }

#define MOLEMOLE_UIURBANMAPPOINTPARTNERDATEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12E484B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointPartnerDateWidgetController_TypeDefinitionIndex = 44341;

	class UIUrbanMapPointPartnerDateWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_3A8CF64A6AFDEA00*, ::MoleMole::UIThreeDMapElement_PartnerDateContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTPARTNERDATEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
