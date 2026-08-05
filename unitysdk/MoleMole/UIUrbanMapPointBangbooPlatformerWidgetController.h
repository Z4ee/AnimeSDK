#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_741C9708D553FB97_3;
namespace MoleMole { class UIThreeDMapElement_BangbooPlatformerContext; }

#define MOLEMOLE_UIURBANMAPPOINTBANGBOOPLATFORMERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x140D9AF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointBangbooPlatformerWidgetController_TypeDefinitionIndex = 84004;

	class UIUrbanMapPointBangbooPlatformerWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_741C9708D553FB97_3*, ::MoleMole::UIThreeDMapElement_BangbooPlatformerContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTBANGBOOPLATFORMERWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
