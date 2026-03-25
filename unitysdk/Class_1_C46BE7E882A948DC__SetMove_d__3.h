#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C46BE7E882A948DC;

#define CLASS_1_C46BE7E882A948DC__SETMOVE_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x105039D0)
#define CLASS_1_C46BE7E882A948DC__SETMOVE_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10503DF0)
#define CLASS_1_C46BE7E882A948DC__SETMOVE_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10503E50)
#define CLASS_1_C46BE7E882A948DC__SETMOVE_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x10503E00)
#define CLASS_1_C46BE7E882A948DC__SETMOVE_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x105039C0)
#define CLASS_1_C46BE7E882A948DC__SETMOVE_D__3__CTOR_OFFSET UNITYSDK_OFFSET(0x105037A0)

inline static constexpr unsigned int Class_1_C46BE7E882A948DC__SetMove_d__3_TypeDefinitionIndex = 57961;

class Class_1_C46BE7E882A948DC__SetMove_d__3 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::Class_1_C46BE7E882A948DC* __4__this; // 0x18
	::System::Single _maxTime_5__2; // 0x20
	::System::Boolean isResting; // 0x24
	::System::Int32 __1__state; // 0x28

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C46BE7E882A948DC__SETMOVE_D__3__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C46BE7E882A948DC__SETMOVE_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C46BE7E882A948DC__SETMOVE_D__3_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C46BE7E882A948DC__SETMOVE_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C46BE7E882A948DC__SETMOVE_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C46BE7E882A948DC__SETMOVE_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
