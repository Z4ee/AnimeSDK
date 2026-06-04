#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }

inline static constexpr unsigned int Struct_2_30FE4D7090E79AB8_TypeDefinitionIndex = 53962;

struct alignas(8) Struct_2_30FE4D7090E79AB8
{
	::RPG::GameCore::TurnBasedModifierInstance* Field_2_0; // 0x10
	::RPG::GameCore::FixPoint Field_2_1; // 0x18
	::RPG::GameCore::FixPoint Field_2_2; // 0x20
};
