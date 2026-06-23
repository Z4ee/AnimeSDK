#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Tasks::Actions { class CameraFader; }

#define NODECANVAS_TASKS_ACTIONS_CAMERAFADER__COROUTINEFADEIN_D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D7C4AA0)
#define NODECANVAS_TASKS_ACTIONS_CAMERAFADER__COROUTINEFADEIN_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D7C4B50)
#define NODECANVAS_TASKS_ACTIONS_CAMERAFADER__COROUTINEFADEIN_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D7C4BB0)
#define NODECANVAS_TASKS_ACTIONS_CAMERAFADER__COROUTINEFADEIN_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D7C4B60)
#define NODECANVAS_TASKS_ACTIONS_CAMERAFADER__COROUTINEFADEIN_D__9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D7C4A90)
#define NODECANVAS_TASKS_ACTIONS_CAMERAFADER__COROUTINEFADEIN_D__9__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C4A80)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int CameraFader__CoroutineFadeIn_d__9_TypeDefinitionIndex = 30620;

	class CameraFader__CoroutineFadeIn_d__9 : public ::System::Object
	{
	public:
		::NodeCanvas::Tasks::Actions::CameraFader* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Single time; // 0x24

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_CAMERAFADER__COROUTINEFADEIN_D__9__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_CAMERAFADER__COROUTINEFADEIN_D__9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_CAMERAFADER__COROUTINEFADEIN_D__9_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_CAMERAFADER__COROUTINEFADEIN_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_CAMERAFADER__COROUTINEFADEIN_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_CAMERAFADER__COROUTINEFADEIN_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
