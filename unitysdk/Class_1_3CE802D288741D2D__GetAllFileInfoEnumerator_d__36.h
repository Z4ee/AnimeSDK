#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::IO { class FileInfo; }

#define CLASS_1_3CE802D288741D2D__GETALLFILEINFOENUMERATOR_D__36_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1AC024B0)
#define CLASS_1_3CE802D288741D2D__GETALLFILEINFOENUMERATOR_D__36_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_IO_FILEINFO__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AC02A80)
#define CLASS_1_3CE802D288741D2D__GETALLFILEINFOENUMERATOR_D__36_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_IO_FILEINFO__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1AC02A10)
#define CLASS_1_3CE802D288741D2D__GETALLFILEINFOENUMERATOR_D__36_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AC02B10)
#define CLASS_1_3CE802D288741D2D__GETALLFILEINFOENUMERATOR_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1AC02A70)
#define CLASS_1_3CE802D288741D2D__GETALLFILEINFOENUMERATOR_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1AC02A20)
#define CLASS_1_3CE802D288741D2D__GETALLFILEINFOENUMERATOR_D__36_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AC02340)
#define CLASS_1_3CE802D288741D2D__GETALLFILEINFOENUMERATOR_D__36__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABFA9B0)
#define CLASS_1_3CE802D288741D2D__GETALLFILEINFOENUMERATOR_D__36___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1AC02410)

inline static constexpr unsigned int Class_1_3CE802D288741D2D__GetAllFileInfoEnumerator_d__36_TypeDefinitionIndex = 33508;

class Class_1_3CE802D288741D2D__GetAllFileInfoEnumerator_d__36 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::String*>* __3__includeExtList; // 0x10
	::System::Collections::Generic::HashSet_1<::System::String*>* includeExtList; // 0x18
	::System::IO::FileInfo* __2__current; // 0x20
	::System::Collections::Generic::HashSet_1<::System::String*>* excludeExtList; // 0x28
	::System::Collections::Generic::HashSet_1<::System::String*>* __3__excludeExtList; // 0x30
	::System::String* __3__path; // 0x38
	::System::Collections::Generic::IEnumerator_1<::System::IO::FileInfo*>* __7__wrap1; // 0x40
	::System::String* path; // 0x48
	::System::Int32 __l__initialThreadId; // 0x50
	::System::Int32 __1__state; // 0x54
	::System::Boolean __3__recursion; // 0x58
	::System::Boolean recursion; // 0x59

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D__GETALLFILEINFOENUMERATOR_D__36__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D__GETALLFILEINFOENUMERATOR_D__36_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D__GETALLFILEINFOENUMERATOR_D__36_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D__GETALLFILEINFOENUMERATOR_D__36___M__FINALLY1_OFFSET))(this);
	}

	::System::IO::FileInfo* System_Collections_Generic_IEnumerator_System_IO_FileInfo__get_Current()
	{
		return ((::System::IO::FileInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D__GETALLFILEINFOENUMERATOR_D__36_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_IO_FILEINFO__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D__GETALLFILEINFOENUMERATOR_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D__GETALLFILEINFOENUMERATOR_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::IO::FileInfo*>* System_Collections_Generic_IEnumerable_System_IO_FileInfo__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::IO::FileInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D__GETALLFILEINFOENUMERATOR_D__36_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_IO_FILEINFO__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CE802D288741D2D__GETALLFILEINFOENUMERATOR_D__36_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
