#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_5_D1002630455E15C8.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"

#define CLASS_6_7D221612275AA3EC_1_METHOD_6_F48B6E9D83D3B226_OFFSET UNITYSDK_OFFSET(0x1AA5E8C0)
#define CLASS_6_7D221612275AA3EC_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA5E8D0)

inline static constexpr unsigned int Class_6_7D221612275AA3EC_1_TypeDefinitionIndex = 76532;

class Class_6_7D221612275AA3EC_1 : public ::Class_5_D1002630455E15C8
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_7D221612275AA3EC_1__CTOR_OFFSET))(this);
	}

	::RPG::Client::LittleGame::Move::MoveState Method_6_F48B6E9D83D3B226()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_7D221612275AA3EC_1_METHOD_6_F48B6E9D83D3B226_OFFSET))(this);
	}
};
