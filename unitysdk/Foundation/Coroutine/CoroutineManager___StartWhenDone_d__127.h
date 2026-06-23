#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::Coroutine { class CoroutineManager___c__DisplayClass127_0; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class AsyncOperation; }

#define FOUNDATION_COROUTINE_COROUTINEMANAGER___STARTWHENDONE_D__127_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DDA9900)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___STARTWHENDONE_D__127_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DDA9A50)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___STARTWHENDONE_D__127_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DDA9AB0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___STARTWHENDONE_D__127_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1DDA9A60)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___STARTWHENDONE_D__127_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DDA98F0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___STARTWHENDONE_D__127__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDA98E0)

namespace Foundation::Coroutine
{
	inline static constexpr unsigned int CoroutineManager___StartWhenDone_d__127_TypeDefinitionIndex = 8020;

	class CoroutineManager___StartWhenDone_d__127 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::System::Single>* pausedProc; // 0x10
		::UnityEngine::AsyncOperation* operation; // 0x18
		::Foundation::Coroutine::CoroutineManager___c__DisplayClass127_0* __8__1; // 0x20
		::System::Single __2__current; // 0x28
		::System::Int32 __1__state; // 0x2C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___STARTWHENDONE_D__127__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___STARTWHENDONE_D__127_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___STARTWHENDONE_D__127_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___STARTWHENDONE_D__127_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___STARTWHENDONE_D__127_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___STARTWHENDONE_D__127_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
