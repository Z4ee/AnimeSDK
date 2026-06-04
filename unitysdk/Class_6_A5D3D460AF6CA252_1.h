#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_5_AB8506B77E06E984.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"

#define CLASS_6_A5D3D460AF6CA252_1_METHOD_6_F48B6E9D83D3B226_OFFSET UNITYSDK_OFFSET(0x1360E0B0)
#define CLASS_6_A5D3D460AF6CA252_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1360E0C0)

inline static constexpr unsigned int Class_6_A5D3D460AF6CA252_1_TypeDefinitionIndex = 71326;

class Class_6_A5D3D460AF6CA252_1 : public ::Class_5_AB8506B77E06E984
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_A5D3D460AF6CA252_1__CTOR_OFFSET))(this);
	}

	::RPG::Client::LittleGame::Move::MoveState Method_6_F48B6E9D83D3B226()
	{
		return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_A5D3D460AF6CA252_1_METHOD_6_F48B6E9D83D3B226_OFFSET))(this);
	}
};
