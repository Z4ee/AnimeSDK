#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/System/Object.h"

class Class_1_BAF6F107F0961F34;

#define CLASS_1_C35CD375605BD7E2_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B17D1D0)
#define CLASS_1_C35CD375605BD7E2_GET__STATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1B17D340)
#define CLASS_1_C35CD375605BD7E2_METHOD_1_4EF1C1799390414B_OFFSET UNITYSDK_OFFSET(0x1B17D110)
#define CLASS_1_C35CD375605BD7E2_METHOD_1_F48B6E9D83D3B226_OFFSET UNITYSDK_OFFSET(0x1B17D330)
#define CLASS_1_C35CD375605BD7E2_METHOD_1_FD826D18570CEBD6_1_OFFSET UNITYSDK_OFFSET(0x1B17D2E0)
#define CLASS_1_C35CD375605BD7E2_METHOD_1_FD826D18570CEBD6_OFFSET UNITYSDK_OFFSET(0x1B17D290)
#define CLASS_1_C35CD375605BD7E2_SET__STATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1B17D350)
#define CLASS_1_C35CD375605BD7E2__CTOR_OFFSET UNITYSDK_OFFSET(0x1B17D360)

inline static constexpr unsigned int Class_1_C35CD375605BD7E2_TypeDefinitionIndex = 41057;

class Class_1_C35CD375605BD7E2 : public ::System::Object
{
public:
	::Class_1_BAF6F107F0961F34* __StateMachine_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C35CD375605BD7E2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4EF1C1799390414B(::Class_1_BAF6F107F0961F34* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BAF6F107F0961F34*))((::PBYTE)hIl2Cpp + CLASS_1_C35CD375605BD7E2_METHOD_1_4EF1C1799390414B_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C35CD375605BD7E2_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_FD826D18570CEBD6(::RPG::Client::LittleGame::Move::MoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_1_C35CD375605BD7E2_METHOD_1_FD826D18570CEBD6_OFFSET))(this, a1);
	}

	::System::Void Method_1_FD826D18570CEBD6_1(::RPG::Client::LittleGame::Move::MoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_1_C35CD375605BD7E2_METHOD_1_FD826D18570CEBD6_1_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::Move::MoveState Method_1_F48B6E9D83D3B226()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C35CD375605BD7E2_METHOD_1_F48B6E9D83D3B226_OFFSET))(this);
	}

	::Class_1_BAF6F107F0961F34* get__StateMachine()
	{
		return ((::Class_1_BAF6F107F0961F34*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C35CD375605BD7E2_GET__STATEMACHINE_OFFSET))(this);
	}

	::System::Void set__StateMachine(::Class_1_BAF6F107F0961F34* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BAF6F107F0961F34*))((::PBYTE)hIl2Cpp + CLASS_1_C35CD375605BD7E2_SET__STATEMACHINE_OFFSET))(this, a1);
	}
};
