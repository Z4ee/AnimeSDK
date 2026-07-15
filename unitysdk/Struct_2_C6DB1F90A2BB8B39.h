#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/RPG/GameCore/SkillInputType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }

inline static constexpr unsigned int Struct_2_C6DB1F90A2BB8B39_TypeDefinitionIndex = 68741;

struct alignas(8) Struct_2_C6DB1F90A2BB8B39
{
	::RPG::Client::UISkillIndex Field_2_0; // 0x10
	::RPG::GameCore::SkillInputType Field_2_1; // 0x14
	::RPG::GameCore::GameEntity* Field_2_2; // 0x18
	::System::Single Field_2_3; // 0x20
};
