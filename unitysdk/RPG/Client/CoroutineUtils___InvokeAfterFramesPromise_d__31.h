#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_COROUTINEUTILS___INVOKEAFTERFRAMESPROMISE_D__31_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1833EE10)
#define RPG_CLIENT_COROUTINEUTILS___INVOKEAFTERFRAMESPROMISE_D__31_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1833EE80)
#define RPG_CLIENT_COROUTINEUTILS___INVOKEAFTERFRAMESPROMISE_D__31_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1833EEE0)
#define RPG_CLIENT_COROUTINEUTILS___INVOKEAFTERFRAMESPROMISE_D__31_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1833EE90)
#define RPG_CLIENT_COROUTINEUTILS___INVOKEAFTERFRAMESPROMISE_D__31_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1833EE00)
#define RPG_CLIENT_COROUTINEUTILS___INVOKEAFTERFRAMESPROMISE_D__31__CTOR_OFFSET UNITYSDK_OFFSET(0x1833E8F0)

namespace RPG::Client
{
	inline static constexpr unsigned int CoroutineUtils___InvokeAfterFramesPromise_d__31_TypeDefinitionIndex = 9463;

	class CoroutineUtils___InvokeAfterFramesPromise_d__31 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::System::Action* resolve; // 0x18
		::System::Int32 _i_5__2; // 0x20
		::System::Int32 frames; // 0x24
		::System::Int32 __1__state; // 0x28

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS___INVOKEAFTERFRAMESPROMISE_D__31__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS___INVOKEAFTERFRAMESPROMISE_D__31_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS___INVOKEAFTERFRAMESPROMISE_D__31_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS___INVOKEAFTERFRAMESPROMISE_D__31_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS___INVOKEAFTERFRAMESPROMISE_D__31_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS___INVOKEAFTERFRAMESPROMISE_D__31_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
