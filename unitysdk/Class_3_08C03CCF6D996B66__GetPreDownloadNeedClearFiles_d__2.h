#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_08C03CCF6D996B66;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_08C03CCF6D996B66__GETPREDOWNLOADNEEDCLEARFILES_D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1291E7F0)
#define CLASS_3_08C03CCF6D996B66__GETPREDOWNLOADNEEDCLEARFILES_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1291EF40)
#define CLASS_3_08C03CCF6D996B66__GETPREDOWNLOADNEEDCLEARFILES_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1291EED0)
#define CLASS_3_08C03CCF6D996B66__GETPREDOWNLOADNEEDCLEARFILES_D__2_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1291EFC0)
#define CLASS_3_08C03CCF6D996B66__GETPREDOWNLOADNEEDCLEARFILES_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1291EF30)
#define CLASS_3_08C03CCF6D996B66__GETPREDOWNLOADNEEDCLEARFILES_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1291EEE0)
#define CLASS_3_08C03CCF6D996B66__GETPREDOWNLOADNEEDCLEARFILES_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1291E670)
#define CLASS_3_08C03CCF6D996B66__GETPREDOWNLOADNEEDCLEARFILES_D__2__CTOR_OFFSET UNITYSDK_OFFSET(0x1291E620)
#define CLASS_3_08C03CCF6D996B66__GETPREDOWNLOADNEEDCLEARFILES_D__2___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1291E740)

inline static constexpr unsigned int Class_3_08C03CCF6D996B66__GetPreDownloadNeedClearFiles_d__2_TypeDefinitionIndex = 54878;

class Class_3_08C03CCF6D996B66__GetPreDownloadNeedClearFiles_d__2 : public ::System::Object
{
public:
	::System::Collections::Generic::IEnumerator_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* __7__wrap3; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* _excludeParentDirnames_5__3; // 0x18
	::Class_3_08C03CCF6D996B66* __4__this; // 0x20
	::System::Tuple_2<::System::String*, ::System::Boolean>* __2__current; // 0x28
	::System::Collections::Generic::HashSet_1<::System::String*>* _notClearFileNameList_5__2; // 0x30
	::System::Int32 __l__initialThreadId; // 0x38
	::System::Int32 __1__state; // 0x3C
	::System::Boolean usePersistIndex; // 0x40
	::System::Boolean __3__usePersistIndex; // 0x41

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_08C03CCF6D996B66__GETPREDOWNLOADNEEDCLEARFILES_D__2__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_08C03CCF6D996B66__GETPREDOWNLOADNEEDCLEARFILES_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_08C03CCF6D996B66__GETPREDOWNLOADNEEDCLEARFILES_D__2_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_08C03CCF6D996B66__GETPREDOWNLOADNEEDCLEARFILES_D__2___M__FINALLY1_OFFSET))(this);
	}

	::System::Tuple_2<::System::String*, ::System::Boolean>* System_Collections_Generic_IEnumerator_System_Tuple_System_String_System_Boolean___get_Current()
	{
		return ((::System::Tuple_2<::System::String*, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_08C03CCF6D996B66__GETPREDOWNLOADNEEDCLEARFILES_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_08C03CCF6D996B66__GETPREDOWNLOADNEEDCLEARFILES_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_08C03CCF6D996B66__GETPREDOWNLOADNEEDCLEARFILES_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* System_Collections_Generic_IEnumerable_System_Tuple_System_String_System_Boolean___GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_08C03CCF6D996B66__GETPREDOWNLOADNEEDCLEARFILES_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_08C03CCF6D996B66__GETPREDOWNLOADNEEDCLEARFILES_D__2_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
