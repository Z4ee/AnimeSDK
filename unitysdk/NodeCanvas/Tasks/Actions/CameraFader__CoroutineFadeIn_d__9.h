#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Tasks::Actions { class CameraFader; }

#define NODECANVAS_TASKS_ACTIONS_CAMERAFADER__COROUTINEFADEIN_D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1EB77780)
#define NODECANVAS_TASKS_ACTIONS_CAMERAFADER__COROUTINEFADEIN_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EB77830)
#define NODECANVAS_TASKS_ACTIONS_CAMERAFADER__COROUTINEFADEIN_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EB77890)
#define NODECANVAS_TASKS_ACTIONS_CAMERAFADER__COROUTINEFADEIN_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1EB77840)
#define NODECANVAS_TASKS_ACTIONS_CAMERAFADER__COROUTINEFADEIN_D__9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EB77770)
#define NODECANVAS_TASKS_ACTIONS_CAMERAFADER__COROUTINEFADEIN_D__9__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB77760)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int CameraFader__CoroutineFadeIn_d__9_TypeDefinitionIndex = 30151;

	class CameraFader__CoroutineFadeIn_d__9 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::NodeCanvas::Tasks::Actions::CameraFader* __4__this; // 0x18
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
