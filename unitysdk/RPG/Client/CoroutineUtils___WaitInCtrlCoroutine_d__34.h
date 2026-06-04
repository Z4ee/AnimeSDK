#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ICoroutineGroupController; }
namespace UnityEngine { class Coroutine; }

#define RPG_CLIENT_COROUTINEUTILS___WAITINCTRLCOROUTINE_D__34_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1AC12EB0)
#define RPG_CLIENT_COROUTINEUTILS___WAITINCTRLCOROUTINE_D__34_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1AC130F0)
#define RPG_CLIENT_COROUTINEUTILS___WAITINCTRLCOROUTINE_D__34_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1AC13150)
#define RPG_CLIENT_COROUTINEUTILS___WAITINCTRLCOROUTINE_D__34_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1AC13100)
#define RPG_CLIENT_COROUTINEUTILS___WAITINCTRLCOROUTINE_D__34_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AC12EA0)
#define RPG_CLIENT_COROUTINEUTILS___WAITINCTRLCOROUTINE_D__34__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC123B0)

namespace RPG::Client
{
	inline static constexpr unsigned int CoroutineUtils___WaitInCtrlCoroutine_d__34_TypeDefinitionIndex = 33437;

	class CoroutineUtils___WaitInCtrlCoroutine_d__34 : public ::System::Object
	{
	public:
		::UnityEngine::Coroutine* coroutine; // 0x10
		::System::Object* __2__current; // 0x18
		::RPG::Client::ICoroutineGroupController* ctrl; // 0x20
		::System::Int32 __1__state; // 0x28

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS___WAITINCTRLCOROUTINE_D__34__CTOR_OFFSET))(this, a1);
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
