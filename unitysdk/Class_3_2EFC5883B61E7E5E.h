#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_38.h"
#include "unitysdk/MoleMole/Arcade/BallsRace/EBrSpeedLevel.h"

#define CLASS_3_2EFC5883B61E7E5E__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0D2D50)

inline static constexpr unsigned int Class_3_2EFC5883B61E7E5E_TypeDefinitionIndex = 92237;

class Class_3_2EFC5883B61E7E5E : public ::Class_2_A48F3719AA1CF200_38
{
public:
	::MoleMole::Arcade::BallsRace::EBrSpeedLevel Field_3_0; // 0x20
	::System::UInt32 Field_3_1; // 0x24
	::MoleMole::Arcade::BallsRace::EBrSpeedLevel Field_3_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2EFC5883B61E7E5E__CTOR_OFFSET))(this);
	}
};
