#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_5_E28F1469D4F00E3D.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"

#define CLASS_6_7D221612275AA3EC_METHOD_6_F48B6E9D83D3B226_OFFSET UNITYSDK_OFFSET(0x146FF590)
#define CLASS_6_7D221612275AA3EC__CTOR_OFFSET UNITYSDK_OFFSET(0x146FF5A0)

inline static constexpr unsigned int Class_6_7D221612275AA3EC_TypeDefinitionIndex = 72843;

class Class_6_7D221612275AA3EC : public ::Class_5_E28F1469D4F00E3D
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_7D221612275AA3EC__CTOR_OFFSET))(this);
	}

	::RPG::Client::LittleGame::Move::MoveState Method_6_F48B6E9D83D3B226()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_7D221612275AA3EC_METHOD_6_F48B6E9D83D3B226_OFFSET))(this);
	}
};
