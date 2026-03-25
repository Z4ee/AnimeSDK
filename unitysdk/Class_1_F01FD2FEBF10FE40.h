#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/System/Object.h"

class Class_1_9E4EA1938DE3A3E4;

#define CLASS_1_F01FD2FEBF10FE40_CLEAR_OFFSET UNITYSDK_OFFSET(0x1677CAE0)
#define CLASS_1_F01FD2FEBF10FE40_GET__STATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1677CBE0)
#define CLASS_1_F01FD2FEBF10FE40_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x1677CA80)
#define CLASS_1_F01FD2FEBF10FE40_METHOD_1_F48B6E9D83D3B226_OFFSET UNITYSDK_OFFSET(0x1677CBD0)
#define CLASS_1_F01FD2FEBF10FE40_METHOD_1_FD826D18570CEBD6_1_OFFSET UNITYSDK_OFFSET(0x1677CB80)
#define CLASS_1_F01FD2FEBF10FE40_METHOD_1_FD826D18570CEBD6_OFFSET UNITYSDK_OFFSET(0x1677CB30)
#define CLASS_1_F01FD2FEBF10FE40_SET__STATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1677CBF0)
#define CLASS_1_F01FD2FEBF10FE40__CTOR_OFFSET UNITYSDK_OFFSET(0x1677CC00)

inline static constexpr unsigned int Class_1_F01FD2FEBF10FE40_TypeDefinitionIndex = 33668;

class Class_1_F01FD2FEBF10FE40 : public ::System::Object
{
public:
	::Class_1_9E4EA1938DE3A3E4* __StateMachine_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F01FD2FEBF10FE40__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_9E4EA1938DE3A3E4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9E4EA1938DE3A3E4*))((::PBYTE)hIl2Cpp + CLASS_1_F01FD2FEBF10FE40_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F01FD2FEBF10FE40_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_FD826D18570CEBD6(::RPG::Client::LittleGame::Move::MoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_1_F01FD2FEBF10FE40_METHOD_1_FD826D18570CEBD6_OFFSET))(this, a1);
	}

	::System::Void Method_1_FD826D18570CEBD6_1(::RPG::Client::LittleGame::Move::MoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_1_F01FD2FEBF10FE40_METHOD_1_FD826D18570CEBD6_1_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::Move::MoveState Method_1_F48B6E9D83D3B226()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F01FD2FEBF10FE40_METHOD_1_F48B6E9D83D3B226_OFFSET))(this);
	}

	::Class_1_9E4EA1938DE3A3E4* get__StateMachine()
	{
		return ((::Class_1_9E4EA1938DE3A3E4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F01FD2FEBF10FE40_GET__STATEMACHINE_OFFSET))(this);
	}

	::System::Void set__StateMachine(::Class_1_9E4EA1938DE3A3E4* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9E4EA1938DE3A3E4*))((::PBYTE)hIl2Cpp + CLASS_1_F01FD2FEBF10FE40_SET__STATEMACHINE_OFFSET))(this, value);
	}
};
