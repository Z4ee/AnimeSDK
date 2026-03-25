#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_C7353016387F9A86;

#define CLASS_2_C7353016387F9A86__PERSISTENTLOAD_D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8D56520)
#define CLASS_2_C7353016387F9A86__PERSISTENTLOAD_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x8D56560)
#define CLASS_2_C7353016387F9A86__PERSISTENTLOAD_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x8D565C0)
#define CLASS_2_C7353016387F9A86__PERSISTENTLOAD_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x8D56570)
#define CLASS_2_C7353016387F9A86__PERSISTENTLOAD_D__14_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8D56510)
#define CLASS_2_C7353016387F9A86__PERSISTENTLOAD_D__14__CTOR_OFFSET UNITYSDK_OFFSET(0x8D55480)

inline static constexpr unsigned int Class_2_C7353016387F9A86__PersistentLoad_d__14_TypeDefinitionIndex = 60537;

class Class_2_C7353016387F9A86__PersistentLoad_d__14 : public ::System::Object
{
public:
	::Class_2_C7353016387F9A86* __4__this; // 0x10
	::System::Object* __2__current; // 0x18
	::System::Int32 __1__state; // 0x20

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86__PERSISTENTLOAD_D__14__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86__PERSISTENTLOAD_D__14_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86__PERSISTENTLOAD_D__14_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86__PERSISTENTLOAD_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86__PERSISTENTLOAD_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86__PERSISTENTLOAD_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
