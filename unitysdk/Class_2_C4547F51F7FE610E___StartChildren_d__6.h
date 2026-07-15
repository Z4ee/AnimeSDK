#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_C4547F51F7FE610E;

#define CLASS_2_C4547F51F7FE610E___STARTCHILDREN_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x170151F0)
#define CLASS_2_C4547F51F7FE610E___STARTCHILDREN_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17015300)
#define CLASS_2_C4547F51F7FE610E___STARTCHILDREN_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17015360)
#define CLASS_2_C4547F51F7FE610E___STARTCHILDREN_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x17015310)
#define CLASS_2_C4547F51F7FE610E___STARTCHILDREN_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x170151E0)
#define CLASS_2_C4547F51F7FE610E___STARTCHILDREN_D__6__CTOR_OFFSET UNITYSDK_OFFSET(0x17015140)

inline static constexpr unsigned int Class_2_C4547F51F7FE610E___StartChildren_d__6_TypeDefinitionIndex = 75897;

class Class_2_C4547F51F7FE610E___StartChildren_d__6 : public ::System::Object
{
public:
	::Class_2_C4547F51F7FE610E* __4__this; // 0x10
	::System::Object* __2__current; // 0x18
	::System::Int32 __1__state; // 0x20
	::System::Int32 _nextStartIndex_5__3; // 0x24
	::System::Single _elapsed_5__2; // 0x28

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C4547F51F7FE610E___STARTCHILDREN_D__6__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4547F51F7FE610E___STARTCHILDREN_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4547F51F7FE610E___STARTCHILDREN_D__6_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4547F51F7FE610E___STARTCHILDREN_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4547F51F7FE610E___STARTCHILDREN_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4547F51F7FE610E___STARTCHILDREN_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
