#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Tasks::Actions { class CameraFader; }

#define NODECANVAS_TASKS_ACTIONS_CAMERAFADER__COROUTINEFADEOUT_D__10_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A20D590)
#define NODECANVAS_TASKS_ACTIONS_CAMERAFADER__COROUTINEFADEOUT_D__10_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A20D650)
#define NODECANVAS_TASKS_ACTIONS_CAMERAFADER__COROUTINEFADEOUT_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A20D6B0)
#define NODECANVAS_TASKS_ACTIONS_CAMERAFADER__COROUTINEFADEOUT_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A20D660)
#define NODECANVAS_TASKS_ACTIONS_CAMERAFADER__COROUTINEFADEOUT_D__10_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A20D580)
#define NODECANVAS_TASKS_ACTIONS_CAMERAFADER__COROUTINEFADEOUT_D__10__CTOR_OFFSET UNITYSDK_OFFSET(0x1A20D570)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int CameraFader__CoroutineFadeOut_d__10_TypeDefinitionIndex = 26571;

	class CameraFader__CoroutineFadeOut_d__10 : public ::System::Object
	{
	public:
		::NodeCanvas::Tasks::Actions::CameraFader* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Single time; // 0x24

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_CAMERAFADER__COROUTINEFADEOUT_D__10__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_CAMERAFADER__COROUTINEFADEOUT_D__10_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_CAMERAFADER__COROUTINEFADEOUT_D__10_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_CAMERAFADER__COROUTINEFADEOUT_D__10_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_CAMERAFADER__COROUTINEFADEOUT_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_CAMERAFADER__COROUTINEFADEOUT_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
