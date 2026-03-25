#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/HashSet_1_Enumerator.h"
#include "unitysdk/System/Object.h"

class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
namespace Entitas { template <typename T> class IMatcher_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_C4FD36003027AC99__ITERATEENTITIES_D__39_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8D37070)
#define CLASS_1_C4FD36003027AC99__ITERATEENTITIES_D__39_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x8D372C0)
#define CLASS_1_C4FD36003027AC99__ITERATEENTITIES_D__39_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x8D37250)
#define CLASS_1_C4FD36003027AC99__ITERATEENTITIES_D__39_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x8D37340)
#define CLASS_1_C4FD36003027AC99__ITERATEENTITIES_D__39_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x8D372B0)
#define CLASS_1_C4FD36003027AC99__ITERATEENTITIES_D__39_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x8D37260)
#define CLASS_1_C4FD36003027AC99__ITERATEENTITIES_D__39_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8D37050)
#define CLASS_1_C4FD36003027AC99__ITERATEENTITIES_D__39__CTOR_OFFSET UNITYSDK_OFFSET(0x8D36920)
#define CLASS_1_C4FD36003027AC99__ITERATEENTITIES_D__39___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x8D37060)

inline static constexpr unsigned int Class_1_C4FD36003027AC99__IterateEntities_d__39_TypeDefinitionIndex = 62972;

class Class_1_C4FD36003027AC99__IterateEntities_d__39 : public ::System::Object
{
public:
	::Class_2_49CAB3DE74280C58* __2__current; // 0x10
	::Class_1_C4FD36003027AC99* __4__this; // 0x18
	::Entitas::IMatcher_1<::Class_2_49CAB3DE74280C58*>* __3__matcher; // 0x20
	::System::Collections::Generic::HashSet_1_Enumerator<::Class_2_49CAB3DE74280C58*> __7__wrap1; // 0x28
	::Entitas::IMatcher_1<::Class_2_49CAB3DE74280C58*>* matcher; // 0x40
	::System::Int32 __l__initialThreadId; // 0x48
	::System::Int32 __1__state; // 0x4C

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C4FD36003027AC99__ITERATEENTITIES_D__39__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FD36003027AC99__ITERATEENTITIES_D__39_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FD36003027AC99__ITERATEENTITIES_D__39_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FD36003027AC99__ITERATEENTITIES_D__39___M__FINALLY1_OFFSET))(this);
	}

	::Class_2_49CAB3DE74280C58* System_Collections_Generic_IEnumerator_RPG_Client_LittleGame_ChimeraDuelGameEntity__get_Current()
	{
		return ((::Class_2_49CAB3DE74280C58*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FD36003027AC99__ITERATEENTITIES_D__39_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FD36003027AC99__ITERATEENTITIES_D__39_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FD36003027AC99__ITERATEENTITIES_D__39_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_2_49CAB3DE74280C58*>* System_Collections_Generic_IEnumerable_RPG_Client_LittleGame_ChimeraDuelGameEntity__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_2_49CAB3DE74280C58*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FD36003027AC99__ITERATEENTITIES_D__39_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FD36003027AC99__ITERATEENTITIES_D__39_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
