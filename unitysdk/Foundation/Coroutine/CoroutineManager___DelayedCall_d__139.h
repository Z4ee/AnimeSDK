#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::Coroutine { class CoroutineManager; }
namespace System { class Action; }

#define FOUNDATION_COROUTINE_COROUTINEMANAGER___DELAYEDCALL_D__139_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E3705B0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___DELAYEDCALL_D__139_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E370670)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___DELAYEDCALL_D__139_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E3706D0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___DELAYEDCALL_D__139_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1E370680)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___DELAYEDCALL_D__139_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E3705A0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___DELAYEDCALL_D__139__CTOR_OFFSET UNITYSDK_OFFSET(0x1E370590)

namespace Foundation::Coroutine
{
	inline static constexpr unsigned int CoroutineManager___DelayedCall_d__139_TypeDefinitionIndex = 8007;

	class CoroutineManager___DelayedCall_d__139 : public ::System::Object
	{
	public:
		::Foundation::Coroutine::CoroutineManager* __4__this; // 0x10
		::System::Action* action; // 0x18
		::System::Single __2__current; // 0x20
		::System::Single delay; // 0x24
		::System::Int32 __1__state; // 0x28

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___DELAYEDCALL_D__139__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___DELAYEDCALL_D__139_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___DELAYEDCALL_D__139_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___DELAYEDCALL_D__139_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___DELAYEDCALL_D__139_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___DELAYEDCALL_D__139_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
