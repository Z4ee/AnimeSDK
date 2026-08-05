#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_455;
class Class_2_72BDD67FEA972F1C;
namespace MoleMole { class UIMultiInteractionTargetListItemWidgetController_DisplayStrategyBase; }
template <typename T> class Class_0_16E4307DCC419505_164;

#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_CONTEXT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x12FCF1E0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_CONTEXT_EQUALS_OFFSET UNITYSDK_OFFSET(0x12FCF150)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_CONTEXT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x12FCF2E0)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_CONTEXT_RESET_OFFSET UNITYSDK_OFFSET(0x12FCF100)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12FCF350)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_CONTEXT___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x12FCF360)
#define MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_CONTEXT___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x12FCF370)

namespace MoleMole
{
	inline static constexpr unsigned int UIMultiInteractionTargetListItemWidgetController_Context_TypeDefinitionIndex = 79757;

	class UIMultiInteractionTargetListItemWidgetController_Context : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_455* EventListener; // 0x10
		::Class_0_16E4307DCC419505_164<::Class_2_72BDD67FEA972F1C*>* FocusedInteraction; // 0x18
		::MoleMole::UIMultiInteractionTargetListItemWidgetController_DisplayStrategyBase* DisplayStrategy; // 0x20
		::Class_2_72BDD67FEA972F1C* BoundInteraction; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_CONTEXT_RESET_OFFSET))(this);
		}

		::System::Boolean Equals(::MoleMole::UIMultiInteractionTargetListItemWidgetController_Context* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIMultiInteractionTargetListItemWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_CONTEXT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_CONTEXT_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_CONTEXT_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_CONTEXT___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMULTIINTERACTIONTARGETLISTITEMWIDGETCONTROLLER_CONTEXT___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
