#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_COROUTINEUTILS___INVOKECOROUTINEUNTIL_D__25_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E58E990)
#define RPG_CLIENT_COROUTINEUTILS___INVOKECOROUTINEUNTIL_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E58EA00)
#define RPG_CLIENT_COROUTINEUTILS___INVOKECOROUTINEUNTIL_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E58EA60)
#define RPG_CLIENT_COROUTINEUTILS___INVOKECOROUTINEUNTIL_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1E58EA10)
#define RPG_CLIENT_COROUTINEUTILS___INVOKECOROUTINEUNTIL_D__25_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E58E980)
#define RPG_CLIENT_COROUTINEUTILS___INVOKECOROUTINEUNTIL_D__25__CTOR_OFFSET UNITYSDK_OFFSET(0x1E58DFA0)

namespace RPG::Client
{
	inline static constexpr unsigned int CoroutineUtils___InvokeCoroutineUntil_d__25_TypeDefinitionIndex = 34570;

	class CoroutineUtils___InvokeCoroutineUntil_d__25 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::System::Func_1<::System::Boolean>* condition; // 0x18
		::System::Action* callBack; // 0x20
		::System::Int32 __1__state; // 0x28

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS___INVOKECOROUTINEUNTIL_D__25__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS___INVOKECOROUTINEUNTIL_D__25_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS___INVOKECOROUTINEUNTIL_D__25_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS___INVOKECOROUTINEUNTIL_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS___INVOKECOROUTINEUNTIL_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS___INVOKECOROUTINEUNTIL_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
