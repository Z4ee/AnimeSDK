#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Arcade/BallsRace/EBrSpeedLevel.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_825CDBE011CA0682_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x9F7E70)

inline static constexpr unsigned int Struct_2_825CDBE011CA0682_TypeDefinitionIndex = 91996;

struct alignas(4) Struct_2_825CDBE011CA0682
{
	::System::UInt32 Field_2_1; // 0x10
	::MoleMole::Arcade::BallsRace::EBrSpeedLevel Field_2_0; // 0x14
	::MoleMole::Arcade::BallsRace::EBrSpeedLevel Field_2_7; // 0x18

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_825CDBE011CA0682_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}
};
