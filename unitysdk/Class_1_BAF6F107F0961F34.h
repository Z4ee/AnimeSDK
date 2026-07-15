#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/System/Object.h"

class Class_1_47EE63CB5C4DC8FC_5;
class Class_1_C35CD375605BD7E2;
namespace Entitas { class IContexts; }
namespace Entitas { class IEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BAF6F107F0961F34_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B108420)
#define CLASS_1_BAF6F107F0961F34_GET_CONTEXTS_OFFSET UNITYSDK_OFFSET(0x1B108D70)
#define CLASS_1_BAF6F107F0961F34_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x1B108D90)
#define CLASS_1_BAF6F107F0961F34_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x1B108D30)
#define CLASS_1_BAF6F107F0961F34_GET_PREVSTATE_OFFSET UNITYSDK_OFFSET(0x1B108DB0)
#define CLASS_1_BAF6F107F0961F34_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0x1B108D50)
#define CLASS_1_BAF6F107F0961F34_GET__CURRENTSTATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1B108DD0)
#define CLASS_1_BAF6F107F0961F34_METHOD_1_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0x1B108C90)
#define CLASS_1_BAF6F107F0961F34_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1B108C30)
#define CLASS_1_BAF6F107F0961F34_METHOD_1_3A6D2E46EDDEDB52_OFFSET UNITYSDK_OFFSET(0x1B108860)
#define CLASS_1_BAF6F107F0961F34_METHOD_1_C76FBF5BDDCD86A3_OFFSET UNITYSDK_OFFSET(0x1B1086E0)
#define CLASS_1_BAF6F107F0961F34_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1B108CF0)
#define CLASS_1_BAF6F107F0961F34_METHOD_1_EBDE4257DCCF7437_OFFSET UNITYSDK_OFFSET(0x1B1081D0)
#define CLASS_1_BAF6F107F0961F34_SET_CONTEXTS_OFFSET UNITYSDK_OFFSET(0x1B108D80)
#define CLASS_1_BAF6F107F0961F34_SET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x1B108DA0)
#define CLASS_1_BAF6F107F0961F34_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x1B108D40)
#define CLASS_1_BAF6F107F0961F34_SET_PREVSTATE_OFFSET UNITYSDK_OFFSET(0x1B108DC0)
#define CLASS_1_BAF6F107F0961F34_SET_SERVICES_OFFSET UNITYSDK_OFFSET(0x1B108D60)
#define CLASS_1_BAF6F107F0961F34_SET__CURRENTSTATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1B108DE0)
#define CLASS_1_BAF6F107F0961F34__CTOR_OFFSET UNITYSDK_OFFSET(0x1B108DF0)

inline static constexpr unsigned int Class_1_BAF6F107F0961F34_TypeDefinitionIndex = 41059;

class Class_1_BAF6F107F0961F34 : public ::System::Object
{
public:
	::Class_1_47EE63CB5C4DC8FC_5* _Services_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::Move::MoveState, ::Class_1_C35CD375605BD7E2*>* Field_1_1; // 0x18
	::Entitas::IContexts* _Contexts_k__BackingField; // 0x20
	::Entitas::IEntity* _OwnerEntity_k__BackingField; // 0x28
	::Class_1_C35CD375605BD7E2* __CurrentStateInstance_k__BackingField; // 0x30
	::RPG::Client::LittleGame::Move::MoveState _PrevState_k__BackingField; // 0x38
	::RPG::Client::LittleGame::Move::MoveState _CurrentState_k__BackingField; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BAF6F107F0961F34__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EBDE4257DCCF7437(::Entitas::IEntity* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::Entitas::IContexts* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Entitas::IContexts*))((::PBYTE)hIl2Cpp + CLASS_1_BAF6F107F0961F34_METHOD_1_EBDE4257DCCF7437_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BAF6F107F0961F34_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_3A6D2E46EDDEDB52(::RPG::Client::LittleGame::Move::MoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_1_BAF6F107F0961F34_METHOD_1_3A6D2E46EDDEDB52_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BAF6F107F0961F34_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BAF6F107F0961F34_METHOD_1_2685B6183E614529_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BAF6F107F0961F34_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_C76FBF5BDDCD86A3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BAF6F107F0961F34_METHOD_1_C76FBF5BDDCD86A3_OFFSET))(this);
	}

	::Entitas::IEntity* get_OwnerEntity()
	{
		return ((::Entitas::IEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BAF6F107F0961F34_GET_OWNERENTITY_OFFSET))(this);
	}

	::System::Void set_OwnerEntity(::Entitas::IEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_1_BAF6F107F0961F34_SET_OWNERENTITY_OFFSET))(this, a1);
	}

	::Class_1_47EE63CB5C4DC8FC_5* get_Services()
	{
		return ((::Class_1_47EE63CB5C4DC8FC_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BAF6F107F0961F34_GET_SERVICES_OFFSET))(this);
	}

	::System::Void set_Services(::Class_1_47EE63CB5C4DC8FC_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_47EE63CB5C4DC8FC_5*))((::PBYTE)hIl2Cpp + CLASS_1_BAF6F107F0961F34_SET_SERVICES_OFFSET))(this, a1);
	}

	::Entitas::IContexts* get_Contexts()
	{
		return ((::Entitas::IContexts*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BAF6F107F0961F34_GET_CONTEXTS_OFFSET))(this);
	}

	::System::Void set_Contexts(::Entitas::IContexts* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContexts*))((::PBYTE)hIl2Cpp + CLASS_1_BAF6F107F0961F34_SET_CONTEXTS_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::Move::MoveState get_CurrentState()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BAF6F107F0961F34_GET_CURRENTSTATE_OFFSET))(this);
	}

	::System::Void set_CurrentState(::RPG::Client::LittleGame::Move::MoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_1_BAF6F107F0961F34_SET_CURRENTSTATE_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::Move::MoveState get_PrevState()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BAF6F107F0961F34_GET_PREVSTATE_OFFSET))(this);
	}

	::System::Void set_PrevState(::RPG::Client::LittleGame::Move::MoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_1_BAF6F107F0961F34_SET_PREVSTATE_OFFSET))(this, a1);
	}

	::Class_1_C35CD375605BD7E2* get__CurrentStateInstance()
	{
		return ((::Class_1_C35CD375605BD7E2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BAF6F107F0961F34_GET__CURRENTSTATEINSTANCE_OFFSET))(this);
	}

	::System::Void set__CurrentStateInstance(::Class_1_C35CD375605BD7E2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C35CD375605BD7E2*))((::PBYTE)hIl2Cpp + CLASS_1_BAF6F107F0961F34_SET__CURRENTSTATEINSTANCE_OFFSET))(this, a1);
	}
};
