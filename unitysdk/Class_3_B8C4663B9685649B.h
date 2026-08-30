#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CA68150416BED9E5.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define CLASS_3_B8C4663B9685649B_METHOD_3_734CC582838F149E_OFFSET UNITYSDK_OFFSET(0x18725620)
#define CLASS_3_B8C4663B9685649B_METHOD_3_A3CC09E78CBD443F_OFFSET UNITYSDK_OFFSET(0x18725550)
#define CLASS_3_B8C4663B9685649B_METHOD_3_A5399A0D57CB1550_OFFSET UNITYSDK_OFFSET(0x18726350)
#define CLASS_3_B8C4663B9685649B_METHOD_3_F22E917EA16961A8_OFFSET UNITYSDK_OFFSET(0x18725B70)
#define CLASS_3_B8C4663B9685649B__CTOR_OFFSET UNITYSDK_OFFSET(0x187263A0)

inline static constexpr unsigned int Class_3_B8C4663B9685649B_TypeDefinitionIndex = 76586;

class Class_3_B8C4663B9685649B : public ::Class_2_CA68150416BED9E5
{
public:
	::System::Boolean KMJDOBGMBAF; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B8C4663B9685649B__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_A3CC09E78CBD443F(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + CLASS_3_B8C4663B9685649B_METHOD_3_A3CC09E78CBD443F_OFFSET))(this, a1);
	}

	::System::Void Method_3_734CC582838F149E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_B8C4663B9685649B_METHOD_3_734CC582838F149E_OFFSET))(this, a1);
	}

	::System::Void Method_3_F22E917EA16961A8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_B8C4663B9685649B_METHOD_3_F22E917EA16961A8_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::FiveDim::PropMoveState Method_3_A5399A0D57CB1550()
	{
		return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B8C4663B9685649B_METHOD_3_A5399A0D57CB1550_OFFSET))(this);
	}
};
