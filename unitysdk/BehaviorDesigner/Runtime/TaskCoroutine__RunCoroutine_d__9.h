#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace BehaviorDesigner::Runtime { class TaskCoroutine; }

#define BEHAVIORDESIGNER_RUNTIME_TASKCOROUTINE__RUNCOROUTINE_D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F801F70)
#define BEHAVIORDESIGNER_RUNTIME_TASKCOROUTINE__RUNCOROUTINE_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F802150)
#define BEHAVIORDESIGNER_RUNTIME_TASKCOROUTINE__RUNCOROUTINE_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F8021B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKCOROUTINE__RUNCOROUTINE_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1F802160)
#define BEHAVIORDESIGNER_RUNTIME_TASKCOROUTINE__RUNCOROUTINE_D__9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F801F60)
#define BEHAVIORDESIGNER_RUNTIME_TASKCOROUTINE__RUNCOROUTINE_D__9__CTOR_OFFSET UNITYSDK_OFFSET(0x1F801F50)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int TaskCoroutine__RunCoroutine_d__9_TypeDefinitionIndex = 33903;

	class TaskCoroutine__RunCoroutine_d__9 : public ::System::Object
	{
	public:
		::BehaviorDesigner::Runtime::TaskCoroutine* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKCOROUTINE__RUNCOROUTINE_D__9__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKCOROUTINE__RUNCOROUTINE_D__9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKCOROUTINE__RUNCOROUTINE_D__9_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKCOROUTINE__RUNCOROUTINE_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKCOROUTINE__RUNCOROUTINE_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKCOROUTINE__RUNCOROUTINE_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
