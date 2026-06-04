#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/System/Object.h"

class Class_1_9E4EA1938DE3A3E4;

#define CLASS_1_F9FBCC956DFCF137_2_CLEAR_OFFSET UNITYSDK_OFFSET(0x18DC6630)
#define CLASS_1_F9FBCC956DFCF137_2_GET__STATEMACHINE_OFFSET UNITYSDK_OFFSET(0x18DC6730)
#define CLASS_1_F9FBCC956DFCF137_2_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x18DC65D0)
#define CLASS_1_F9FBCC956DFCF137_2_METHOD_1_F48B6E9D83D3B226_OFFSET UNITYSDK_OFFSET(0x18DC6720)
#define CLASS_1_F9FBCC956DFCF137_2_METHOD_1_FD826D18570CEBD6_1_OFFSET UNITYSDK_OFFSET(0x18DC66D0)
#define CLASS_1_F9FBCC956DFCF137_2_METHOD_1_FD826D18570CEBD6_OFFSET UNITYSDK_OFFSET(0x18DC6680)
#define CLASS_1_F9FBCC956DFCF137_2_SET__STATEMACHINE_OFFSET UNITYSDK_OFFSET(0x18DC6740)
#define CLASS_1_F9FBCC956DFCF137_2__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC6750)

inline static constexpr unsigned int Class_1_F9FBCC956DFCF137_2_TypeDefinitionIndex = 40242;

class Class_1_F9FBCC956DFCF137_2 : public ::System::Object
{
public:
	::Class_1_9E4EA1938DE3A3E4* __StateMachine_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_9E4EA1938DE3A3E4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9E4EA1938DE3A3E4*))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_2_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_2_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_FD826D18570CEBD6(::RPG::Client::LittleGame::Move::MoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_2_METHOD_1_FD826D18570CEBD6_OFFSET))(this, a1);
	}

	::System::Void Method_1_FD826D18570CEBD6_1(::RPG::Client::LittleGame::Move::MoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_2_METHOD_1_FD826D18570CEBD6_1_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::Move::MoveState Method_1_F48B6E9D83D3B226()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_2_METHOD_1_F48B6E9D83D3B226_OFFSET))(this);
	}

	::Class_1_9E4EA1938DE3A3E4* get__StateMachine()
	{
		return ((::Class_1_9E4EA1938DE3A3E4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_2_GET__STATEMACHINE_OFFSET))(this);
	}

	::System::Void set__StateMachine(::Class_1_9E4EA1938DE3A3E4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9E4EA1938DE3A3E4*))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_2_SET__STATEMACHINE_OFFSET))(this, a1);
	}
};
