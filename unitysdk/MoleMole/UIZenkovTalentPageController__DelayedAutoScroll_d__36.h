#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIZenkovTalentPageController; }
namespace MoleMole { class UIZenkovTalentPageController_Context; }

#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER__DELAYEDAUTOSCROLL_D__36_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x112E3640)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER__DELAYEDAUTOSCROLL_D__36_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x112E37E0)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER__DELAYEDAUTOSCROLL_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x112E3840)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER__DELAYEDAUTOSCROLL_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x112E37F0)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER__DELAYEDAUTOSCROLL_D__36_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x112E3630)
#define MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER__DELAYEDAUTOSCROLL_D__36__CTOR_OFFSET UNITYSDK_OFFSET(0x112E3620)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovTalentPageController__DelayedAutoScroll_d__36_TypeDefinitionIndex = 84332;

	class UIZenkovTalentPageController__DelayedAutoScroll_d__36 : public ::System::Object
	{
	public:
		::MoleMole::UIZenkovTalentPageController_Context* context; // 0x10
		::MoleMole::UIZenkovTalentPageController* __4__this; // 0x18
		::System::Single __2__current; // 0x20
		::System::Int32 __1__state; // 0x24

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER__DELAYEDAUTOSCROLL_D__36__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER__DELAYEDAUTOSCROLL_D__36_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER__DELAYEDAUTOSCROLL_D__36_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER__DELAYEDAUTOSCROLL_D__36_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER__DELAYEDAUTOSCROLL_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPAGECONTROLLER__DELAYEDAUTOSCROLL_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
