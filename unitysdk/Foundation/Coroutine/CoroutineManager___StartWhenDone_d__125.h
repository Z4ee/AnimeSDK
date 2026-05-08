#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::Coroutine { class CoroutineManager___c__DisplayClass125_0; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class WWW; }

#define FOUNDATION_COROUTINE_COROUTINEMANAGER___STARTWHENDONE_D__125_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BAE4BF0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___STARTWHENDONE_D__125_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BAE4D50)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___STARTWHENDONE_D__125_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BAE4DB0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___STARTWHENDONE_D__125_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1BAE4D60)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___STARTWHENDONE_D__125_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BAE4BE0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___STARTWHENDONE_D__125__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAE4BD0)

namespace Foundation::Coroutine
{
	inline static constexpr unsigned int CoroutineManager___StartWhenDone_d__125_TypeDefinitionIndex = 7856;

	class CoroutineManager___StartWhenDone_d__125 : public ::System::Object
	{
	public:
		::Foundation::Coroutine::CoroutineManager___c__DisplayClass125_0* __8__1; // 0x10
		::System::Collections::Generic::IEnumerator_1<::System::Single>* pausedProc; // 0x18
		::UnityEngine::WWW* www; // 0x20
		::System::Single __2__current; // 0x28
		::System::Int32 __1__state; // 0x2C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___STARTWHENDONE_D__125__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___STARTWHENDONE_D__125_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___STARTWHENDONE_D__125_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___STARTWHENDONE_D__125_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___STARTWHENDONE_D__125_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___STARTWHENDONE_D__125_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
