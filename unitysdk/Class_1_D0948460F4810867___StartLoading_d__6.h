#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D0948460F4810867;

#define CLASS_1_D0948460F4810867___STARTLOADING_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x11803BC0)
#define CLASS_1_D0948460F4810867___STARTLOADING_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x118043A0)
#define CLASS_1_D0948460F4810867___STARTLOADING_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11804400)
#define CLASS_1_D0948460F4810867___STARTLOADING_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x118043B0)
#define CLASS_1_D0948460F4810867___STARTLOADING_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11803BB0)
#define CLASS_1_D0948460F4810867___STARTLOADING_D__6__CTOR_OFFSET UNITYSDK_OFFSET(0x118039F0)

inline static constexpr unsigned int Class_1_D0948460F4810867___StartLoading_d__6_TypeDefinitionIndex = 48088;

class Class_1_D0948460F4810867___StartLoading_d__6 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::Class_1_D0948460F4810867* __4__this; // 0x18
	::System::Int32 __1__state; // 0x20
	::System::Int32 _displayProgress_5__2; // 0x24
	::System::Int32 _toProgress_5__3; // 0x28

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D0948460F4810867___STARTLOADING_D__6__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0948460F4810867___STARTLOADING_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0948460F4810867___STARTLOADING_D__6_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0948460F4810867___STARTLOADING_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0948460F4810867___STARTLOADING_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0948460F4810867___STARTLOADING_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
