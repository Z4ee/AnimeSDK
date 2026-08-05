#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMultiInteractionTargetListItemWidgetController_DisplayStrategyBaseWithFocus.h"
#include "unitysdk/MoleMole/UIMultiInteractionTargetListItemWidgetController_DisplayStrategyType.h"
#include "unitysdk/Struct_2_24A53FACD918DAF7.h"
#include "unitysdk/Struct_2_C8629618711DF8B3.h"

class Class_2_60638234271CCDB8_63;
class Class_2_D1CED082B4F1459A_Class_2_719DF1136724A184;
namespace MoleMole { class UIMultiInteractionTargetListItemWidgetController; }
namespace MoleMole { class UIMultiInteractionTargetListItemWidgetController_Context; }

#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYZENKOVCONTAINER_DOBIND_OFFSET UNITYSDK_OFFSET(0x183435F0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYZENKOVCONTAINER_DOUNBIND_OFFSET UNITYSDK_OFFSET(0x18343D90)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYZENKOVCONTAINER_GET_STRATEGYTYPE_OFFSET UNITYSDK_OFFSET(0x183435E0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYZENKOVCONTAINER_ONALREADYSEARCHSLOTNUMCHANGED_OFFSET UNITYSDK_OFFSET(0x18343DF0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYZENKOVCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x18344010)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYZENKOVCONTAINER___BASE_DOBIND_OFFSET UNITYSDK_OFFSET(0x18344020)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYZENKOVCONTAINER___BASE_DOUNBIND_OFFSET UNITYSDK_OFFSET(0x18344030)

namespace MoleMole
{
	inline static constexpr unsigned int UIMultiInteractionTargetListItemWidgetController_DisplayStrategyZenkovContainer_TypeDefinitionIndex = 79753;

	class UIMultiInteractionTargetListItemWidgetController_DisplayStrategyZenkovContainer : public ::MoleMole::UIMultiInteractionTargetListItemWidgetController_DisplayStrategyBaseWithFocus
	{
	public:
		::Struct_2_24A53FACD918DAF7 _alreadySearchSlotNumSubscription; // 0x50
		::Class_2_D1CED082B4F1459A_Class_2_719DF1136724A184* _bagData; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYZENKOVCONTAINER__CTOR_OFFSET))(this);
		}

		::MoleMole::UIMultiInteractionTargetListItemWidgetController_DisplayStrategyType get_StrategyType()
		{
			return ((::MoleMole::UIMultiInteractionTargetListItemWidgetController_DisplayStrategyType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYZENKOVCONTAINER_GET_STRATEGYTYPE_OFFSET))(this);
		}

		::System::Void DoBind(::MoleMole::UIMultiInteractionTargetListItemWidgetController_Context*& context, ::MoleMole::UIMultiInteractionTargetListItemWidgetController*& controller, ::Class_2_60638234271CCDB8_63*& view)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMultiInteractionTargetListItemWidgetController_Context*&, ::MoleMole::UIMultiInteractionTargetListItemWidgetController*&, ::Class_2_60638234271CCDB8_63*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYZENKOVCONTAINER_DOBIND_OFFSET))(this, context, controller, view);
		}

		::System::Void DoUnbind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYZENKOVCONTAINER_DOUNBIND_OFFSET))(this);
		}

		::System::Void OnAlreadySearchSlotNumChanged(::Struct_2_C8629618711DF8B3& e)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYZENKOVCONTAINER_ONALREADYSEARCHSLOTNUMCHANGED_OFFSET))(this, e);
		}

		::System::Void __base_DoBind(::MoleMole::UIMultiInteractionTargetListItemWidgetController_Context*& P0, ::MoleMole::UIMultiInteractionTargetListItemWidgetController*& P1, ::Class_2_60638234271CCDB8_63*& P2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMultiInteractionTargetListItemWidgetController_Context*&, ::MoleMole::UIMultiInteractionTargetListItemWidgetController*&, ::Class_2_60638234271CCDB8_63*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYZENKOVCONTAINER___BASE_DOBIND_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_DoUnbind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_DISPLAYSTRATEGYZENKOVCONTAINER___BASE_DOUNBIND_OFFSET))(this);
		}
	};
}
