#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_31593F17514C8525;
namespace MoleMole { class UIThreeDMapElement_BigSceneStoreContext; }

#define MOLEMOLE_UIURBANMAPPOINTBIGSCENESTOREWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15530450)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointBigSceneStoreWidgetController_TypeDefinitionIndex = 70709;

	class UIUrbanMapPointBigSceneStoreWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_31593F17514C8525*, ::MoleMole::UIThreeDMapElement_BigSceneStoreContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTBIGSCENESTOREWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
