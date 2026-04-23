#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F1CE991A39DFDC5B.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define CLASS_3_3523F25B4D60D271_1_METHOD_3_1E01B0A97CB45672_OFFSET UNITYSDK_OFFSET(0x9A2FE20)
#define CLASS_3_3523F25B4D60D271_1_METHOD_3_2B947C15539E71F2_OFFSET UNITYSDK_OFFSET(0x9A2FBF0)
#define CLASS_3_3523F25B4D60D271_1__CTOR_OFFSET UNITYSDK_OFFSET(0x9A2FE00)

inline static constexpr unsigned int Class_3_3523F25B4D60D271_1_TypeDefinitionIndex = 70746;

class Class_3_3523F25B4D60D271_1 : public ::Class_2_F1CE991A39DFDC5B
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3523F25B4D60D271_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_2B947C15539E71F2(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + CLASS_3_3523F25B4D60D271_1_METHOD_3_2B947C15539E71F2_OFFSET))(this, a1);
	}

	::System::Void Method_3_1E01B0A97CB45672(::RPG::Client::LittleGame::FiveDim::PropMoveState P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + CLASS_3_3523F25B4D60D271_1_METHOD_3_1E01B0A97CB45672_OFFSET))(this, P0);
	}
};
