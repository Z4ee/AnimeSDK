#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMultiInteractionTargetListItemWidgetController_DisplayStrategyBase.h"
#include "unitysdk/MoleMole/UIMultiInteractionTargetListItemWidgetController_DisplayStrategyType.h"

#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYINVALID_GET_STRATEGYTYPE_OFFSET UNITYSDK_OFFSET(0x167322E0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYINVALID__CTOR_OFFSET UNITYSDK_OFFSET(0x167322F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMultiInteractionTargetListItemWidgetController_DisplayStrategyInvalid_TypeDefinitionIndex = 79756;

	class UIMultiInteractionTargetListItemWidgetController_DisplayStrategyInvalid : public ::MoleMole::UIMultiInteractionTargetListItemWidgetController_DisplayStrategyBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYINVALID__CTOR_OFFSET))(this);
		}

		::MoleMole::UIMultiInteractionTargetListItemWidgetController_DisplayStrategyType get_StrategyType()
		{
			return ((::MoleMole::UIMultiInteractionTargetListItemWidgetController_DisplayStrategyType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYINVALID_GET_STRATEGYTYPE_OFFSET))(this);
		}
	};
}
