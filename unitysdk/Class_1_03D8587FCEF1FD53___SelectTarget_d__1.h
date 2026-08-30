#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
namespace RPG::GameCore { class ChimeraDuelAbusolutePositionSelectorConfig; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_03D8587FCEF1FD53___SELECTTARGET_D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18BC68A0)
#define CLASS_1_03D8587FCEF1FD53___SELECTTARGET_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18BC6E80)
#define CLASS_1_03D8587FCEF1FD53___SELECTTARGET_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18BC6E10)
#define CLASS_1_03D8587FCEF1FD53___SELECTTARGET_D__1_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18BC6F00)
#define CLASS_1_03D8587FCEF1FD53___SELECTTARGET_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18BC6E70)
#define CLASS_1_03D8587FCEF1FD53___SELECTTARGET_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x18BC6E20)
#define CLASS_1_03D8587FCEF1FD53___SELECTTARGET_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18BC6760)
#define CLASS_1_03D8587FCEF1FD53___SELECTTARGET_D__1__CTOR_OFFSET UNITYSDK_OFFSET(0x18BC6730)
#define CLASS_1_03D8587FCEF1FD53___SELECTTARGET_D__1___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x18BC67A0)

inline static constexpr unsigned int Class_1_03D8587FCEF1FD53___SelectTarget_d__1_TypeDefinitionIndex = 77046;

class Class_1_03D8587FCEF1FD53___SelectTarget_d__1 : public ::System::Object
{
public:
	::Class_2_B66C1067C0468FBB* __2__current; // 0x10
	::Class_1_A92BC063ED2379EB* __3__context; // 0x18
	::RPG::GameCore::ChimeraDuelAbusolutePositionSelectorConfig* __3__config; // 0x20
	::RPG::GameCore::ChimeraDuelAbusolutePositionSelectorConfig* config; // 0x28
	::System::Collections::Generic::IEnumerator_1<::Class_2_B66C1067C0468FBB*>* __7__wrap1; // 0x30
	::Class_1_A92BC063ED2379EB* context; // 0x38
	::System::Int32 __1__state; // 0x40
	::System::Int32 __l__initialThreadId; // 0x44

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_03D8587FCEF1FD53___SELECTTARGET_D__1__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03D8587FCEF1FD53___SELECTTARGET_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03D8587FCEF1FD53___SELECTTARGET_D__1_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03D8587FCEF1FD53___SELECTTARGET_D__1___M__FINALLY1_OFFSET))(this);
	}

	::Class_2_B66C1067C0468FBB* System_Collections_Generic_IEnumerator_RPG_Client_LittleGame_ChimeraDuelGameEntity__get_Current()
	{
		return ((::Class_2_B66C1067C0468FBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03D8587FCEF1FD53___SELECTTARGET_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03D8587FCEF1FD53___SELECTTARGET_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03D8587FCEF1FD53___SELECTTARGET_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_2_B66C1067C0468FBB*>* System_Collections_Generic_IEnumerable_RPG_Client_LittleGame_ChimeraDuelGameEntity__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_2_B66C1067C0468FBB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03D8587FCEF1FD53___SELECTTARGET_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_LITTLEGAME_CHIMERADUELGAMEENTITY__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03D8587FCEF1FD53___SELECTTARGET_D__1_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
