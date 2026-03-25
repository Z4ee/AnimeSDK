#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_CEF86C33D203CEB1;
namespace System::Collections { class IEnumerator; }

#define CLASS_3_CEF86C33D203CEB1__PERSISTENTLOAD_D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8CC9250)
#define CLASS_3_CEF86C33D203CEB1__PERSISTENTLOAD_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x8CC9430)
#define CLASS_3_CEF86C33D203CEB1__PERSISTENTLOAD_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x8CC9490)
#define CLASS_3_CEF86C33D203CEB1__PERSISTENTLOAD_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x8CC9440)
#define CLASS_3_CEF86C33D203CEB1__PERSISTENTLOAD_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8CC9240)
#define CLASS_3_CEF86C33D203CEB1__PERSISTENTLOAD_D__2__CTOR_OFFSET UNITYSDK_OFFSET(0x8CC8760)

inline static constexpr unsigned int Class_3_CEF86C33D203CEB1__PersistentLoad_d__2_TypeDefinitionIndex = 60569;

class Class_3_CEF86C33D203CEB1__PersistentLoad_d__2 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::System::Collections::IEnumerator* _iter_5__2; // 0x18
	::Class_3_CEF86C33D203CEB1* __4__this; // 0x20
	::System::Int32 __1__state; // 0x28

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_CEF86C33D203CEB1__PERSISTENTLOAD_D__2__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CEF86C33D203CEB1__PERSISTENTLOAD_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CEF86C33D203CEB1__PERSISTENTLOAD_D__2_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CEF86C33D203CEB1__PERSISTENTLOAD_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CEF86C33D203CEB1__PERSISTENTLOAD_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CEF86C33D203CEB1__PERSISTENTLOAD_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
