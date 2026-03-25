#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelRelativePositionSelectorConfig; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_895F316EFEF2B565_3__SELECTTARGET_D__0_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x10ABA6D0)
#define CLASS_1_895F316EFEF2B565_3__SELECTTARGET_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x10ABADA0)
#define CLASS_1_895F316EFEF2B565_3__SELECTTARGET_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10ABAD30)
#define CLASS_1_895F316EFEF2B565_3__SELECTTARGET_D__0_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x10ABAE20)
#define CLASS_1_895F316EFEF2B565_3__SELECTTARGET_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10ABAD90)
#define CLASS_1_895F316EFEF2B565_3__SELECTTARGET_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x10ABAD40)
#define CLASS_1_895F316EFEF2B565_3__SELECTTARGET_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10ABA550)
#define CLASS_1_895F316EFEF2B565_3__SELECTTARGET_D__0__CTOR_OFFSET UNITYSDK_OFFSET(0x10ABA520)
#define CLASS_1_895F316EFEF2B565_3__SELECTTARGET_D__0___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x10ABA620)

inline static constexpr unsigned int Class_1_895F316EFEF2B565_3__SelectTarget_d__0_TypeDefinitionIndex = 63054;

class Class_1_895F316EFEF2B565_3__SelectTarget_d__0 : public ::System::Object
{
public:
	::Class_1_C4FD36003027AC99* context; // 0x10
	::Class_2_49CAB3DE74280C58* __2__current; // 0x18
	::RPG::GameCore::ChimeraDuelRelativePositionSelectorConfig* _selectorConfig_5__4; // 0x20
	::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* config; // 0x28
	::Class_1_C4FD36003027AC99* __3__context; // 0x30
	::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* __3__config; // 0x38
	::Class_2_49CAB3DE74280C58* _caster_5__2; // 0x40
	::System::Collections::Generic::IEnumerator_1<::Class_2_49CAB3DE74280C58*>* __7__wrap4; // 0x48
	::System::Int32 __1__state; // 0x50
	::System::Int32 _casterPos_5__3; // 0x54
	::System::Int32 __l__initialThreadId; // 0x58

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_895F316EFEF2B565_3__SELECTTARGET_D__0__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_895F316EFEF2B565_3__SELECTTARGET_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_895F316EFEF2B565_3__SELECTTARGET_D__0_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_895F316EFEF2B565_3__SELECTTARGET_D__0___M__FINALLY1_OFFSET))(this);
	}

	::Class_2_49CAB3DE74280C58* System_Collections_Generic_IEnumerator_RPG_Client_LittleGame_ChimeraDuelGameEntity__get_Current()
	{
		return ((::Class_2_49CAB3DE74280C58*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_895F316EFEF2B565_3__SELECTTARGET_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_895F316EFEF2B565_3__SELECTTARGET_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_895F316EFEF2B565_3__SELECTTARGET_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_2_49CAB3DE74280C58*>* System_Collections_Generic_IEnumerable_RPG_Client_LittleGame_ChimeraDuelGameEntity__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_2_49CAB3DE74280C58*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_895F316EFEF2B565_3__SELECTTARGET_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_895F316EFEF2B565_3__SELECTTARGET_D__0_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
