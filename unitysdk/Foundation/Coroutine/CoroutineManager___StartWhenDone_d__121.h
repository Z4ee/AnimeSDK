#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

namespace Foundation::Coroutine { class CoroutineManager; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define FOUNDATION_COROUTINE_COROUTINEMANAGER___STARTWHENDONE_D__121_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BAE4750)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___STARTWHENDONE_D__121_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BAE4B20)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___STARTWHENDONE_D__121_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BAE4B80)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___STARTWHENDONE_D__121_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1BAE4B30)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___STARTWHENDONE_D__121_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BAE46D0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___STARTWHENDONE_D__121__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAE46C0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___STARTWHENDONE_D__121___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1BAE4720)

namespace Foundation::Coroutine
{
	inline static constexpr unsigned int CoroutineManager___StartWhenDone_d__121_TypeDefinitionIndex = 7841;

	class CoroutineManager___StartWhenDone_d__121 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::System::Single>* proc; // 0x10
		::Foundation::Coroutine::CoroutineManager* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20
		::Foundation::Coroutine::CoroutineHandle handle; // 0x24
		::System::Single __2__current; // 0x28

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___STARTWHENDONE_D__121__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___STARTWHENDONE_D__121_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___STARTWHENDONE_D__121_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___STARTWHENDONE_D__121___M__FINALLY1_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___STARTWHENDONE_D__121_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___STARTWHENDONE_D__121_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___STARTWHENDONE_D__121_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
