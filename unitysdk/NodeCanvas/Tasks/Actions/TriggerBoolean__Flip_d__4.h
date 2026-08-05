#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Tasks::Actions { class TriggerBoolean; }

#define NODECANVAS_TASKS_ACTIONS_TRIGGERBOOLEAN__FLIP_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1EBC1DE0)
#define NODECANVAS_TASKS_ACTIONS_TRIGGERBOOLEAN__FLIP_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EBC1E40)
#define NODECANVAS_TASKS_ACTIONS_TRIGGERBOOLEAN__FLIP_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EBC1EA0)
#define NODECANVAS_TASKS_ACTIONS_TRIGGERBOOLEAN__FLIP_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1EBC1E50)
#define NODECANVAS_TASKS_ACTIONS_TRIGGERBOOLEAN__FLIP_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EBC1DD0)
#define NODECANVAS_TASKS_ACTIONS_TRIGGERBOOLEAN__FLIP_D__4__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBC1DC0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int TriggerBoolean__Flip_d__4_TypeDefinitionIndex = 30369;

	class TriggerBoolean__Flip_d__4 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::NodeCanvas::Tasks::Actions::TriggerBoolean* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_TRIGGERBOOLEAN__FLIP_D__4__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_TRIGGERBOOLEAN__FLIP_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_TRIGGERBOOLEAN__FLIP_D__4_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_TRIGGERBOOLEAN__FLIP_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_TRIGGERBOOLEAN__FLIP_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_TRIGGERBOOLEAN__FLIP_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
