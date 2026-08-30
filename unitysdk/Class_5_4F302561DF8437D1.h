#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_4FC35BB1A7DA7FAD.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"

#define CLASS_5_4F302561DF8437D1_METHOD_5_F48B6E9D83D3B226_OFFSET UNITYSDK_OFFSET(0xC421BA0)
#define CLASS_5_4F302561DF8437D1__CTOR_OFFSET UNITYSDK_OFFSET(0xC421BB0)

inline static constexpr unsigned int Class_5_4F302561DF8437D1_TypeDefinitionIndex = 76496;

class Class_5_4F302561DF8437D1 : public ::Class_4_4FC35BB1A7DA7FAD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_4F302561DF8437D1__CTOR_OFFSET))(this);
	}

	::RPG::Client::LittleGame::Move::MoveState Method_5_F48B6E9D83D3B226()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_4F302561DF8437D1_METHOD_5_F48B6E9D83D3B226_OFFSET))(this);
	}
};
