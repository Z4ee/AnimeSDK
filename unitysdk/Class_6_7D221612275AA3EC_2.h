#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_5_426AC4B5206DCF5A.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"

#define CLASS_6_7D221612275AA3EC_2_METHOD_6_F48B6E9D83D3B226_OFFSET UNITYSDK_OFFSET(0x1A014060)
#define CLASS_6_7D221612275AA3EC_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1A014070)

inline static constexpr unsigned int Class_6_7D221612275AA3EC_2_TypeDefinitionIndex = 76535;

class Class_6_7D221612275AA3EC_2 : public ::Class_5_426AC4B5206DCF5A
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_7D221612275AA3EC_2__CTOR_OFFSET))(this);
	}

	::RPG::Client::LittleGame::Move::MoveState Method_6_F48B6E9D83D3B226()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_7D221612275AA3EC_2_METHOD_6_F48B6E9D83D3B226_OFFSET))(this);
	}
};
