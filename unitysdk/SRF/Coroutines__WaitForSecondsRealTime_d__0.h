#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SRF_COROUTINES__WAITFORSECONDSREALTIME_D__0_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1CECC190)
#define SRF_COROUTINES__WAITFORSECONDSREALTIME_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CECC210)
#define SRF_COROUTINES__WAITFORSECONDSREALTIME_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CECC270)
#define SRF_COROUTINES__WAITFORSECONDSREALTIME_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1CECC220)
#define SRF_COROUTINES__WAITFORSECONDSREALTIME_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CECC180)
#define SRF_COROUTINES__WAITFORSECONDSREALTIME_D__0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CECC170)

namespace SRF
{
	inline static constexpr unsigned int Coroutines__WaitForSecondsRealTime_d__0_TypeDefinitionIndex = 33931;

	class Coroutines__WaitForSecondsRealTime_d__0 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::System::Single time; // 0x18
		::System::Int32 __1__state; // 0x1C
		::System::Single _endTime_5__2; // 0x20

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SRF_COROUTINES__WAITFORSECONDSREALTIME_D__0__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_COROUTINES__WAITFORSECONDSREALTIME_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_COROUTINES__WAITFORSECONDSREALTIME_D__0_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_COROUTINES__WAITFORSECONDSREALTIME_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_COROUTINES__WAITFORSECONDSREALTIME_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_COROUTINES__WAITFORSECONDSREALTIME_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
