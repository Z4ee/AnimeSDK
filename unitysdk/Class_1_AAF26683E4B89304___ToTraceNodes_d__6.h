#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BAC064D277DD99F1.h"
#include "unitysdk/System/Object.h"

class Class_1_AAF26683E4B89304;
class Class_1_D17272E82AE804C2_16;
namespace Proto { class DisplayAvatarDetailInfo; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_AAF26683E4B89304___TOTRACENODES_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x17A416C0)
#define CLASS_1_AAF26683E4B89304___TOTRACENODES_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_AVATARSYSTEM_AVATARTRACENODEPROFILE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17A41B50)
#define CLASS_1_AAF26683E4B89304___TOTRACENODES_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_AVATARSYSTEM_AVATARTRACENODEPROFILE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17A41AA0)
#define CLASS_1_AAF26683E4B89304___TOTRACENODES_D__6_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17A41BD0)
#define CLASS_1_AAF26683E4B89304___TOTRACENODES_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17A41B00)
#define CLASS_1_AAF26683E4B89304___TOTRACENODES_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x17A41AB0)
#define CLASS_1_AAF26683E4B89304___TOTRACENODES_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17A41580)
#define CLASS_1_AAF26683E4B89304___TOTRACENODES_D__6__CTOR_OFFSET UNITYSDK_OFFSET(0x17A40E80)
#define CLASS_1_AAF26683E4B89304___TOTRACENODES_D__6___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x17A415C0)

inline static constexpr unsigned int Class_1_AAF26683E4B89304___ToTraceNodes_d__6_TypeDefinitionIndex = 62804;

class Class_1_AAF26683E4B89304___ToTraceNodes_d__6 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* _traceNodeIDs_5__2; // 0x10
	::Proto::DisplayAvatarDetailInfo* __3__detailInfo; // 0x18
	::Proto::DisplayAvatarDetailInfo* detailInfo; // 0x20
	::Class_1_AAF26683E4B89304* __4__this; // 0x28
	::System::Collections::Generic::IEnumerator_1<::Class_1_D17272E82AE804C2_16*>* __7__wrap2; // 0x30
	::System::Int32 __1__state; // 0x38
	::System::Int32 __l__initialThreadId; // 0x3C
	::Struct_2_BAC064D277DD99F1 __2__current; // 0x40

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AAF26683E4B89304___TOTRACENODES_D__6__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAF26683E4B89304___TOTRACENODES_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAF26683E4B89304___TOTRACENODES_D__6_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAF26683E4B89304___TOTRACENODES_D__6___M__FINALLY1_OFFSET))(this);
	}

	::Struct_2_BAC064D277DD99F1 System_Collections_Generic_IEnumerator_RPG_AvatarSystem_AvatarTraceNodeProfile__get_Current()
	{
		return ((::Struct_2_BAC064D277DD99F1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAF26683E4B89304___TOTRACENODES_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_AVATARSYSTEM_AVATARTRACENODEPROFILE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAF26683E4B89304___TOTRACENODES_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAF26683E4B89304___TOTRACENODES_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Struct_2_BAC064D277DD99F1>* System_Collections_Generic_IEnumerable_RPG_AvatarSystem_AvatarTraceNodeProfile__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Struct_2_BAC064D277DD99F1>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAF26683E4B89304___TOTRACENODES_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_AVATARSYSTEM_AVATARTRACENODEPROFILE__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAF26683E4B89304___TOTRACENODES_D__6_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
