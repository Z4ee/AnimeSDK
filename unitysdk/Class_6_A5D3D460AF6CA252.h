#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_5_F78E64CA0EF18F65.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"

#define CLASS_6_A5D3D460AF6CA252_METHOD_6_F48B6E9D83D3B226_OFFSET UNITYSDK_OFFSET(0x142C1780)
#define CLASS_6_A5D3D460AF6CA252__CTOR_OFFSET UNITYSDK_OFFSET(0x142C1790)

inline static constexpr unsigned int Class_6_A5D3D460AF6CA252_TypeDefinitionIndex = 71319;

class Class_6_A5D3D460AF6CA252 : public ::Class_5_F78E64CA0EF18F65
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_A5D3D460AF6CA252__CTOR_OFFSET))(this);
	}

	::RPG::Client::LittleGame::Move::MoveState Method_6_F48B6E9D83D3B226()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_A5D3D460AF6CA252_METHOD_6_F48B6E9D83D3B226_OFFSET))(this);
	}
};
