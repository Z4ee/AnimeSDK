#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::IO { class FileInfo; }

#define CLASS_1_3072A258183F0287__ENUMERATEFILES_D__28_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xD81A080)
#define CLASS_1_3072A258183F0287__ENUMERATEFILES_D__28_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_IO_FILEINFO__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xD81A6E0)
#define CLASS_1_3072A258183F0287__ENUMERATEFILES_D__28_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_IO_FILEINFO__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD81A670)
#define CLASS_1_3072A258183F0287__ENUMERATEFILES_D__28_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xD81A740)
#define CLASS_1_3072A258183F0287__ENUMERATEFILES_D__28_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD81A6D0)
#define CLASS_1_3072A258183F0287__ENUMERATEFILES_D__28_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xD81A680)
#define CLASS_1_3072A258183F0287__ENUMERATEFILES_D__28_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD819F40)
#define CLASS_1_3072A258183F0287__ENUMERATEFILES_D__28__CTOR_OFFSET UNITYSDK_OFFSET(0xD8141D0)
#define CLASS_1_3072A258183F0287__ENUMERATEFILES_D__28___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xD819F80)

inline static constexpr unsigned int Class_1_3072A258183F0287__EnumerateFiles_d__28_TypeDefinitionIndex = 59782;

class Class_1_3072A258183F0287__EnumerateFiles_d__28 : public ::System::Object
{
public:
	::System::String* rootPath; // 0x10
	::System::Collections::Generic::HashSet_1<::System::String*>* excludeList; // 0x18
	::System::IO::FileInfo* __2__current; // 0x20
	::System::Collections::Generic::IEnumerator_1<::System::IO::FileInfo*>* __7__wrap1; // 0x28
	::System::Collections::Generic::HashSet_1<::System::String*>* __3__excludeList; // 0x30
	::System::String* __3__rootPath; // 0x38
	::System::Int32 __l__initialThreadId; // 0x40
	::System::Int32 __1__state; // 0x44

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287__ENUMERATEFILES_D__28__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287__ENUMERATEFILES_D__28_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287__ENUMERATEFILES_D__28_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287__ENUMERATEFILES_D__28___M__FINALLY1_OFFSET))(this);
	}

	::System::IO::FileInfo* System_Collections_Generic_IEnumerator_System_IO_FileInfo__get_Current()
	{
		return ((::System::IO::FileInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287__ENUMERATEFILES_D__28_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_IO_FILEINFO__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287__ENUMERATEFILES_D__28_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287__ENUMERATEFILES_D__28_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::IO::FileInfo*>* System_Collections_Generic_IEnumerable_System_IO_FileInfo__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::IO::FileInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287__ENUMERATEFILES_D__28_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_IO_FILEINFO__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287__ENUMERATEFILES_D__28_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
