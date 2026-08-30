#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_6A1F98E518DBB516.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define CLASS_3_55230CEF110DAF7B_1_METHOD_3_A5399A0D57CB1550_OFFSET UNITYSDK_OFFSET(0x159A9670)
#define CLASS_3_55230CEF110DAF7B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x159A96C0)

inline static constexpr unsigned int Class_3_55230CEF110DAF7B_1_TypeDefinitionIndex = 76562;

class Class_3_55230CEF110DAF7B_1 : public ::Class_2_6A1F98E518DBB516
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_55230CEF110DAF7B_1__CTOR_OFFSET))(this);
	}

	::RPG::Client::LittleGame::FiveDim::PropMoveState Method_3_A5399A0D57CB1550()
	{
		return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_55230CEF110DAF7B_1_METHOD_3_A5399A0D57CB1550_OFFSET))(this);
	}
};
