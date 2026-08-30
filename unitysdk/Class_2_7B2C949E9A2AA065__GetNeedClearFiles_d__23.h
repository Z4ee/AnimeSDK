#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_95;
class Class_2_7B2C949E9A2AA065;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::IO { class FileInfo; }

#define CLASS_2_7B2C949E9A2AA065__GETNEEDCLEARFILES_D__23_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1603B5D0)
#define CLASS_2_7B2C949E9A2AA065__GETNEEDCLEARFILES_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1603CA10)
#define CLASS_2_7B2C949E9A2AA065__GETNEEDCLEARFILES_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1603C9A0)
#define CLASS_2_7B2C949E9A2AA065__GETNEEDCLEARFILES_D__23_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1603CA70)
#define CLASS_2_7B2C949E9A2AA065__GETNEEDCLEARFILES_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1603CA00)
#define CLASS_2_7B2C949E9A2AA065__GETNEEDCLEARFILES_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1603C9B0)
#define CLASS_2_7B2C949E9A2AA065__GETNEEDCLEARFILES_D__23_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1603B490)
#define CLASS_2_7B2C949E9A2AA065__GETNEEDCLEARFILES_D__23__CTOR_OFFSET UNITYSDK_OFFSET(0x1603B3E0)
#define CLASS_2_7B2C949E9A2AA065__GETNEEDCLEARFILES_D__23___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1603B4D0)

inline static constexpr unsigned int Class_2_7B2C949E9A2AA065__GetNeedClearFiles_d__23_TypeDefinitionIndex = 59606;

class Class_2_7B2C949E9A2AA065__GetNeedClearFiles_d__23 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::RPG::Client::ByteHash16>* _blocks_5__3; // 0x10
	::System::Tuple_2<::System::String*, ::System::Boolean>* __2__current; // 0x18
	::Class_0_16E4307DCC419505_95* _indexInfo_5__2; // 0x20
	::System::Collections::Generic::IEnumerator_1<::System::IO::FileInfo*>* __7__wrap3; // 0x28
	::Class_2_7B2C949E9A2AA065* __4__this; // 0x30
	::System::Boolean usePersistIndex; // 0x38
	::System::Boolean __3__usePersistIndex; // 0x39
	::System::Int32 __l__initialThreadId; // 0x3C
	::System::Int32 __1__state; // 0x40

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7B2C949E9A2AA065__GETNEEDCLEARFILES_D__23__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B2C949E9A2AA065__GETNEEDCLEARFILES_D__23_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B2C949E9A2AA065__GETNEEDCLEARFILES_D__23_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B2C949E9A2AA065__GETNEEDCLEARFILES_D__23___M__FINALLY1_OFFSET))(this);
	}

	::System::Tuple_2<::System::String*, ::System::Boolean>* System_Collections_Generic_IEnumerator_System_Tuple_System_String_System_Boolean___get_Current()
	{
		return ((::System::Tuple_2<::System::String*, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B2C949E9A2AA065__GETNEEDCLEARFILES_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B2C949E9A2AA065__GETNEEDCLEARFILES_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B2C949E9A2AA065__GETNEEDCLEARFILES_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* System_Collections_Generic_IEnumerable_System_Tuple_System_String_System_Boolean___GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B2C949E9A2AA065__GETNEEDCLEARFILES_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B2C949E9A2AA065__GETNEEDCLEARFILES_D__23_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
