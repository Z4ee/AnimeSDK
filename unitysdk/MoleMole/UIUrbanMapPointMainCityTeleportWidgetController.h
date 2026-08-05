#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_98695EF754FED5C3;
namespace MoleMole { class UIThreeDMapElement_MainCityTeleportContext; }

#define MOLEMOLE_UIURBANMAPPOINTMAINCITYTELEPORTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x112C1DC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointMainCityTeleportWidgetController_TypeDefinitionIndex = 56981;

	class UIUrbanMapPointMainCityTeleportWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_98695EF754FED5C3*, ::MoleMole::UIThreeDMapElement_MainCityTeleportContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTMAINCITYTELEPORTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
