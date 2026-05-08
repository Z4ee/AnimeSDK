#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_B94142B741734699;
namespace MoleMole { class UIThreeDMapElement_MainCityTeleportContext; }

#define MOLEMOLE_UIURBANMAPPOINTMAINCITYTELEPORTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xEBCC450)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointMainCityTeleportWidgetController_TypeDefinitionIndex = 78451;

	class UIUrbanMapPointMainCityTeleportWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_B94142B741734699*, ::MoleMole::UIThreeDMapElement_MainCityTeleportContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTMAINCITYTELEPORTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
