#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_61;
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_A3E915130CAC9AC0___USEPROFILE_D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18902B00)
#define CLASS_1_A3E915130CAC9AC0___USEPROFILE_D__18_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18902E30)
#define CLASS_1_A3E915130CAC9AC0___USEPROFILE_D__18_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18902DC0)
#define CLASS_1_A3E915130CAC9AC0___USEPROFILE_D__18_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18902EB0)
#define CLASS_1_A3E915130CAC9AC0___USEPROFILE_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18902E20)
#define CLASS_1_A3E915130CAC9AC0___USEPROFILE_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x18902DD0)
#define CLASS_1_A3E915130CAC9AC0___USEPROFILE_D__18_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18902AF0)
#define CLASS_1_A3E915130CAC9AC0___USEPROFILE_D__18__CTOR_OFFSET UNITYSDK_OFFSET(0x189023B0)

inline static constexpr unsigned int Class_1_A3E915130CAC9AC0___UseProfile_d__18_TypeDefinitionIndex = 38616;

class Class_1_A3E915130CAC9AC0___UseProfile_d__18 : public ::System::Object
{
public:
	::System::String* header; // 0x10
	::Class_0_16E4307DCC419505_61* loader; // 0x18
	::Class_0_16E4307DCC419505_61* __3__loader; // 0x20
	::System::String* __3__header; // 0x28
	::System::Object* __2__current; // 0x30
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
