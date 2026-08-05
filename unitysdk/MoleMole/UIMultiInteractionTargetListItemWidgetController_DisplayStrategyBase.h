#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMultiInteractionTargetListItemWidgetController_DisplayStrategyType.h"
#include "unitysdk/System/Object.h"

class Class_2_60638234271CCDB8_63;
namespace MoleMole { class UIMultiInteractionTargetListItemWidgetController; }
namespace MoleMole { class UIMultiInteractionTargetListItemWidgetController_Context; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYBASE_BIND_OFFSET UNITYSDK_OFFSET(0x16732050)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYBASE_DOBIND_OFFSET UNITYSDK_OFFSET(0x167320D0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYBASE_DOUNBIND_OFFSET UNITYSDK_OFFSET(0x16732280)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYBASE_UNBIND_OFFSET UNITYSDK_OFFSET(0x167321E0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x167322D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMultiInteractionTargetListItemWidgetController_DisplayStrategyBase_TypeDefinitionIndex = 79755;

	class UIMultiInteractionTargetListItemWidgetController_DisplayStrategyBase : public ::System::Object
	{
	public:
		::Class_2_60638234271CCDB8_63* _view; // 0x10
		::System::Action_1<::MoleMole::UIMultiInteractionTargetListItemWidgetController_DisplayStrategyBase*>* OnUnbind; // 0x18
		::MoleMole::UIMultiInteractionTargetListItemWidgetController_Context* _context; // 0x20
		::MoleMole::UIMultiInteractionTargetListItemWidgetController* _controller; // 0x28
		::System::Boolean _bound; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYBASE__CTOR_OFFSET))(this);
		}

		::System::Void Bind(::MoleMole::UIMultiInteractionTargetListItemWidgetController_Context*& context, ::MoleMole::UIMultiInteractionTargetListItemWidgetController*& controller, ::Class_2_60638234271CCDB8_63*& view)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMultiInteractionTargetListItemWidgetController_Context*&, ::MoleMole::UIMultiInteractionTargetListItemWidgetController*&, ::Class_2_60638234271CCDB8_63*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYBASE_BIND_OFFSET))(this, context, controller, view);
		}

		::System::Void DoBind(::MoleMole::UIMultiInteractionTargetListItemWidgetController_Context*& context, ::MoleMole::UIMultiInteractionTargetListItemWidgetController*& controller, ::Class_2_60638234271CCDB8_63*& view)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMultiInteractionTargetListItemWidgetController_Context*&, ::MoleMole::UIMultiInteractionTargetListItemWidgetController*&, ::Class_2_60638234271CCDB8_63*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYBASE_DOBIND_OFFSET))(this, context, controller, view);
		}

		::System::Void Unbind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYBASE_UNBIND_OFFSET))(this);
		}

		::System::Void DoUnbind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYBASE_DOUNBIND_OFFSET))(this);
		}
	};
}
