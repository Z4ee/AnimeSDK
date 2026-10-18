#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_C77F9F259E170FB8.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/Struct_2_F31A7EC67A3AEEF7.h"

#define CLASS_4_171850A6D2530956_METHOD_4_464B80C09A37526F_OFFSET UNITYSDK_OFFSET(0xC366890)
#define CLASS_4_171850A6D2530956_METHOD_4_4A68D5B04E4B49C0_OFFSET UNITYSDK_OFFSET(0xC366800)
#define CLASS_4_171850A6D2530956_METHOD_4_F48B6E9D83D3B226_OFFSET UNITYSDK_OFFSET(0xC366BA0)
#define CLASS_4_171850A6D2530956__CTOR_OFFSET UNITYSDK_OFFSET(0xC366BB0)

inline static constexpr unsigned int Class_4_171850A6D2530956_TypeDefinitionIndex = 76990;

class Class_4_171850A6D2530956 : public ::Class_3_C77F9F259E170FB8
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_171850A6D2530956__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_4A68D5B04E4B49C0(::Struct_2_F31A7EC67A3AEEF7& a1, ::RPG::Client::LittleGame::Move::MoveState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F31A7EC67A3AEEF7&, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CLASS_4_171850A6D2530956_METHOD_4_4A68D5B04E4B49C0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_464B80C09A37526F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_171850A6D2530956_METHOD_4_464B80C09A37526F_OFFSET))(this);
	}

	::RPG::Client::LittleGame::Move::MoveState Method_4_F48B6E9D83D3B226()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_171850A6D2530956_METHOD_4_F48B6E9D83D3B226_OFFSET))(this);
	}
};
