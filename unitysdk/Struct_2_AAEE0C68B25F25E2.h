#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class StageMonsterWave; }

inline static constexpr unsigned int Struct_2_AAEE0C68B25F25E2_TypeDefinitionIndex = 56379;

struct alignas(8) Struct_2_AAEE0C68B25F25E2
{
	::RPG::GameCore::GameEntity* Field_2_0; // 0x10
	::Il2CppArray<::RPG::GameCore::StageMonsterWave*>* Field_2_1; // 0x18
};
