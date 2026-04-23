#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_2FC2494FD325AA4E;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_2FC2494FD325AA4E__GETPREDOWNLOADNEEDCLEARFILES_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x97792E0)
#define CLASS_3_2FC2494FD325AA4E__GETPREDOWNLOADNEEDCLEARFILES_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9779AA0)
#define CLASS_3_2FC2494FD325AA4E__GETPREDOWNLOADNEEDCLEARFILES_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9779A30)
#define CLASS_3_2FC2494FD325AA4E__GETPREDOWNLOADNEEDCLEARFILES_D__3_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9779B20)
#define CLASS_3_2FC2494FD325AA4E__GETPREDOWNLOADNEEDCLEARFILES_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9779A90)
#define CLASS_3_2FC2494FD325AA4E__GETPREDOWNLOADNEEDCLEARFILES_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x9779A40)
#define CLASS_3_2FC2494FD325AA4E__GETPREDOWNLOADNEEDCLEARFILES_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9779160)
#define CLASS_3_2FC2494FD325AA4E__GETPREDOWNLOADNEEDCLEARFILES_D__3__CTOR_OFFSET UNITYSDK_OFFSET(0x9778F10)
#define CLASS_3_2FC2494FD325AA4E__GETPREDOWNLOADNEEDCLEARFILES_D__3___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x9779230)

inline static constexpr unsigned int Class_3_2FC2494FD325AA4E__GetPreDownloadNeedClearFiles_d__3_TypeDefinitionIndex = 54880;

class Class_3_2FC2494FD325AA4E__GetPreDownloadNeedClearFiles_d__3 : public ::System::Object
{
public:
	::System::Collections::Generic::IEnumerator_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* __7__wrap3; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* _excludeParentDirnames_5__3; // 0x18
	::System::Collections::Generic::HashSet_1<::System::String*>* _notClearFileNameList_5__2; // 0x20
	::Class_3_2FC2494FD325AA4E* __4__this; // 0x28
	::System::Tuple_2<::System::String*, ::System::Boolean>* __2__current; // 0x30
	::System::Boolean __3__usePersistIndex; // 0x38
	::System::Boolean usePersistIndex; // 0x39
	::System::Int32 __1__state; // 0x3C
	::System::Int32 __l__initialThreadId; // 0x40

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_2FC2494FD325AA4E__GETPREDOWNLOADNEEDCLEARFILES_D__3__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2FC2494FD325AA4E__GETPREDOWNLOADNEEDCLEARFILES_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2FC2494FD325AA4E__GETPREDOWNLOADNEEDCLEARFILES_D__3_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2FC2494FD325AA4E__GETPREDOWNLOADNEEDCLEARFILES_D__3___M__FINALLY1_OFFSET))(this);
	}

	::System::Tuple_2<::System::String*, ::System::Boolean>* System_Collections_Generic_IEnumerator_System_Tuple_System_String_System_Boolean___get_Current()
	{
		return ((::System::Tuple_2<::System::String*, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2FC2494FD325AA4E__GETPREDOWNLOADNEEDCLEARFILES_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2FC2494FD325AA4E__GETPREDOWNLOADNEEDCLEARFILES_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2FC2494FD325AA4E__GETPREDOWNLOADNEEDCLEARFILES_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* System_Collections_Generic_IEnumerable_System_Tuple_System_String_System_Boolean___GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2FC2494FD325AA4E__GETPREDOWNLOADNEEDCLEARFILES_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2FC2494FD325AA4E__GETPREDOWNLOADNEEDCLEARFILES_D__3_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
