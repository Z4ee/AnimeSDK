#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::Coroutine { class CoroutineManager; }
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define FOUNDATION_COROUTINE_COROUTINEMANAGER___CALLCONTINUOUSLYUNTIL_D__159_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x19DA2DD0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___CALLCONTINUOUSLYUNTIL_D__159_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19DA2ED0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___CALLCONTINUOUSLYUNTIL_D__159_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19DA2F30)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___CALLCONTINUOUSLYUNTIL_D__159_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x19DA2EE0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___CALLCONTINUOUSLYUNTIL_D__159_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19DA2DC0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___CALLCONTINUOUSLYUNTIL_D__159__CTOR_OFFSET UNITYSDK_OFFSET(0x19DA2DB0)

namespace Foundation::Coroutine
{
	inline static constexpr unsigned int CoroutineManager___CallContinuouslyUntil_d__159_TypeDefinitionIndex = 7857;

	class CoroutineManager___CallContinuouslyUntil_d__159 : public ::System::Object
	{
	public:
		::System::Func_1<::System::Boolean>* predicate; // 0x10
		::System::Action* action; // 0x18
		::System::Action* onDone; // 0x20
		::Foundation::Coroutine::CoroutineManager* __4__this; // 0x28
		::System::Single period; // 0x30
		::System::Int32 __1__state; // 0x34
		::System::Single __2__current; // 0x38

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___CALLCONTINUOUSLYUNTIL_D__159__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___CALLCONTINUOUSLYUNTIL_D__159_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___CALLCONTINUOUSLYUNTIL_D__159_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___CALLCONTINUOUSLYUNTIL_D__159_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___CALLCONTINUOUSLYUNTIL_D__159_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___CALLCONTINUOUSLYUNTIL_D__159_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
