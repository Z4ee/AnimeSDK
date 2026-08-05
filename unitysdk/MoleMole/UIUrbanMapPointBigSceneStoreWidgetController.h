#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_741C9708D553FB97_1;
namespace MoleMole { class UIThreeDMapElement_BigSceneStoreContext; }

#define MOLEMOLE_UIURBANMAPPOINTBIGSCENESTOREWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x188B2320)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointBigSceneStoreWidgetController_TypeDefinitionIndex = 44903;

	class UIUrbanMapPointBigSceneStoreWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_741C9708D553FB97_1*, ::MoleMole::UIThreeDMapElement_BigSceneStoreContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTBIGSCENESTOREWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
