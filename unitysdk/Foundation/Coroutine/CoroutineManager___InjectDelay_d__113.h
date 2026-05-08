#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::Coroutine { class CoroutineManager___c__DisplayClass113_0; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define FOUNDATION_COROUTINE_COROUTINEMANAGER___INJECTDELAY_D__113_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B718270)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___INJECTDELAY_D__113_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B7183B0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___INJECTDELAY_D__113_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B718410)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___INJECTDELAY_D__113_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1B7183C0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___INJECTDELAY_D__113_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B718260)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER___INJECTDELAY_D__113__CTOR_OFFSET UNITYSDK_OFFSET(0x1B718250)

namespace Foundation::Coroutine
{
	inline static constexpr unsigned int CoroutineManager___InjectDelay_d__113_TypeDefinitionIndex = 7851;

	class CoroutineManager___InjectDelay_d__113 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::System::Single>* proc; // 0x10
		::Foundation::Coroutine::CoroutineManager___c__DisplayClass113_0* __8__1; // 0x18
		::System::Single __2__current; // 0x20
		::System::Int32 __1__state; // 0x24
		::System::Single delayTime; // 0x28

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___INJECTDELAY_D__113__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___INJECTDELAY_D__113_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___INJECTDELAY_D__113_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___INJECTDELAY_D__113_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___INJECTDELAY_D__113_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER___INJECTDELAY_D__113_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
