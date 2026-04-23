#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_458E5D5F1916A1AE;
class Class_2_F9BA0CA41E0BB88E;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::IO { class FileInfo; }

#define CLASS_2_458E5D5F1916A1AE__GETNEEDCLEARFILES_D__20_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9752E60)
#define CLASS_2_458E5D5F1916A1AE__GETNEEDCLEARFILES_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x97538B0)
#define CLASS_2_458E5D5F1916A1AE__GETNEEDCLEARFILES_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9753840)
#define CLASS_2_458E5D5F1916A1AE__GETNEEDCLEARFILES_D__20_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9753910)
#define CLASS_2_458E5D5F1916A1AE__GETNEEDCLEARFILES_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x97538A0)
#define CLASS_2_458E5D5F1916A1AE__GETNEEDCLEARFILES_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x9753850)
#define CLASS_2_458E5D5F1916A1AE__GETNEEDCLEARFILES_D__20_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9752CE0)
#define CLASS_2_458E5D5F1916A1AE__GETNEEDCLEARFILES_D__20__CTOR_OFFSET UNITYSDK_OFFSET(0x97529A0)
#define CLASS_2_458E5D5F1916A1AE__GETNEEDCLEARFILES_D__20___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x9752DB0)

inline static constexpr unsigned int Class_2_458E5D5F1916A1AE__GetNeedClearFiles_d__20_TypeDefinitionIndex = 54860;

class Class_2_458E5D5F1916A1AE__GetNeedClearFiles_d__20 : public ::System::Object
{
public:
	::System::Collections::Generic::IEnumerator_1<::System::IO::FileInfo*>* __7__wrap2; // 0x10
	::Class_2_458E5D5F1916A1AE* __4__this; // 0x18
	::System::Tuple_2<::System::String*, ::System::Boolean>* __2__current; // 0x20
	::Class_2_F9BA0CA41E0BB88E* _indexInfo_5__2; // 0x28
	::System::Int32 __1__state; // 0x30
	::System::Boolean usePersistIndex; // 0x34
	::System::Boolean __3__usePersistIndex; // 0x35
	::System::Int32 __l__initialThreadId; // 0x38

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_458E5D5F1916A1AE__GETNEEDCLEARFILES_D__20__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_458E5D5F1916A1AE__GETNEEDCLEARFILES_D__20_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_458E5D5F1916A1AE__GETNEEDCLEARFILES_D__20_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_458E5D5F1916A1AE__GETNEEDCLEARFILES_D__20___M__FINALLY1_OFFSET))(this);
	}

	::System::Tuple_2<::System::String*, ::System::Boolean>* System_Collections_Generic_IEnumerator_System_Tuple_System_String_System_Boolean___get_Current()
	{
		return ((::System::Tuple_2<::System::String*, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_458E5D5F1916A1AE__GETNEEDCLEARFILES_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_458E5D5F1916A1AE__GETNEEDCLEARFILES_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_458E5D5F1916A1AE__GETNEEDCLEARFILES_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* System_Collections_Generic_IEnumerable_System_Tuple_System_String_System_Boolean___GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_458E5D5F1916A1AE__GETNEEDCLEARFILES_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_458E5D5F1916A1AE__GETNEEDCLEARFILES_D__20_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
