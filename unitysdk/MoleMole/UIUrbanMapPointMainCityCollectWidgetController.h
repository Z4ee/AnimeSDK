#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_31593F17514C8525_2;
namespace MoleMole { class UIThreeDMapElement_MainCityCollectContext; }

#define MOLEMOLE_UIURBANMAPPOINTMAINCITYCOLLECTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xE46B8D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointMainCityCollectWidgetController_TypeDefinitionIndex = 66216;

	class UIUrbanMapPointMainCityCollectWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_31593F17514C8525_2*, ::MoleMole::UIThreeDMapElement_MainCityCollectContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTMAINCITYCOLLECTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
