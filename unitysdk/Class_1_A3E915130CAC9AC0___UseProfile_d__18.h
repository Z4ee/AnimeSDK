#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_80;
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_A3E915130CAC9AC0___USEPROFILE_D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A4B1580)
#define CLASS_1_A3E915130CAC9AC0___USEPROFILE_D__18_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A4B1950)
#define CLASS_1_A3E915130CAC9AC0___USEPROFILE_D__18_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A4B18E0)
#define CLASS_1_A3E915130CAC9AC0___USEPROFILE_D__18_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A4B19D0)
#define CLASS_1_A3E915130CAC9AC0___USEPROFILE_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A4B1940)
#define CLASS_1_A3E915130CAC9AC0___USEPROFILE_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A4B18F0)
#define CLASS_1_A3E915130CAC9AC0___USEPROFILE_D__18_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A4B1570)
#define CLASS_1_A3E915130CAC9AC0___USEPROFILE_D__18__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4B0E10)

inline static constexpr unsigned int Class_1_A3E915130CAC9AC0___UseProfile_d__18_TypeDefinitionIndex = 40297;

class Class_1_A3E915130CAC9AC0___UseProfile_d__18 : public ::System::Object
{
public:
	::System::String* __3__header; // 0x10
	::Class_0_16E4307DCC419505_80* loader; // 0x18
	::System::Object* __2__current; // 0x20
	::Class_0_16E4307DCC419505_80* __3__loader; // 0x28
	::System::String* header; // 0x30
	::System::Int32 __1__state; // 0x38
	::System::Int32 __l__initialThreadId; // 0x3C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A3E915130CAC9AC0___USEPROFILE_D__18__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3E915130CAC9AC0___USEPROFILE_D__18_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3E915130CAC9AC0___USEPROFILE_D__18_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3E915130CAC9AC0___USEPROFILE_D__18_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3E915130CAC9AC0___USEPROFILE_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3E915130CAC9AC0___USEPROFILE_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Object*>* System_Collections_Generic_IEnumerable_System_Object__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3E915130CAC9AC0___USEPROFILE_D__18_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3E915130CAC9AC0___USEPROFILE_D__18_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
