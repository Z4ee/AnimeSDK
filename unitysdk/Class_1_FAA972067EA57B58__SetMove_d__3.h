#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FAA972067EA57B58;

#define CLASS_1_FAA972067EA57B58__SETMOVE_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18F0E560)
#define CLASS_1_FAA972067EA57B58__SETMOVE_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18F0E940)
#define CLASS_1_FAA972067EA57B58__SETMOVE_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18F0E9A0)
#define CLASS_1_FAA972067EA57B58__SETMOVE_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x18F0E950)
#define CLASS_1_FAA972067EA57B58__SETMOVE_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18F0E550)
#define CLASS_1_FAA972067EA57B58__SETMOVE_D__3__CTOR_OFFSET UNITYSDK_OFFSET(0x18F0E2D0)

inline static constexpr unsigned int Class_1_FAA972067EA57B58__SetMove_d__3_TypeDefinitionIndex = 67600;

class Class_1_FAA972067EA57B58__SetMove_d__3 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::Class_1_FAA972067EA57B58* __4__this; // 0x18
	::System::Boolean isResting; // 0x20
	::System::Int32 __1__state; // 0x24
	::System::Single _maxTime_5__2; // 0x28

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FAA972067EA57B58__SETMOVE_D__3__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAA972067EA57B58__SETMOVE_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAA972067EA57B58__SETMOVE_D__3_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAA972067EA57B58__SETMOVE_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAA972067EA57B58__SETMOVE_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAA972067EA57B58__SETMOVE_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
