#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMultiInteractionTargetListItemWidgetController_DisplayStrategyBaseWithFocus.h"
#include "unitysdk/MoleMole/UIMultiInteractionTargetListItemWidgetController_DisplayStrategyType.h"

class Class_2_60638234271CCDB8_63;
namespace MoleMole { class UIMultiInteractionTargetListItemWidgetController; }
namespace MoleMole { class UIMultiInteractionTargetListItemWidgetController_Context; }

#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYDEFAULT_DOBIND_OFFSET UNITYSDK_OFFSET(0x198787C0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYDEFAULT_GET_STRATEGYTYPE_OFFSET UNITYSDK_OFFSET(0x198787B0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYDEFAULT__CTOR_OFFSET UNITYSDK_OFFSET(0x19878990)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYDEFAULT___BASE_DOBIND_OFFSET UNITYSDK_OFFSET(0x198789A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMultiInteractionTargetListItemWidgetController_DisplayStrategyDefault_TypeDefinitionIndex = 79760;

	class UIMultiInteractionTargetListItemWidgetController_DisplayStrategyDefault : public ::MoleMole::UIMultiInteractionTargetListItemWidgetController_DisplayStrategyBaseWithFocus
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYDEFAULT__CTOR_OFFSET))(this);
		}

		::MoleMole::UIMultiInteractionTargetListItemWidgetController_DisplayStrategyType get_StrategyType()
		{
			return ((::MoleMole::UIMultiInteractionTargetListItemWidgetController_DisplayStrategyType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYDEFAULT_GET_STRATEGYTYPE_OFFSET))(this);
		}

		::System::Void DoBind(::MoleMole::UIMultiInteractionTargetListItemWidgetController_Context*& context, ::MoleMole::UIMultiInteractionTargetListItemWidgetController*& controller, ::Class_2_60638234271CCDB8_63*& view)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMultiInteractionTargetListItemWidgetController_Context*&, ::MoleMole::UIMultiInteractionTargetListItemWidgetController*&, ::Class_2_60638234271CCDB8_63*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYDEFAULT_DOBIND_OFFSET))(this, context, controller, view);
		}

		::System::Void __base_DoBind(::MoleMole::UIMultiInteractionTargetListItemWidgetController_Context*& P0, ::MoleMole::UIMultiInteractionTargetListItemWidgetController*& P1, ::Class_2_60638234271CCDB8_63*& P2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMultiInteractionTargetListItemWidgetController_Context*&, ::MoleMole::UIMultiInteractionTargetListItemWidgetController*&, ::Class_2_60638234271CCDB8_63*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYDEFAULT___BASE_DOBIND_OFFSET))(this, P0, P1, P2);
		}
	};
}
