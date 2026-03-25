#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_99337DDD16B17366;
class Class_2_974C6A58562BEDDD;
namespace RPG::Client { class VideoBundleInfoItem; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::IO { class FileInfo; }

#define CLASS_2_974C6A58562BEDDD__GETNEEDCLEARFILES_D__30_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x99E4D90)
#define CLASS_2_974C6A58562BEDDD__GETNEEDCLEARFILES_D__30_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x99E6030)
#define CLASS_2_974C6A58562BEDDD__GETNEEDCLEARFILES_D__30_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x99E5FC0)
#define CLASS_2_974C6A58562BEDDD__GETNEEDCLEARFILES_D__30_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x99E6090)
#define CLASS_2_974C6A58562BEDDD__GETNEEDCLEARFILES_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x99E6020)
#define CLASS_2_974C6A58562BEDDD__GETNEEDCLEARFILES_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x99E5FD0)
#define CLASS_2_974C6A58562BEDDD__GETNEEDCLEARFILES_D__30_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x99E4C00)
#define CLASS_2_974C6A58562BEDDD__GETNEEDCLEARFILES_D__30__CTOR_OFFSET UNITYSDK_OFFSET(0x99E4670)
#define CLASS_2_974C6A58562BEDDD__GETNEEDCLEARFILES_D__30___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x99E4CE0)

inline static constexpr unsigned int Class_2_974C6A58562BEDDD__GetNeedClearFiles_d__30_TypeDefinitionIndex = 48125;

class Class_2_974C6A58562BEDDD__GetNeedClearFiles_d__30 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _hashFilePathMaps_5__4; // 0x10
	::RPG::Client::VideoBundleInfoItem* _video_5__7; // 0x18
	::Class_2_974C6A58562BEDDD* __4__this; // 0x20
	::Class_1_99337DDD16B17366* _indexStream_5__3; // 0x28
	::System::Collections::Generic::IEnumerator_1<::System::IO::FileInfo*>* __7__wrap4; // 0x30
	::Class_1_99337DDD16B17366* _indexInfo_5__2; // 0x38
	::System::Tuple_2<::System::String*, ::System::Boolean>* __2__current; // 0x40
	::System::IO::FileInfo* _fileInfo_5__6; // 0x48
	::System::Int32 __1__state; // 0x50
	::System::Boolean __3__usePersistIndex; // 0x54
	::System::Boolean usePersistIndex; // 0x55
	::System::Int32 __l__initialThreadId; // 0x58

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_974C6A58562BEDDD__GETNEEDCLEARFILES_D__30__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_974C6A58562BEDDD__GETNEEDCLEARFILES_D__30_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_974C6A58562BEDDD__GETNEEDCLEARFILES_D__30_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_974C6A58562BEDDD__GETNEEDCLEARFILES_D__30___M__FINALLY1_OFFSET))(this);
	}

	::System::Tuple_2<::System::String*, ::System::Boolean>* System_Collections_Generic_IEnumerator_System_Tuple_System_String_System_Boolean___get_Current()
	{
		return ((::System::Tuple_2<::System::String*, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_974C6A58562BEDDD__GETNEEDCLEARFILES_D__30_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_974C6A58562BEDDD__GETNEEDCLEARFILES_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_974C6A58562BEDDD__GETNEEDCLEARFILES_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* System_Collections_Generic_IEnumerable_System_Tuple_System_String_System_Boolean___GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_974C6A58562BEDDD__GETNEEDCLEARFILES_D__30_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_974C6A58562BEDDD__GETNEEDCLEARFILES_D__30_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
