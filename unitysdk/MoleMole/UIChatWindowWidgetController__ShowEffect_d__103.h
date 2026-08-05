#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIChatWindowWidgetController; }

#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__SHOWEFFECT_D__103_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18D33740)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__SHOWEFFECT_D__103_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18D338F0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__SHOWEFFECT_D__103_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18D33950)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__SHOWEFFECT_D__103_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x18D33900)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__SHOWEFFECT_D__103_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18D33730)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__SHOWEFFECT_D__103__CTOR_OFFSET UNITYSDK_OFFSET(0x18D33720)

namespace MoleMole
{
	inline static constexpr unsigned int UIChatWindowWidgetController__ShowEffect_d__103_TypeDefinitionIndex = 72755;

	class UIChatWindowWidgetController__ShowEffect_d__103 : public ::System::Object
	{
	public:
		::MoleMole::UIChatWindowWidgetController* __4__this; // 0x10
		::System::Int32 __1__state; // 0x18
		::System::Single __2__current; // 0x1C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__SHOWEFFECT_D__103__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__SHOWEFFECT_D__103_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__SHOWEFFECT_D__103_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__SHOWEFFECT_D__103_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__SHOWEFFECT_D__103_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER__SHOWEFFECT_D__103_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
