#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::IO { class FileInfo; }

#define CLASS_1_F9CED59F6AC83681__GETALLFILEINFOENUMERATOR_D__36_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C897B80)
#define CLASS_1_F9CED59F6AC83681__GETALLFILEINFOENUMERATOR_D__36_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_IO_FILEINFO__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C898200)
#define CLASS_1_F9CED59F6AC83681__GETALLFILEINFOENUMERATOR_D__36_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_IO_FILEINFO__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C898190)
#define CLASS_1_F9CED59F6AC83681__GETALLFILEINFOENUMERATOR_D__36_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C898290)
#define CLASS_1_F9CED59F6AC83681__GETALLFILEINFOENUMERATOR_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C8981F0)
#define CLASS_1_F9CED59F6AC83681__GETALLFILEINFOENUMERATOR_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C8981A0)
#define CLASS_1_F9CED59F6AC83681__GETALLFILEINFOENUMERATOR_D__36_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C897A40)
#define CLASS_1_F9CED59F6AC83681__GETALLFILEINFOENUMERATOR_D__36__CTOR_OFFSET UNITYSDK_OFFSET(0x1C88EA50)
#define CLASS_1_F9CED59F6AC83681__GETALLFILEINFOENUMERATOR_D__36___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1C897A80)

inline static constexpr unsigned int Class_1_F9CED59F6AC83681__GetAllFileInfoEnumerator_d__36_TypeDefinitionIndex = 34645;

class Class_1_F9CED59F6AC83681__GetAllFileInfoEnumerator_d__36 : public ::System::Object
{
public:
	::System::String* __3__path; // 0x10
	::System::Collections::Generic::HashSet_1<::System::String*>* excludeExtList; // 0x18
	::System::String* path; // 0x20
	::System::Collections::Generic::HashSet_1<::System::String*>* __3__excludeExtList; // 0x28
	::System::IO::FileInfo* __2__current; // 0x30
	::System::Collections::Generic::IEnumerator_1<::System::IO::FileInfo*>* __7__wrap1; // 0x38
	::System::Collections::Generic::HashSet_1<::System::String*>* __3__includeExtList; // 0x40
	::System::Collections::Generic::HashSet_1<::System::String*>* includeExtList; // 0x48
	::System::Boolean recursion; // 0x50
	::System::Boolean __3__recursion; // 0x51
	::System::Int32 __1__state; // 0x54
	::System::Int32 __l__initialThreadId; // 0x58

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681__GETALLFILEINFOENUMERATOR_D__36__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681__GETALLFILEINFOENUMERATOR_D__36_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681__GETALLFILEINFOENUMERATOR_D__36_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681__GETALLFILEINFOENUMERATOR_D__36___M__FINALLY1_OFFSET))(this);
	}

	::System::IO::FileInfo* System_Collections_Generic_IEnumerator_System_IO_FileInfo__get_Current()
	{
		return ((::System::IO::FileInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681__GETALLFILEINFOENUMERATOR_D__36_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_IO_FILEINFO__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681__GETALLFILEINFOENUMERATOR_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681__GETALLFILEINFOENUMERATOR_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::IO::FileInfo*>* System_Collections_Generic_IEnumerable_System_IO_FileInfo__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::IO::FileInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681__GETALLFILEINFOENUMERATOR_D__36_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_IO_FILEINFO__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9CED59F6AC83681__GETALLFILEINFOENUMERATOR_D__36_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
