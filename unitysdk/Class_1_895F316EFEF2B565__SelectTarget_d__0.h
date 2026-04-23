#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"

class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_895F316EFEF2B565__SELECTTARGET_D__0_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x100313E0)
#define CLASS_1_895F316EFEF2B565__SELECTTARGET_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x10031A20)
#define CLASS_1_895F316EFEF2B565__SELECTTARGET_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x100319B0)
#define CLASS_1_895F316EFEF2B565__SELECTTARGET_D__0_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x10031AA0)
#define CLASS_1_895F316EFEF2B565__SELECTTARGET_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10031A10)
#define CLASS_1_895F316EFEF2B565__SELECTTARGET_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x100319C0)
#define CLASS_1_895F316EFEF2B565__SELECTTARGET_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10031260)
#define CLASS_1_895F316EFEF2B565__SELECTTARGET_D__0__CTOR_OFFSET UNITYSDK_OFFSET(0x10031230)
#define CLASS_1_895F316EFEF2B565__SELECTTARGET_D__0___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x10031330)

inline static constexpr unsigned int Class_1_895F316EFEF2B565__SelectTarget_d__0_TypeDefinitionIndex = 71086;

class Class_1_895F316EFEF2B565__SelectTarget_d__0 : public ::System::Object
{
public:
	::Class_1_C4FD36003027AC99* context; // 0x10
	::Class_1_C4FD36003027AC99* __3__context; // 0x18
	::System::Collections::Generic::IEnumerator_1<::Class_2_49CAB3DE74280C58*>* __7__wrap2; // 0x20
	::Class_2_49CAB3DE74280C58* __2__current; // 0x28
	::RPG::GameCore::ChimeraDuelTeamType _casterSide_5__2; // 0x30
	::System::Int32 __l__initialThreadId; // 0x34
	::System::Int32 __1__state; // 0x38

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_895F316EFEF2B565__SELECTTARGET_D__0__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_895F316EFEF2B565__SELECTTARGET_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_895F316EFEF2B565__SELECTTARGET_D__0_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_895F316EFEF2B565__SELECTTARGET_D__0___M__FINALLY1_OFFSET))(this);
	}

	::Class_2_49CAB3DE74280C58* System_Collections_Generic_IEnumerator_RPG_Client_LittleGame_ChimeraDuelGameEntity__get_Current()
	{
		return ((::Class_2_49CAB3DE74280C58*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_895F316EFEF2B565__SELECTTARGET_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_895F316EFEF2B565__SELECTTARGET_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_895F316EFEF2B565__SELECTTARGET_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_2_49CAB3DE74280C58*>* System_Collections_Generic_IEnumerable_RPG_Client_LittleGame_ChimeraDuelGameEntity__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_2_49CAB3DE74280C58*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_895F316EFEF2B565__SELECTTARGET_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_895F316EFEF2B565__SELECTTARGET_D__0_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
