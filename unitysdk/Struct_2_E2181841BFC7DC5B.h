#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }

inline static constexpr unsigned int Struct_2_E2181841BFC7DC5B_TypeDefinitionIndex = 55181;

struct alignas(8) Struct_2_E2181841BFC7DC5B
{
	::RPG::GameCore::TurnBasedModifierInstance* Field_2_0; // 0x10
	::RPG::GameCore::FixPoint Field_2_1; // 0x18
	::RPG::GameCore::FixPoint Field_2_2; // 0x20
	::System::Int32 Field_2_3; // 0x28
};
