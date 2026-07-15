#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationTimeAtmosphereShowNumberType.h"
#include "unitysdk/RPG/GameCore/ElationTimeAtmosphereType.h"
#include "unitysdk/System/ValueType.h"

class Class_1_B83FEC6959AC95E7;
class Class_1_CDF807379B3F27B3;
namespace RPG::GameCore { class GameEntity; }

inline static constexpr unsigned int Struct_2_CD1E75D6195024B4_TypeDefinitionIndex = 53098;

struct alignas(8) Struct_2_CD1E75D6195024B4
{
	::System::Boolean Field_2_0; // 0x10
	::RPG::GameCore::ElationTimeAtmosphereType Field_2_1; // 0x14
	::RPG::GameCore::ElationTimeAtmosphereShowNumberType Field_2_2; // 0x18
	::System::Boolean Field_2_3; // 0x1C
	::RPG::GameCore::GameEntity* Field_2_4; // 0x20
	::Class_1_B83FEC6959AC95E7* Field_2_5; // 0x28
	::Class_1_CDF807379B3F27B3* Field_2_6; // 0x30
};
