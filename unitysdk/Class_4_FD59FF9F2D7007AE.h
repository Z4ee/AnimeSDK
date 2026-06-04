#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_C77F9F259E170FB8.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"

#define CLASS_4_FD59FF9F2D7007AE_METHOD_4_F48B6E9D83D3B226_OFFSET UNITYSDK_OFFSET(0x1386CD10)
#define CLASS_4_FD59FF9F2D7007AE__CTOR_OFFSET UNITYSDK_OFFSET(0x1386CD20)

inline static constexpr unsigned int Class_4_FD59FF9F2D7007AE_TypeDefinitionIndex = 71518;

class Class_4_FD59FF9F2D7007AE : public ::Class_3_C77F9F259E170FB8
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_FD59FF9F2D7007AE__CTOR_OFFSET))(this);
	}

	::RPG::Client::LittleGame::Move::MoveState Method_4_F48B6E9D83D3B226()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_FD59FF9F2D7007AE_METHOD_4_F48B6E9D83D3B226_OFFSET))(this);
	}
};
