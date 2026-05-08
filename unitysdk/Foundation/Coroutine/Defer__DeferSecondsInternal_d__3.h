#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define FOUNDATION_COROUTINE_DEFER__DEFERSECONDSINTERNAL_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B718480)
#define FOUNDATION_COROUTINE_DEFER__DEFERSECONDSINTERNAL_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B718530)
#define FOUNDATION_COROUTINE_DEFER__DEFERSECONDSINTERNAL_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B718590)
#define FOUNDATION_COROUTINE_DEFER__DEFERSECONDSINTERNAL_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1B718540)
#define FOUNDATION_COROUTINE_DEFER__DEFERSECONDSINTERNAL_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B718470)
#define FOUNDATION_COROUTINE_DEFER__DEFERSECONDSINTERNAL_D__3__CTOR_OFFSET UNITYSDK_OFFSET(0x1B718460)

namespace Foundation::Coroutine
{
	inline static constexpr unsigned int Defer__DeferSecondsInternal_d__3_TypeDefinitionIndex = 8002;

	class Defer__DeferSecondsInternal_d__3 : public ::System::Object
	{
	public:
		::System::Action* action; // 0x10
		::System::Single seconds; // 0x18
		::System::Single __2__current; // 0x1C
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFER__DEFERSECONDSINTERNAL_D__3__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFER__DEFERSECONDSINTERNAL_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFER__DEFERSECONDSINTERNAL_D__3_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFER__DEFERSECONDSINTERNAL_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFER__DEFERSECONDSINTERNAL_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_DEFER__DEFERSECONDSINTERNAL_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
