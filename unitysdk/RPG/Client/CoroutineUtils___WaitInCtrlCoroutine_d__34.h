#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ICoroutineGroupController; }
namespace UnityEngine { class Coroutine; }

#define RPG_CLIENT_COROUTINEUTILS___WAITINCTRLCOROUTINE_D__34_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1833F4B0)
#define RPG_CLIENT_COROUTINEUTILS___WAITINCTRLCOROUTINE_D__34_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1833F660)
#define RPG_CLIENT_COROUTINEUTILS___WAITINCTRLCOROUTINE_D__34_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1833F6C0)
#define RPG_CLIENT_COROUTINEUTILS___WAITINCTRLCOROUTINE_D__34_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1833F670)
#define RPG_CLIENT_COROUTINEUTILS___WAITINCTRLCOROUTINE_D__34_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1833F4A0)
#define RPG_CLIENT_COROUTINEUTILS___WAITINCTRLCOROUTINE_D__34__CTOR_OFFSET UNITYSDK_OFFSET(0x1833E9E0)

namespace RPG::Client
{
	inline static constexpr unsigned int CoroutineUtils___WaitInCtrlCoroutine_d__34_TypeDefinitionIndex = 9470;

	class CoroutineUtils___WaitInCtrlCoroutine_d__34 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::RPG::Client::ICoroutineGroupController* ctrl; // 0x18
		::UnityEngine::Coroutine* coroutine; // 0x20
		::System::Int32 __1__state; // 0x28

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS___WAITINCTRLCOROUTINE_D__34__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS___WAITINCTRLCOROUTINE_D__34_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS___WAITINCTRLCOROUTINE_D__34_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS___WAITINCTRLCOROUTINE_D__34_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS___WAITINCTRLCOROUTINE_D__34_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS___WAITINCTRLCOROUTINE_D__34_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
