#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/HashSet_1_Enumerator.h"
#include "unitysdk/System/Object.h"

class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
namespace Entitas { template <typename T> class IMatcher_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_A92BC063ED2379EB__ITERATEENTITIES_D__39_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x17A4A5A0)
#define CLASS_1_A92BC063ED2379EB__ITERATEENTITIES_D__39_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17A4A850)
#define CLASS_1_A92BC063ED2379EB__ITERATEENTITIES_D__39_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17A4A7E0)
#define CLASS_1_A92BC063ED2379EB__ITERATEENTITIES_D__39_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17A4A8D0)
#define CLASS_1_A92BC063ED2379EB__ITERATEENTITIES_D__39_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17A4A840)
#define CLASS_1_A92BC063ED2379EB__ITERATEENTITIES_D__39_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x17A4A7F0)
#define CLASS_1_A92BC063ED2379EB__ITERATEENTITIES_D__39_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17A4A580)
#define CLASS_1_A92BC063ED2379EB__ITERATEENTITIES_D__39__CTOR_OFFSET UNITYSDK_OFFSET(0x17A49DF0)
#define CLASS_1_A92BC063ED2379EB__ITERATEENTITIES_D__39___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x17A4A590)

inline static constexpr unsigned int Class_1_A92BC063ED2379EB__IterateEntities_d__39_TypeDefinitionIndex = 76959;

class Class_1_A92BC063ED2379EB__IterateEntities_d__39 : public ::System::Object
{
public:
	::Class_1_A92BC063ED2379EB* __4__this; // 0x10
	::System::Collections::Generic::HashSet_1_Enumerator<::Class_2_B66C1067C0468FBB*> __7__wrap1; // 0x18
	::Entitas::IMatcher_1<::Class_2_B66C1067C0468FBB*>* matcher; // 0x30
	::Class_2_B66C1067C0468FBB* __2__current; // 0x38
	::Entitas::IMatcher_1<::Class_2_B66C1067C0468FBB*>* __3__matcher; // 0x40
	::System::Int32 __l__initialThreadId; // 0x48
	::System::Int32 __1__state; // 0x4C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A92BC063ED2379EB__ITERATEENTITIES_D__39__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A92BC063ED2379EB__ITERATEENTITIES_D__39_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A92BC063ED2379EB__ITERATEENTITIES_D__39_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A92BC063ED2379EB__ITERATEENTITIES_D__39___M__FINALLY1_OFFSET))(this);
	}

	::Class_2_B66C1067C0468FBB* System_Collections_Generic_IEnumerator_RPG_Client_LittleGame_ChimeraDuelGameEntity__get_Current()
	{
		return ((::Class_2_B66C1067C0468FBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A92BC063ED2379EB__ITERATEENTITIES_D__39_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A92BC063ED2379EB__ITERATEENTITIES_D__39_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A92BC063ED2379EB__ITERATEENTITIES_D__39_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_2_B66C1067C0468FBB*>* System_Collections_Generic_IEnumerable_RPG_Client_LittleGame_ChimeraDuelGameEntity__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_2_B66C1067C0468FBB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A92BC063ED2379EB__ITERATEENTITIES_D__39_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A92BC063ED2379EB__ITERATEENTITIES_D__39_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
