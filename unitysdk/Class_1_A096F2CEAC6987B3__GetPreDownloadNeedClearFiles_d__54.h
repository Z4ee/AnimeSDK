#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"

class Class_1_A096F2CEAC6987B3;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::IO { class FileInfo; }

#define CLASS_1_A096F2CEAC6987B3__GETPREDOWNLOADNEEDCLEARFILES_D__54_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE87C0D0)
#define CLASS_1_A096F2CEAC6987B3__GETPREDOWNLOADNEEDCLEARFILES_D__54_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xE87CAE0)
#define CLASS_1_A096F2CEAC6987B3__GETPREDOWNLOADNEEDCLEARFILES_D__54_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE87CA70)
#define CLASS_1_A096F2CEAC6987B3__GETPREDOWNLOADNEEDCLEARFILES_D__54_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xE87CB60)
#define CLASS_1_A096F2CEAC6987B3__GETPREDOWNLOADNEEDCLEARFILES_D__54_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE87CAD0)
#define CLASS_1_A096F2CEAC6987B3__GETPREDOWNLOADNEEDCLEARFILES_D__54_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xE87CA80)
#define CLASS_1_A096F2CEAC6987B3__GETPREDOWNLOADNEEDCLEARFILES_D__54_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE87BF90)
#define CLASS_1_A096F2CEAC6987B3__GETPREDOWNLOADNEEDCLEARFILES_D__54__CTOR_OFFSET UNITYSDK_OFFSET(0xE87B1E0)
#define CLASS_1_A096F2CEAC6987B3__GETPREDOWNLOADNEEDCLEARFILES_D__54___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xE87BFD0)

inline static constexpr unsigned int Class_1_A096F2CEAC6987B3__GetPreDownloadNeedClearFiles_d__54_TypeDefinitionIndex = 59596;

class Class_1_A096F2CEAC6987B3__GetPreDownloadNeedClearFiles_d__54 : public ::System::Object
{
public:
	::System::Collections::Generic::IEnumerator_1<::System::IO::FileInfo*>* __7__wrap2; // 0x10
	::Class_1_A096F2CEAC6987B3* __4__this; // 0x18
	::System::Collections::Generic::HashSet_1<::RPG::Client::ByteHash16>* _hpatchBlocks_5__2; // 0x20
	::System::Tuple_2<::System::String*, ::System::Boolean>* __2__current; // 0x28
	::System::Int32 __l__initialThreadId; // 0x30
	::System::Int32 __1__state; // 0x34

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A096F2CEAC6987B3__GETPREDOWNLOADNEEDCLEARFILES_D__54__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A096F2CEAC6987B3__GETPREDOWNLOADNEEDCLEARFILES_D__54_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A096F2CEAC6987B3__GETPREDOWNLOADNEEDCLEARFILES_D__54_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A096F2CEAC6987B3__GETPREDOWNLOADNEEDCLEARFILES_D__54___M__FINALLY1_OFFSET))(this);
	}

	::System::Tuple_2<::System::String*, ::System::Boolean>* System_Collections_Generic_IEnumerator_System_Tuple_System_String_System_Boolean___get_Current()
	{
		return ((::System::Tuple_2<::System::String*, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A096F2CEAC6987B3__GETPREDOWNLOADNEEDCLEARFILES_D__54_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A096F2CEAC6987B3__GETPREDOWNLOADNEEDCLEARFILES_D__54_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A096F2CEAC6987B3__GETPREDOWNLOADNEEDCLEARFILES_D__54_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* System_Collections_Generic_IEnumerable_System_Tuple_System_String_System_Boolean___GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A096F2CEAC6987B3__GETPREDOWNLOADNEEDCLEARFILES_D__54_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A096F2CEAC6987B3__GETPREDOWNLOADNEEDCLEARFILES_D__54_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
