#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_211A5BA20F9E6E38;
class Class_2_4882D51538AB1BD1;
namespace RPG::Client { class VideoBundleInfoItem; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::IO { class FileInfo; }

#define CLASS_2_4882D51538AB1BD1__GETNEEDCLEARFILES_D__30_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18380FF0)
#define CLASS_2_4882D51538AB1BD1__GETNEEDCLEARFILES_D__30_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x183822E0)
#define CLASS_2_4882D51538AB1BD1__GETNEEDCLEARFILES_D__30_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18382270)
#define CLASS_2_4882D51538AB1BD1__GETNEEDCLEARFILES_D__30_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18382340)
#define CLASS_2_4882D51538AB1BD1__GETNEEDCLEARFILES_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x183822D0)
#define CLASS_2_4882D51538AB1BD1__GETNEEDCLEARFILES_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x18382280)
#define CLASS_2_4882D51538AB1BD1__GETNEEDCLEARFILES_D__30_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18380EB0)
#define CLASS_2_4882D51538AB1BD1__GETNEEDCLEARFILES_D__30__CTOR_OFFSET UNITYSDK_OFFSET(0x18380B70)
#define CLASS_2_4882D51538AB1BD1__GETNEEDCLEARFILES_D__30___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x18380EF0)

inline static constexpr unsigned int Class_2_4882D51538AB1BD1__GetNeedClearFiles_d__30_TypeDefinitionIndex = 56836;

class Class_2_4882D51538AB1BD1__GetNeedClearFiles_d__30 : public ::System::Object
{
public:
	::Class_1_211A5BA20F9E6E38* _indexStream_5__3; // 0x10
	::Class_1_211A5BA20F9E6E38* _indexInfo_5__2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _hashFilePathMaps_5__4; // 0x20
	::RPG::Client::VideoBundleInfoItem* _video_5__7; // 0x28
	::System::IO::FileInfo* _fileInfo_5__6; // 0x30
	::System::Collections::Generic::IEnumerator_1<::System::IO::FileInfo*>* __7__wrap4; // 0x38
	::Class_2_4882D51538AB1BD1* __4__this; // 0x40
	::System::Tuple_2<::System::String*, ::System::Boolean>* __2__current; // 0x48
	::System::Int32 __l__initialThreadId; // 0x50
	::System::Int32 __1__state; // 0x54
	::System::Boolean __3__usePersistIndex; // 0x58
	::System::Boolean usePersistIndex; // 0x59

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4882D51538AB1BD1__GETNEEDCLEARFILES_D__30__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4882D51538AB1BD1__GETNEEDCLEARFILES_D__30_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4882D51538AB1BD1__GETNEEDCLEARFILES_D__30_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4882D51538AB1BD1__GETNEEDCLEARFILES_D__30___M__FINALLY1_OFFSET))(this);
	}

	::System::Tuple_2<::System::String*, ::System::Boolean>* System_Collections_Generic_IEnumerator_System_Tuple_System_String_System_Boolean___get_Current()
	{
		return ((::System::Tuple_2<::System::String*, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4882D51538AB1BD1__GETNEEDCLEARFILES_D__30_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4882D51538AB1BD1__GETNEEDCLEARFILES_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4882D51538AB1BD1__GETNEEDCLEARFILES_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* System_Collections_Generic_IEnumerable_System_Tuple_System_String_System_Boolean___GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4882D51538AB1BD1__GETNEEDCLEARFILES_D__30_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4882D51538AB1BD1__GETNEEDCLEARFILES_D__30_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
