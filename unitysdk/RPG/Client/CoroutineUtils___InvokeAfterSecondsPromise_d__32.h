#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_COROUTINEUTILS___INVOKEAFTERSECONDSPROMISE_D__32_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x19D94BE0)
#define RPG_CLIENT_COROUTINEUTILS___INVOKEAFTERSECONDSPROMISE_D__32_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19D94C60)
#define RPG_CLIENT_COROUTINEUTILS___INVOKEAFTERSECONDSPROMISE_D__32_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19D94CC0)
#define RPG_CLIENT_COROUTINEUTILS___INVOKEAFTERSECONDSPROMISE_D__32_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x19D94C70)
#define RPG_CLIENT_COROUTINEUTILS___INVOKEAFTERSECONDSPROMISE_D__32_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19D94BD0)
#define RPG_CLIENT_COROUTINEUTILS___INVOKEAFTERSECONDSPROMISE_D__32__CTOR_OFFSET UNITYSDK_OFFSET(0x19D94540)

namespace RPG::Client
{
	inline static constexpr unsigned int CoroutineUtils___InvokeAfterSecondsPromise_d__32_TypeDefinitionIndex = 9663;

	class CoroutineUtils___InvokeAfterSecondsPromise_d__32 : public ::System::Object
	{
	public:
		::System::Action* resolve; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Single seconds; // 0x24

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS___INVOKEAFTERSECONDSPROMISE_D__32__CTOR_OFFSET))(this, __1__state);
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
