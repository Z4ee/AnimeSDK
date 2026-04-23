#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E294B4E462D36A1B;
class Class_2_3C8C00F3F8D7A848;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::IO { class FileInfo; }

#define CLASS_2_3C8C00F3F8D7A848__GETNEEDCLEARFILES_D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x123B0300)
#define CLASS_2_3C8C00F3F8D7A848__GETNEEDCLEARFILES_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x123B0CC0)
#define CLASS_2_3C8C00F3F8D7A848__GETNEEDCLEARFILES_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x123B0C50)
#define CLASS_2_3C8C00F3F8D7A848__GETNEEDCLEARFILES_D__19_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x123B0D20)
#define CLASS_2_3C8C00F3F8D7A848__GETNEEDCLEARFILES_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x123B0CB0)
#define CLASS_2_3C8C00F3F8D7A848__GETNEEDCLEARFILES_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x123B0C60)
#define CLASS_2_3C8C00F3F8D7A848__GETNEEDCLEARFILES_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x123B0190)
#define CLASS_2_3C8C00F3F8D7A848__GETNEEDCLEARFILES_D__19__CTOR_OFFSET UNITYSDK_OFFSET(0x123B00E0)
#define CLASS_2_3C8C00F3F8D7A848__GETNEEDCLEARFILES_D__19___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x123B0250)

inline static constexpr unsigned int Class_2_3C8C00F3F8D7A848__GetNeedClearFiles_d__19_TypeDefinitionIndex = 54857;

class Class_2_3C8C00F3F8D7A848__GetNeedClearFiles_d__19 : public ::System::Object
{
public:
	::System::Tuple_2<::System::String*, ::System::Boolean>* __2__current; // 0x10
	::Class_2_3C8C00F3F8D7A848* __4__this; // 0x18
	::Class_1_E294B4E462D36A1B* _indexInfo_5__2; // 0x20
	::System::Collections::Generic::IEnumerator_1<::System::IO::FileInfo*>* __7__wrap2; // 0x28
	::System::Int32 __1__state; // 0x30
	::System::Int32 __l__initialThreadId; // 0x34
	::System::Boolean __3__usePersistIndex; // 0x38
	::System::Boolean usePersistIndex; // 0x39

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848__GETNEEDCLEARFILES_D__19__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848__GETNEEDCLEARFILES_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848__GETNEEDCLEARFILES_D__19_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848__GETNEEDCLEARFILES_D__19___M__FINALLY1_OFFSET))(this);
	}

	::System::Tuple_2<::System::String*, ::System::Boolean>* System_Collections_Generic_IEnumerator_System_Tuple_System_String_System_Boolean___get_Current()
	{
		return ((::System::Tuple_2<::System::String*, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848__GETNEEDCLEARFILES_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848__GETNEEDCLEARFILES_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848__GETNEEDCLEARFILES_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* System_Collections_Generic_IEnumerable_System_Tuple_System_String_System_Boolean___GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848__GETNEEDCLEARFILES_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C8C00F3F8D7A848__GETNEEDCLEARFILES_D__19_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
