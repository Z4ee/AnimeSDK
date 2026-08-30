#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_COROUTINEUTILS___INVOKEAFTERSECONDSPROMISE_D__32_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C8A8DE0)
#define RPG_CLIENT_COROUTINEUTILS___INVOKEAFTERSECONDSPROMISE_D__32_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C8A8E70)
#define RPG_CLIENT_COROUTINEUTILS___INVOKEAFTERSECONDSPROMISE_D__32_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C8A8ED0)
#define RPG_CLIENT_COROUTINEUTILS___INVOKEAFTERSECONDSPROMISE_D__32_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C8A8E80)
#define RPG_CLIENT_COROUTINEUTILS___INVOKEAFTERSECONDSPROMISE_D__32_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C8A8DD0)
#define RPG_CLIENT_COROUTINEUTILS___INVOKEAFTERSECONDSPROMISE_D__32__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8A8710)

namespace RPG::Client
{
	inline static constexpr unsigned int CoroutineUtils___InvokeAfterSecondsPromise_d__32_TypeDefinitionIndex = 34568;

	class CoroutineUtils___InvokeAfterSecondsPromise_d__32 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::System::Action* resolve; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Single seconds; // 0x24

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS___INVOKEAFTERSECONDSPROMISE_D__32__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS___INVOKEAFTERSECONDSPROMISE_D__32_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS___INVOKEAFTERSECONDSPROMISE_D__32_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS___INVOKEAFTERSECONDSPROMISE_D__32_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS___INVOKEAFTERSECONDSPROMISE_D__32_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS___INVOKEAFTERSECONDSPROMISE_D__32_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
