#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/System/Object.h"

class Class_1_47EE63CB5C4DC8FC_5;
class Class_1_F9FBCC956DFCF137_2;
namespace Entitas { class IContexts; }
namespace Entitas { class IEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9E4EA1938DE3A3E4_CLEAR_OFFSET UNITYSDK_OFFSET(0x18D88F40)
#define CLASS_1_9E4EA1938DE3A3E4_GET_CONTEXTS_OFFSET UNITYSDK_OFFSET(0x18D89400)
#define CLASS_1_9E4EA1938DE3A3E4_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x18D89420)
#define CLASS_1_9E4EA1938DE3A3E4_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x18D893C0)
#define CLASS_1_9E4EA1938DE3A3E4_GET_PREVSTATE_OFFSET UNITYSDK_OFFSET(0x18D89440)
#define CLASS_1_9E4EA1938DE3A3E4_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0x18D893E0)
#define CLASS_1_9E4EA1938DE3A3E4_GET__CURRENTSTATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x18D89460)
#define CLASS_1_9E4EA1938DE3A3E4_METHOD_1_0BA9D3A9F2E6AC04_OFFSET UNITYSDK_OFFSET(0x18D89170)
#define CLASS_1_9E4EA1938DE3A3E4_METHOD_1_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0x18D89320)
#define CLASS_1_9E4EA1938DE3A3E4_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x18D892C0)
#define CLASS_1_9E4EA1938DE3A3E4_METHOD_1_7F0B70E2FD52BA66_OFFSET UNITYSDK_OFFSET(0x18D88E90)
#define CLASS_1_9E4EA1938DE3A3E4_METHOD_1_C76FBF5BDDCD86A3_OFFSET UNITYSDK_OFFSET(0x18D88FF0)
#define CLASS_1_9E4EA1938DE3A3E4_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18D89380)
#define CLASS_1_9E4EA1938DE3A3E4_SET_CONTEXTS_OFFSET UNITYSDK_OFFSET(0x18D89410)
#define CLASS_1_9E4EA1938DE3A3E4_SET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x18D89430)
#define CLASS_1_9E4EA1938DE3A3E4_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x18D893D0)
#define CLASS_1_9E4EA1938DE3A3E4_SET_PREVSTATE_OFFSET UNITYSDK_OFFSET(0x18D89450)
#define CLASS_1_9E4EA1938DE3A3E4_SET_SERVICES_OFFSET UNITYSDK_OFFSET(0x18D893F0)
#define CLASS_1_9E4EA1938DE3A3E4_SET__CURRENTSTATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x18D89470)
#define CLASS_1_9E4EA1938DE3A3E4__CTOR_OFFSET UNITYSDK_OFFSET(0x18D89480)

inline static constexpr unsigned int Class_1_9E4EA1938DE3A3E4_TypeDefinitionIndex = 40244;

class Class_1_9E4EA1938DE3A3E4 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::Move::MoveState, ::Class_1_F9FBCC956DFCF137_2*>* Field_1_0; // 0x10
	::Class_1_F9FBCC956DFCF137_2* __CurrentStateInstance_k__BackingField; // 0x18
	::Entitas::IEntity* _OwnerEntity_k__BackingField; // 0x20
	::Entitas::IContexts* _Contexts_k__BackingField; // 0x28
	::Class_1_47EE63CB5C4DC8FC_5* _Services_k__BackingField; // 0x30
	::RPG::Client::LittleGame::Move::MoveState _PrevState_k__BackingField; // 0x38
	::RPG::Client::LittleGame::Move::MoveState _CurrentState_k__BackingField; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E4EA1938DE3A3E4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7F0B70E2FD52BA66(::Entitas::IEntity* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::Entitas::IContexts* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Entitas::IContexts*))((::PBYTE)hIl2Cpp + CLASS_1_9E4EA1938DE3A3E4_METHOD_1_7F0B70E2FD52BA66_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E4EA1938DE3A3E4_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_0BA9D3A9F2E6AC04(::RPG::Client::LittleGame::Move::MoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_1_9E4EA1938DE3A3E4_METHOD_1_0BA9D3A9F2E6AC04_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9E4EA1938DE3A3E4_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9E4EA1938DE3A3E4_METHOD_1_2685B6183E614529_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E4EA1938DE3A3E4_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_C76FBF5BDDCD86A3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E4EA1938DE3A3E4_METHOD_1_C76FBF5BDDCD86A3_OFFSET))(this);
	}

	::Entitas::IEntity* get_OwnerEntity()
	{
		return ((::Entitas::IEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E4EA1938DE3A3E4_GET_OWNERENTITY_OFFSET))(this);
	}

	::System::Void set_OwnerEntity(::Entitas::IEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9E4EA1938DE3A3E4_SET_OWNERENTITY_OFFSET))(this, a1);
	}

	::Class_1_47EE63CB5C4DC8FC_5* get_Services()
	{
		return ((::Class_1_47EE63CB5C4DC8FC_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E4EA1938DE3A3E4_GET_SERVICES_OFFSET))(this);
	}

	::System::Void set_Services(::Class_1_47EE63CB5C4DC8FC_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_47EE63CB5C4DC8FC_5*))((::PBYTE)hIl2Cpp + CLASS_1_9E4EA1938DE3A3E4_SET_SERVICES_OFFSET))(this, a1);
	}

	::Entitas::IContexts* get_Contexts()
	{
		return ((::Entitas::IContexts*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E4EA1938DE3A3E4_GET_CONTEXTS_OFFSET))(this);
	}

	::System::Void set_Contexts(::Entitas::IContexts* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContexts*))((::PBYTE)hIl2Cpp + CLASS_1_9E4EA1938DE3A3E4_SET_CONTEXTS_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::Move::MoveState get_CurrentState()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E4EA1938DE3A3E4_GET_CURRENTSTATE_OFFSET))(this);
	}

	::System::Void set_CurrentState(::RPG::Client::LittleGame::Move::MoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_1_9E4EA1938DE3A3E4_SET_CURRENTSTATE_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::Move::MoveState get_PrevState()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E4EA1938DE3A3E4_GET_PREVSTATE_OFFSET))(this);
	}

	::System::Void set_PrevState(::RPG::Client::LittleGame::Move::MoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_1_9E4EA1938DE3A3E4_SET_PREVSTATE_OFFSET))(this, a1);
	}

	::Class_1_F9FBCC956DFCF137_2* get__CurrentStateInstance()
	{
		return ((::Class_1_F9FBCC956DFCF137_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E4EA1938DE3A3E4_GET__CURRENTSTATEINSTANCE_OFFSET))(this);
	}

	::System::Void set__CurrentStateInstance(::Class_1_F9FBCC956DFCF137_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_2*))((::PBYTE)hIl2Cpp + CLASS_1_9E4EA1938DE3A3E4_SET__CURRENTSTATEINSTANCE_OFFSET))(this, a1);
	}
};
