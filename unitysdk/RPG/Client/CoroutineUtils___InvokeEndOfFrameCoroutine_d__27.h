#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_COROUTINEUTILS___INVOKEENDOFFRAMECOROUTINE_D__27_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C8A90E0)
#define RPG_CLIENT_COROUTINEUTILS___INVOKEENDOFFRAMECOROUTINE_D__27_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C8A9170)
#define RPG_CLIENT_COROUTINEUTILS___INVOKEENDOFFRAMECOROUTINE_D__27_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C8A91D0)
#define RPG_CLIENT_COROUTINEUTILS___INVOKEENDOFFRAMECOROUTINE_D__27_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C8A9180)
#define RPG_CLIENT_COROUTINEUTILS___INVOKEENDOFFRAMECOROUTINE_D__27_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C8A90D0)
#define RPG_CLIENT_COROUTINEUTILS___INVOKEENDOFFRAMECOROUTINE_D__27__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8A8620)

namespace RPG::Client
{
	inline static constexpr unsigned int CoroutineUtils___InvokeEndOfFrameCoroutine_d__27_TypeDefinitionIndex = 34571;

	class CoroutineUtils___InvokeEndOfFrameCoroutine_d__27 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS___INVOKEENDOFFRAMECOROUTINE_D__27__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS___INVOKEENDOFFRAMECOROUTINE_D__27_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS___INVOKEENDOFFRAMECOROUTINE_D__27_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS___INVOKEENDOFFRAMECOROUTINE_D__27_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS___INVOKEENDOFFRAMECOROUTINE_D__27_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS___INVOKEENDOFFRAMECOROUTINE_D__27_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
