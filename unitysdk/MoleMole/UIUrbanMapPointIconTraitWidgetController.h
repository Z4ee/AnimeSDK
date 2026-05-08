#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_24B9743ED3B822A9;
namespace MoleMole { class UIThreeDMapElement_IconTraitContext; }

#define MOLEMOLE_UIURBANMAPPOINTICONTRAITWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12E484A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointIconTraitWidgetController_TypeDefinitionIndex = 71856;

	class UIUrbanMapPointIconTraitWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_24B9743ED3B822A9*, ::MoleMole::UIThreeDMapElement_IconTraitContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTICONTRAITWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
