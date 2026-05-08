#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Threading { class Thread; }

#define PARADOXNOTION_SERVICES_THREADER__THREADMONITOR_D__16_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B7EDC70)
#define PARADOXNOTION_SERVICES_THREADER__THREADMONITOR_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B7EDDC0)
#define PARADOXNOTION_SERVICES_THREADER__THREADMONITOR_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B7EDE20)
#define PARADOXNOTION_SERVICES_THREADER__THREADMONITOR_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1B7EDDD0)
#define PARADOXNOTION_SERVICES_THREADER__THREADMONITOR_D__16_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B7EDC60)
#define PARADOXNOTION_SERVICES_THREADER__THREADMONITOR_D__16__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7EDC50)

namespace ParadoxNotion::Services
{
	inline static constexpr unsigned int Threader__ThreadMonitor_d__16_TypeDefinitionIndex = 27239;

	class Threader__ThreadMonitor_d__16 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::System::Threading::Thread* thread; // 0x18
		::System::Action* callback; // 0x20
		::System::Int32 __1__state; // 0x28

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_THREADER__THREADMONITOR_D__16__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_THREADER__THREADMONITOR_D__16_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_THREADER__THREADMONITOR_D__16_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_THREADER__THREADMONITOR_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_THREADER__THREADMONITOR_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_THREADER__THREADMONITOR_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
