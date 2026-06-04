#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98C5C40D787ACB09.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define CLASS_3_949ECA20FCCF9302_METHOD_3_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x13BE0D50)
#define CLASS_3_949ECA20FCCF9302_METHOD_3_A5399A0D57CB1550_OFFSET UNITYSDK_OFFSET(0x13BE0CE0)
#define CLASS_3_949ECA20FCCF9302_METHOD_3_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0x13BE0BF0)
#define CLASS_3_949ECA20FCCF9302__CTOR_OFFSET UNITYSDK_OFFSET(0x13BE0D30)

inline static constexpr unsigned int Class_3_949ECA20FCCF9302_TypeDefinitionIndex = 71567;

class Class_3_949ECA20FCCF9302 : public ::Class_2_98C5C40D787ACB09
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_949ECA20FCCF9302__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_AD23FDCC7576BB32(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_949ECA20FCCF9302_METHOD_3_AD23FDCC7576BB32_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::FiveDim::PropMoveState Method_3_A5399A0D57CB1550()
	{
		return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_949ECA20FCCF9302_METHOD_3_A5399A0D57CB1550_OFFSET))(this);
	}

	::System::Void Method_3_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_949ECA20FCCF9302_METHOD_3_3C927B51D2142A24_OFFSET))(this, a1);
	}
};
