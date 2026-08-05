#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_741C9708D553FB97_2;
namespace MoleMole { class UIThreeDMapElement_SplitTeamContext; }

#define MOLEMOLE_UIURBANMAPPOINTSPLITTEAMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16104020)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointSplitTeamWidgetController_TypeDefinitionIndex = 47688;

	class UIUrbanMapPointSplitTeamWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_741C9708D553FB97_2*, ::MoleMole::UIThreeDMapElement_SplitTeamContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTSPLITTEAMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
