#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::Coroutine { class CoroutineManager; }
namespace System { class Action; }

#define FOUNDATION_COROUTINE_COROUTINEMANAGER___CALLCONTINUOUSLY_D__148_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x19DA2BF0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___CALLCONTINUOUSLY_D__148_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19DA2D00)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___CALLCONTINUOUSLY_D__148_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19DA2D60)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___CALLCONTINUOUSLY_D__148_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x19DA2D10)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___CALLCONTINUOUSLY_D__148_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19DA2BE0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___CALLCONTINUOUSLY_D__148__CTOR_OFFSET UNITYSDK_OFFSET(0x19DA2BD0)

namespace Foundation::Coroutine
{
	inline static constexpr unsigned int CoroutineManager___CallContinuously_d__148_TypeDefinitionIndex = 7844;

	class CoroutineManager___CallContinuously_d__148 : public ::System::Object
	{
	public:
		::System::Action* onDone; // 0x10
		::Foundation::Coroutine::CoroutineManager* __4__this; // 0x18
		::System::Action* action; // 0x20
		::System::Int32 __1__state; // 0x28
		::System::Single __2__current; // 0x2C
		::System::Single period; // 0x30
		::System::Single timeframe; // 0x34
		::System::Double _startTime_5__2; // 0x38

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___CALLCONTINUOUSLY_D__148__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___CALLCONTINUOUSLY_D__148_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___CALLCONTINUOUSLY_D__148_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___CALLCONTINUOUSLY_D__148_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___CALLCONTINUOUSLY_D__148_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___CALLCONTINUOUSLY_D__148_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
