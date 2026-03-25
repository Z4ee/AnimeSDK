#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_714A2A6E232161AB;
namespace UnityEngine { class WWW; }

#define CLASS_1_714A2A6E232161AB__ASYNCGETLATENCY_D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x11930900)
#define CLASS_1_714A2A6E232161AB__ASYNCGETLATENCY_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11930BF0)
#define CLASS_1_714A2A6E232161AB__ASYNCGETLATENCY_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11930C50)
#define CLASS_1_714A2A6E232161AB__ASYNCGETLATENCY_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x11930C00)
#define CLASS_1_714A2A6E232161AB__ASYNCGETLATENCY_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x119308F0)
#define CLASS_1_714A2A6E232161AB__ASYNCGETLATENCY_D__1__CTOR_OFFSET UNITYSDK_OFFSET(0x119308E0)

inline static constexpr unsigned int Class_1_714A2A6E232161AB__AsyncGetLatency_d__1_TypeDefinitionIndex = 56670;

class Class_1_714A2A6E232161AB__AsyncGetLatency_d__1 : public ::System::Object
{
public:
	::UnityEngine::WWW* _request_5__3; // 0x10
	::Class_1_714A2A6E232161AB* __4__this; // 0x18
	::System::Object* __2__current; // 0x20
	::System::Single _startTime_5__2; // 0x28
	::System::Int32 __1__state; // 0x2C

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_714A2A6E232161AB__ASYNCGETLATENCY_D__1__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_714A2A6E232161AB__ASYNCGETLATENCY_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_714A2A6E232161AB__ASYNCGETLATENCY_D__1_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_714A2A6E232161AB__ASYNCGETLATENCY_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_714A2A6E232161AB__ASYNCGETLATENCY_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_714A2A6E232161AB__ASYNCGETLATENCY_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
