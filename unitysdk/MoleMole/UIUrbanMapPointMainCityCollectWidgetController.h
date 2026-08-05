#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_741C9708D553FB97_5;
namespace MoleMole { class UIThreeDMapElement_MainCityCollectContext; }

#define MOLEMOLE_UIURBANMAPPOINTMAINCITYCOLLECTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x151B6140)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointMainCityCollectWidgetController_TypeDefinitionIndex = 66457;

	class UIUrbanMapPointMainCityCollectWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_741C9708D553FB97_5*, ::MoleMole::UIThreeDMapElement_MainCityCollectContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTMAINCITYCOLLECTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
