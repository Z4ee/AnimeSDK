#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IVec2.h"
#include "unitysdk/RPG/GameCore/RtSkillConditionMask.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }

inline static constexpr unsigned int Struct_2_CDF7A6A7F81C6784_TypeDefinitionIndex = 51580;

struct alignas(8) Struct_2_CDF7A6A7F81C6784
{
	::RPG::GameCore::RtSkillConditionMask Field_2_0; // 0x10
	::RPG::GameCore::GameEntity* Field_2_1; // 0x18
	::RPG::GameCore::IVec2 Field_2_2; // 0x20
};
