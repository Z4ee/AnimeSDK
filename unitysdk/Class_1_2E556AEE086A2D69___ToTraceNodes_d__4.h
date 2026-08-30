#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BAC064D277DD99F1.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_111;
class Class_1_F3CA30716D4FAF92_3;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_2E556AEE086A2D69___TOTRACENODES_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x16307F90)
#define CLASS_1_2E556AEE086A2D69___TOTRACENODES_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_AVATARSYSTEM_AVATARTRACENODEPROFILE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16308350)
#define CLASS_1_2E556AEE086A2D69___TOTRACENODES_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_AVATARSYSTEM_AVATARTRACENODEPROFILE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x163082A0)
#define CLASS_1_2E556AEE086A2D69___TOTRACENODES_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x163083B0)
#define CLASS_1_2E556AEE086A2D69___TOTRACENODES_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16308300)
#define CLASS_1_2E556AEE086A2D69___TOTRACENODES_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x163082B0)
#define CLASS_1_2E556AEE086A2D69___TOTRACENODES_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16307E50)
#define CLASS_1_2E556AEE086A2D69___TOTRACENODES_D__4__CTOR_OFFSET UNITYSDK_OFFSET(0x16307850)
#define CLASS_1_2E556AEE086A2D69___TOTRACENODES_D__4___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x16307E90)

inline static constexpr unsigned int Class_1_2E556AEE086A2D69___ToTraceNodes_d__4_TypeDefinitionIndex = 62771;

class Class_1_2E556AEE086A2D69___ToTraceNodes_d__4 : public ::System::Object
{
public:
	::Class_1_F3CA30716D4FAF92_3* __3__uniqueData; // 0x10
	::System::Collections::Generic::IEnumerator_1<::Class_1_D17272E82AE804C2_111*>* __7__wrap1; // 0x18
	::Class_1_F3CA30716D4FAF92_3* uniqueData; // 0x20
	::System::Int32 __1__state; // 0x28
	::Struct_2_BAC064D277DD99F1 __2__current; // 0x2C
	::System::Int32 __l__initialThreadId; // 0x34

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2E556AEE086A2D69___TOTRACENODES_D__4__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E556AEE086A2D69___TOTRACENODES_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E556AEE086A2D69___TOTRACENODES_D__4_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E556AEE086A2D69___TOTRACENODES_D__4___M__FINALLY1_OFFSET))(this);
	}

	::Struct_2_BAC064D277DD99F1 System_Collections_Generic_IEnumerator_RPG_AvatarSystem_AvatarTraceNodeProfile__get_Current()
	{
		return ((::Struct_2_BAC064D277DD99F1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E556AEE086A2D69___TOTRACENODES_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_AVATARSYSTEM_AVATARTRACENODEPROFILE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E556AEE086A2D69___TOTRACENODES_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E556AEE086A2D69___TOTRACENODES_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Struct_2_BAC064D277DD99F1>* System_Collections_Generic_IEnumerable_RPG_AvatarSystem_AvatarTraceNodeProfile__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Struct_2_BAC064D277DD99F1>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E556AEE086A2D69___TOTRACENODES_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_AVATARSYSTEM_AVATARTRACENODEPROFILE__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E556AEE086A2D69___TOTRACENODES_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
