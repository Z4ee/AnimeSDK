#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_5_378914602721C574.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"

#define CLASS_6_7D221612275AA3EC_2_METHOD_6_F48B6E9D83D3B226_OFFSET UNITYSDK_OFFSET(0xD193820)
#define CLASS_6_7D221612275AA3EC_2__CTOR_OFFSET UNITYSDK_OFFSET(0xD193830)

inline static constexpr unsigned int Class_6_7D221612275AA3EC_2_TypeDefinitionIndex = 62698;

class Class_6_7D221612275AA3EC_2 : public ::Class_5_378914602721C574
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
