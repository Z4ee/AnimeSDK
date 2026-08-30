#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BF84C282A637A074;
class Class_2_8885F8F36A0762BF;
namespace RPG::Client { class RawItem; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::IO { class FileInfo; }

#define CLASS_2_8885F8F36A0762BF__GETNEEDCLEARFILES_D__22_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x169E0E90)
#define CLASS_2_8885F8F36A0762BF__GETNEEDCLEARFILES_D__22_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x169E2070)
#define CLASS_2_8885F8F36A0762BF__GETNEEDCLEARFILES_D__22_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x169E2000)
#define CLASS_2_8885F8F36A0762BF__GETNEEDCLEARFILES_D__22_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x169E20D0)
#define CLASS_2_8885F8F36A0762BF__GETNEEDCLEARFILES_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x169E2060)
#define CLASS_2_8885F8F36A0762BF__GETNEEDCLEARFILES_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x169E2010)
#define CLASS_2_8885F8F36A0762BF__GETNEEDCLEARFILES_D__22_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x169E0D40)
#define CLASS_2_8885F8F36A0762BF__GETNEEDCLEARFILES_D__22__CTOR_OFFSET UNITYSDK_OFFSET(0x169E0CA0)
#define CLASS_2_8885F8F36A0762BF__GETNEEDCLEARFILES_D__22___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x169E0D90)

inline static constexpr unsigned int Class_2_8885F8F36A0762BF__GetNeedClearFiles_d__22_TypeDefinitionIndex = 59619;

class Class_2_8885F8F36A0762BF__GetNeedClearFiles_d__22 : public ::System::Object
{
public:
	::Class_1_BF84C282A637A074* _indexStream_5__3; // 0x10
	::System::Tuple_2<::System::String*, ::System::Boolean>* __2__current; // 0x18
	::System::IO::FileInfo* _fileInfo_5__6; // 0x20
	::Class_1_BF84C282A637A074* _indexInfo_5__2; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _hashFilePathMaps_5__4; // 0x30
	::RPG::Client::RawItem* _video_5__7; // 0x38
	::System::Collections::Generic::IEnumerator_1<::System::IO::FileInfo*>* __7__wrap4; // 0x40
	::Class_2_8885F8F36A0762BF* __4__this; // 0x48
	::System::Int32 __1__state; // 0x50
	::System::Int32 __l__initialThreadId; // 0x54
	::System::Boolean usePersistIndex; // 0x58
	::System::Boolean __3__usePersistIndex; // 0x59

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8885F8F36A0762BF__GETNEEDCLEARFILES_D__22__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8885F8F36A0762BF__GETNEEDCLEARFILES_D__22_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8885F8F36A0762BF__GETNEEDCLEARFILES_D__22_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8885F8F36A0762BF__GETNEEDCLEARFILES_D__22___M__FINALLY1_OFFSET))(this);
	}

	::System::Tuple_2<::System::String*, ::System::Boolean>* System_Collections_Generic_IEnumerator_System_Tuple_System_String_System_Boolean___get_Current()
	{
		return ((::System::Tuple_2<::System::String*, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8885F8F36A0762BF__GETNEEDCLEARFILES_D__22_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8885F8F36A0762BF__GETNEEDCLEARFILES_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8885F8F36A0762BF__GETNEEDCLEARFILES_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* System_Collections_Generic_IEnumerable_System_Tuple_System_String_System_Boolean___GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8885F8F36A0762BF__GETNEEDCLEARFILES_D__22_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8885F8F36A0762BF__GETNEEDCLEARFILES_D__22_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
