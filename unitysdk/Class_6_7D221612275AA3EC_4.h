#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_5_426AC4B5206DCF5A.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"

#define CLASS_6_7D221612275AA3EC_4_METHOD_6_F48B6E9D83D3B226_OFFSET UNITYSDK_OFFSET(0x17F01980)
#define CLASS_6_7D221612275AA3EC_4__CTOR_OFFSET UNITYSDK_OFFSET(0x17F01990)

inline static constexpr unsigned int Class_6_7D221612275AA3EC_4_TypeDefinitionIndex = 73059;

class Class_6_7D221612275AA3EC_4 : public ::Class_5_426AC4B5206DCF5A
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_7D221612275AA3EC_4__CTOR_OFFSET))(this);
	}

	::RPG::Client::LittleGame::Move::MoveState Method_6_F48B6E9D83D3B226()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_7D221612275AA3EC_4_METHOD_6_F48B6E9D83D3B226_OFFSET))(this);
	}
};
