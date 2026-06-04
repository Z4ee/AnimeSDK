#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"

class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_895F316EFEF2B565__SELECTTARGET_D__0_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xCBF3290)
#define CLASS_1_895F316EFEF2B565__SELECTTARGET_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xCBF38D0)
#define CLASS_1_895F316EFEF2B565__SELECTTARGET_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCBF3860)
#define CLASS_1_895F316EFEF2B565__SELECTTARGET_D__0_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xCBF3950)
#define CLASS_1_895F316EFEF2B565__SELECTTARGET_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCBF38C0)
#define CLASS_1_895F316EFEF2B565__SELECTTARGET_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xCBF3870)
#define CLASS_1_895F316EFEF2B565__SELECTTARGET_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCBF3120)
#define CLASS_1_895F316EFEF2B565__SELECTTARGET_D__0__CTOR_OFFSET UNITYSDK_OFFSET(0xCBF30F0)
#define CLASS_1_895F316EFEF2B565__SELECTTARGET_D__0___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xCBF31F0)

inline static constexpr unsigned int Class_1_895F316EFEF2B565__SelectTarget_d__0_TypeDefinitionIndex = 72024;

class Class_1_895F316EFEF2B565__SelectTarget_d__0 : public ::System::Object
{
public:
	::Class_2_B66C1067C0468FBB* __2__current; // 0x10
	::Class_1_A92BC063ED2379EB* context; // 0x18
	::System::Collections::Generic::IEnumerator_1<::Class_2_B66C1067C0468FBB*>* __7__wrap2; // 0x20
	::Class_1_A92BC063ED2379EB* __3__context; // 0x28
	::System::Int32 __l__initialThreadId; // 0x30
	::RPG::GameCore::ChimeraDuelTeamType _casterSide_5__2; // 0x34
	::System::Int32 __1__state; // 0x38

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_895F316EFEF2B565__SELECTTARGET_D__0__CTOR_OFFSET))(this, a1);
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

	::Class_2_B66C1067C0468FBB* System_Collections_Generic_IEnumerator_RPG_Client_LittleGame_ChimeraDuelGameEntity__get_Current()
	{
		return ((::Class_2_B66C1067C0468FBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_895F316EFEF2B565__SELECTTARGET_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_895F316EFEF2B565__SELECTTARGET_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_895F316EFEF2B565__SELECTTARGET_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_2_B66C1067C0468FBB*>* System_Collections_Generic_IEnumerable_RPG_Client_LittleGame_ChimeraDuelGameEntity__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_2_B66C1067C0468FBB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_895F316EFEF2B565__SELECTTARGET_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_895F316EFEF2B565__SELECTTARGET_D__0_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
