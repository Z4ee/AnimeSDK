#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BAC064D277DD99F1.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/Object.h"

class Class_1_7D46F1066EF90FA6_5;
namespace RPG::GameCore { class SpecialAvatarRow; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_7D46F1066EF90FA6_5___TOTRACENODES_D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x177C8210)
#define CLASS_1_7D46F1066EF90FA6_5___TOTRACENODES_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_AVATARSYSTEM_AVATARTRACENODEPROFILE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x177C84C0)
#define CLASS_1_7D46F1066EF90FA6_5___TOTRACENODES_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_AVATARSYSTEM_AVATARTRACENODEPROFILE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x177C8410)
#define CLASS_1_7D46F1066EF90FA6_5___TOTRACENODES_D__7_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x177C8520)
#define CLASS_1_7D46F1066EF90FA6_5___TOTRACENODES_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x177C8470)
#define CLASS_1_7D46F1066EF90FA6_5___TOTRACENODES_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x177C8420)
#define CLASS_1_7D46F1066EF90FA6_5___TOTRACENODES_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x177C81F0)
#define CLASS_1_7D46F1066EF90FA6_5___TOTRACENODES_D__7__CTOR_OFFSET UNITYSDK_OFFSET(0x177C7290)
#define CLASS_1_7D46F1066EF90FA6_5___TOTRACENODES_D__7___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x177C8200)

inline static constexpr unsigned int Class_1_7D46F1066EF90FA6_5___ToTraceNodes_d__7_TypeDefinitionIndex = 60047;

class Class_1_7D46F1066EF90FA6_5___ToTraceNodes_d__7 : public ::System::Object
{
public:
	::RPG::GameCore::SpecialAvatarRow* specialAvatarRow; // 0x10
	::System::Collections::Generic::Dictionary_2_Enumerator<::System::UInt32, ::System::UInt32> __7__wrap1; // 0x18
	::Class_1_7D46F1066EF90FA6_5* __4__this; // 0x38
	::RPG::GameCore::SpecialAvatarRow* __3__specialAvatarRow; // 0x40
	::System::Int32 __l__initialThreadId; // 0x48
	::Struct_2_BAC064D277DD99F1 __2__current; // 0x4C
	::System::Int32 __1__state; // 0x54

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_5___TOTRACENODES_D__7__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_5___TOTRACENODES_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_5___TOTRACENODES_D__7_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_5___TOTRACENODES_D__7___M__FINALLY1_OFFSET))(this);
	}

	::Struct_2_BAC064D277DD99F1 System_Collections_Generic_IEnumerator_RPG_AvatarSystem_AvatarTraceNodeProfile__get_Current()
	{
		return ((::Struct_2_BAC064D277DD99F1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_5___TOTRACENODES_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_AVATARSYSTEM_AVATARTRACENODEPROFILE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_5___TOTRACENODES_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_5___TOTRACENODES_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Struct_2_BAC064D277DD99F1>* System_Collections_Generic_IEnumerable_RPG_AvatarSystem_AvatarTraceNodeProfile__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Struct_2_BAC064D277DD99F1>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_5___TOTRACENODES_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_AVATARSYSTEM_AVATARTRACENODEPROFILE__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_5___TOTRACENODES_D__7_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
