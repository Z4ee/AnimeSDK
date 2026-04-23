#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/HashSet_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::IO { class FileInfo; }

#define CLASS_1_3072A258183F0287__ENUMERATEFILES_D__29_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x11ACD050)
#define CLASS_1_3072A258183F0287__ENUMERATEFILES_D__29_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_IO_FILEINFO__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x11ACD780)
#define CLASS_1_3072A258183F0287__ENUMERATEFILES_D__29_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_IO_FILEINFO__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11ACD710)
#define CLASS_1_3072A258183F0287__ENUMERATEFILES_D__29_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x11ACD7F0)
#define CLASS_1_3072A258183F0287__ENUMERATEFILES_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11ACD770)
#define CLASS_1_3072A258183F0287__ENUMERATEFILES_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x11ACD720)
#define CLASS_1_3072A258183F0287__ENUMERATEFILES_D__29_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11ACCEB0)
#define CLASS_1_3072A258183F0287__ENUMERATEFILES_D__29__CTOR_OFFSET UNITYSDK_OFFSET(0x11AC76D0)
#define CLASS_1_3072A258183F0287__ENUMERATEFILES_D__29___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x11ACCFA0)
#define CLASS_1_3072A258183F0287__ENUMERATEFILES_D__29___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x11ACCF90)

inline static constexpr unsigned int Class_1_3072A258183F0287__EnumerateFiles_d__29_TypeDefinitionIndex = 55024;

class Class_1_3072A258183F0287__EnumerateFiles_d__29 : public ::System::Object
{
public:
	::System::IO::FileInfo* __2__current; // 0x10
	::System::Collections::Generic::IEnumerator_1<::System::IO::FileInfo*>* __7__wrap1; // 0x18
	::System::Collections::Generic::HashSet_1<::System::String*>* __3__excludeList; // 0x20
	::System::Collections::Generic::HashSet_1<::System::String*>* exts; // 0x28
	::System::IO::FileInfo* _fileInfo_5__3; // 0x30
	::System::Collections::Generic::HashSet_1<::System::String*>* excludeList; // 0x38
	::System::Collections::Generic::HashSet_1<::System::String*>* __3__exts; // 0x40
	::System::String* __3__rootPath; // 0x48
	::System::String* rootPath; // 0x50
	::System::Collections::Generic::HashSet_1_Enumerator<::System::String*> __7__wrap3; // 0x58
	::System::Int32 __l__initialThreadId; // 0x70
	::System::Int32 __1__state; // 0x74

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287__ENUMERATEFILES_D__29__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287__ENUMERATEFILES_D__29_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287__ENUMERATEFILES_D__29_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287__ENUMERATEFILES_D__29___M__FINALLY1_OFFSET))(this);
	}

	::System::Void __m__Finally2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287__ENUMERATEFILES_D__29___M__FINALLY2_OFFSET))(this);
	}

	::System::IO::FileInfo* System_Collections_Generic_IEnumerator_System_IO_FileInfo__get_Current()
	{
		return ((::System::IO::FileInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287__ENUMERATEFILES_D__29_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_IO_FILEINFO__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287__ENUMERATEFILES_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287__ENUMERATEFILES_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::IO::FileInfo*>* System_Collections_Generic_IEnumerable_System_IO_FileInfo__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::IO::FileInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287__ENUMERATEFILES_D__29_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_IO_FILEINFO__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3072A258183F0287__ENUMERATEFILES_D__29_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
