#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D43919DCE1F00DCB.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define CLASS_2_F1CE991A39DFDC5B_METHOD_2_4E608ED8CF3CBCB8_OFFSET UNITYSDK_OFFSET(0xB61BAC0)
#define CLASS_2_F1CE991A39DFDC5B_METHOD_2_A5399A0D57CB1550_OFFSET UNITYSDK_OFFSET(0xB61BB20)
#define CLASS_2_F1CE991A39DFDC5B_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xB61BA40)
#define CLASS_2_F1CE991A39DFDC5B__CTOR_OFFSET UNITYSDK_OFFSET(0xB61BB60)

inline static constexpr unsigned int Class_2_F1CE991A39DFDC5B_TypeDefinitionIndex = 76567;

class Class_2_F1CE991A39DFDC5B : public ::Class_1_D43919DCE1F00DCB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1CE991A39DFDC5B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F1CE991A39DFDC5B_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_2_4E608ED8CF3CBCB8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F1CE991A39DFDC5B_METHOD_2_4E608ED8CF3CBCB8_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::FiveDim::PropMoveState Method_2_A5399A0D57CB1550()
	{
		return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1CE991A39DFDC5B_METHOD_2_A5399A0D57CB1550_OFFSET))(this);
	}
};
