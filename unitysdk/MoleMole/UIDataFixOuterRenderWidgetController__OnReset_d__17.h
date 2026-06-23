#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIDataFixOuterRenderWidgetController; }

#define MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER__ONRESET_D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15E7CF80)
#define MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER__ONRESET_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15E7D2E0)
#define MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER__ONRESET_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15E7D340)
#define MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER__ONRESET_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15E7D2F0)
#define MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER__ONRESET_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E7CF70)
#define MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER__ONRESET_D__17__CTOR_OFFSET UNITYSDK_OFFSET(0x15E7CF60)

namespace MoleMole
{
	inline static constexpr unsigned int UIDataFixOuterRenderWidgetController__OnReset_d__17_TypeDefinitionIndex = 71774;

	class UIDataFixOuterRenderWidgetController__OnReset_d__17 : public ::System::Object
	{
	public:
		::MoleMole::UIDataFixOuterRenderWidgetController* __4__this; // 0x10
		::System::Int32 __1__state; // 0x18
		::System::Single _nodeHeight_5__4; // 0x1C
		::System::Int32 _i_5__6; // 0x20
		::System::Single __2__current; // 0x24
		::System::Single _ratio_5__5; // 0x28
		::System::Single _panelStartY_5__2; // 0x2C
		::System::Single _panelEndY_5__3; // 0x30

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER__ONRESET_D__17__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER__ONRESET_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER__ONRESET_D__17_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER__ONRESET_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER__ONRESET_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXOUTERRENDERWIDGETCONTROLLER__ONRESET_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
