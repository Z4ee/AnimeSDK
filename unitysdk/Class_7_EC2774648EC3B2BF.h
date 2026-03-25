#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_6_10F70C7F0ED76954.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"

#define CLASS_7_EC2774648EC3B2BF_METHOD_7_F48B6E9D83D3B226_OFFSET UNITYSDK_OFFSET(0x8C8CB10)
#define CLASS_7_EC2774648EC3B2BF__CTOR_OFFSET UNITYSDK_OFFSET(0x8C8CB20)

inline static constexpr unsigned int Class_7_EC2774648EC3B2BF_TypeDefinitionIndex = 38047;

class Class_7_EC2774648EC3B2BF : public ::Class_6_10F70C7F0ED76954
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_7_EC2774648EC3B2BF__CTOR_OFFSET))(this);
	}

	::RPG::Client::LittleGame::Move::MoveState Method_7_F48B6E9D83D3B226()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_7_EC2774648EC3B2BF_METHOD_7_F48B6E9D83D3B226_OFFSET))(this);
	}
};
