#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_6_96AC714510E04C56.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"

#define CLASS_7_EC2774648EC3B2BF_2_METHOD_7_F48B6E9D83D3B226_OFFSET UNITYSDK_OFFSET(0x15E19060)
#define CLASS_7_EC2774648EC3B2BF_2__CTOR_OFFSET UNITYSDK_OFFSET(0x15E19070)

inline static constexpr unsigned int Class_7_EC2774648EC3B2BF_2_TypeDefinitionIndex = 73040;

class Class_7_EC2774648EC3B2BF_2 : public ::Class_6_96AC714510E04C56
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_7_EC2774648EC3B2BF_2__CTOR_OFFSET))(this);
	}

	::RPG::Client::LittleGame::Move::MoveState Method_7_F48B6E9D83D3B226()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_7_EC2774648EC3B2BF_2_METHOD_7_F48B6E9D83D3B226_OFFSET))(this);
	}
};
