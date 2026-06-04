#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1A304D4C36D43D86;
namespace System::Collections { class IEnumerator; }

#define CLASS_2_1A304D4C36D43D86__PERSISTENTLOAD_D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xAC72300)
#define CLASS_2_1A304D4C36D43D86__PERSISTENTLOAD_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAC72500)
#define CLASS_2_1A304D4C36D43D86__PERSISTENTLOAD_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAC72560)
#define CLASS_2_1A304D4C36D43D86__PERSISTENTLOAD_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xAC72510)
#define CLASS_2_1A304D4C36D43D86__PERSISTENTLOAD_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAC722F0)
#define CLASS_2_1A304D4C36D43D86__PERSISTENTLOAD_D__8__CTOR_OFFSET UNITYSDK_OFFSET(0xAC722E0)

inline static constexpr unsigned int Class_2_1A304D4C36D43D86__PersistentLoad_d__8_TypeDefinitionIndex = 68961;

class Class_2_1A304D4C36D43D86__PersistentLoad_d__8 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::Class_2_1A304D4C36D43D86* __4__this; // 0x18
	::System::Collections::IEnumerator* _iter_5__2; // 0x20
	::System::Int32 __1__state; // 0x28

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86__PERSISTENTLOAD_D__8__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86__PERSISTENTLOAD_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86__PERSISTENTLOAD_D__8_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86__PERSISTENTLOAD_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86__PERSISTENTLOAD_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A304D4C36D43D86__PERSISTENTLOAD_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
