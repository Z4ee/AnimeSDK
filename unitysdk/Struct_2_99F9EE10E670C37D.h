#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class TeamDataComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

inline static constexpr unsigned int Struct_2_99F9EE10E670C37D_TypeDefinitionIndex = 54343;

struct alignas(8) Struct_2_99F9EE10E670C37D
{
	::RPG::GameCore::TeamDataComponent* Field_2_0; // 0x10
	::RPG::GameCore::TurnBasedModifierInstance* Field_2_1; // 0x18
	::System::Int32 Field_2_2; // 0x20
};
