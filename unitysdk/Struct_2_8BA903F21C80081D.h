#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
#include "unitysdk/RPG/GameCore/RtDefenceCharacterType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/ValueType.h"

inline static constexpr unsigned int Struct_2_8BA903F21C80081D_TypeDefinitionIndex = 51843;

struct alignas(8) Struct_2_8BA903F21C80081D
{
	::RPG::GameCore::RtDefenceCharacterType Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x14
	::System::UInt32 Field_2_2; // 0x18
	::RPG::GameCore::TeamType Field_2_3; // 0x1C
	::RPG::GameCore::FixVec3 Field_2_4; // 0x20
	::RPG::GameCore::FixPoint Field_2_5; // 0x38
};
