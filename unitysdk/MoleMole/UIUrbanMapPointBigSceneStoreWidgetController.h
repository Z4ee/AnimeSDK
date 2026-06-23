#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_AAAC44FF4CB2D937_4;
namespace MoleMole { class UIThreeDMapElement_BigSceneStoreContext; }

#define MOLEMOLE_UIURBANMAPPOINTBIGSCENESTOREWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x10406400)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointBigSceneStoreWidgetController_TypeDefinitionIndex = 77274;

	class UIUrbanMapPointBigSceneStoreWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_AAAC44FF4CB2D937_4*, ::MoleMole::UIThreeDMapElement_BigSceneStoreContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTBIGSCENESTOREWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
