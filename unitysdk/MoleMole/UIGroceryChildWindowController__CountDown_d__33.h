#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A0999DD62F5BF03;
namespace MoleMole { class UIGroceryChildWindowController; }

#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER__COUNTDOWN_D__33_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15CAEE00)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER__COUNTDOWN_D__33_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15CAF1C0)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER__COUNTDOWN_D__33_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15CAF220)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER__COUNTDOWN_D__33_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15CAF1D0)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER__COUNTDOWN_D__33_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CAEDF0)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER__COUNTDOWN_D__33__CTOR_OFFSET UNITYSDK_OFFSET(0x15CAEDE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGroceryChildWindowController__CountDown_d__33_TypeDefinitionIndex = 54569;

	class UIGroceryChildWindowController__CountDown_d__33 : public ::System::Object
	{
	public:
		::MoleMole::UIGroceryChildWindowController* __4__this; // 0x10
		::Class_1_7A0999DD62F5BF03* tabData; // 0x18
		::System::Single __2__current; // 0x20
		::System::Int32 __1__state; // 0x24

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER__COUNTDOWN_D__33__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER__COUNTDOWN_D__33_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER__COUNTDOWN_D__33_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER__COUNTDOWN_D__33_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER__COUNTDOWN_D__33_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER__COUNTDOWN_D__33_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
