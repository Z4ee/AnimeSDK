#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { class AutoResetUniTaskCompletionSource; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class MonoBehaviour; }

#define CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS__CORE_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1EA50000)
#define CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS__CORE_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EA50130)
#define CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS__CORE_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EA50190)
#define CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS__CORE_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1EA50140)
#define CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS__CORE_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EA4FFF0)
#define CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS__CORE_D__4__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA4FFE0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int EnumeratorAsyncExtensions__Core_d__4_TypeDefinitionIndex = 42574;

	class EnumeratorAsyncExtensions__Core_d__4 : public ::System::Object
	{
	public:
		::UnityEngine::MonoBehaviour* coroutineRunner; // 0x10
		::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource* source; // 0x18
		::System::Object* __2__current; // 0x20
		::System::Collections::IEnumerator* inner; // 0x28
		::System::Int32 __1__state; // 0x30

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS__CORE_D__4__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS__CORE_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS__CORE_D__4_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS__CORE_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS__CORE_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ENUMERATORASYNCEXTENSIONS__CORE_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
