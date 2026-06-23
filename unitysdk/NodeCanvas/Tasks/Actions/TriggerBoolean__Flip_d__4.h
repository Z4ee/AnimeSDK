#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Tasks::Actions { class TriggerBoolean; }

#define NODECANVAS_TASKS_ACTIONS_TRIGGERBOOLEAN__FLIP_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D80B880)
#define NODECANVAS_TASKS_ACTIONS_TRIGGERBOOLEAN__FLIP_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D80B8E0)
#define NODECANVAS_TASKS_ACTIONS_TRIGGERBOOLEAN__FLIP_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D80B940)
#define NODECANVAS_TASKS_ACTIONS_TRIGGERBOOLEAN__FLIP_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D80B8F0)
#define NODECANVAS_TASKS_ACTIONS_TRIGGERBOOLEAN__FLIP_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D80B870)
#define NODECANVAS_TASKS_ACTIONS_TRIGGERBOOLEAN__FLIP_D__4__CTOR_OFFSET UNITYSDK_OFFSET(0x1D80B860)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int TriggerBoolean__Flip_d__4_TypeDefinitionIndex = 29133;

	class TriggerBoolean__Flip_d__4 : public ::System::Object
	{
	public:
		::NodeCanvas::Tasks::Actions::TriggerBoolean* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
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
