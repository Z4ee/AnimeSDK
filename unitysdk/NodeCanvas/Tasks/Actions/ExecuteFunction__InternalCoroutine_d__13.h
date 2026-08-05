#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Tasks::Actions { class ExecuteFunction; }
namespace System::Collections { class IEnumerator; }

#define NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION__INTERNALCOROUTINE_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E8C3820)
#define NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION__INTERNALCOROUTINE_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E8C3A30)
#define NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION__INTERNALCOROUTINE_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E8C3A90)
#define NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION__INTERNALCOROUTINE_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1E8C3A40)
#define NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION__INTERNALCOROUTINE_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E8C3810)
#define NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION__INTERNALCOROUTINE_D__13__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8C3800)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int ExecuteFunction__InternalCoroutine_d__13_TypeDefinitionIndex = 30359;

	class ExecuteFunction__InternalCoroutine_d__13 : public ::System::Object
	{
	public:
		::System::Collections::IEnumerator* routine; // 0x10
		::System::Object* __2__current; // 0x18
		::NodeCanvas::Tasks::Actions::ExecuteFunction* __4__this; // 0x20
		::System::Int32 __1__state; // 0x28

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION__INTERNALCOROUTINE_D__13__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION__INTERNALCOROUTINE_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION__INTERNALCOROUTINE_D__13_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION__INTERNALCOROUTINE_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION__INTERNALCOROUTINE_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTEFUNCTION__INTERNALCOROUTINE_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
