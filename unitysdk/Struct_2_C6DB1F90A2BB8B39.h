#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/RPG/GameCore/SkillInputType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }

inline static constexpr unsigned int Struct_2_C6DB1F90A2BB8B39_TypeDefinitionIndex = 71940;

struct alignas(8) Struct_2_C6DB1F90A2BB8B39
{
	::RPG::Client::UISkillIndex GMDBHJKEAEI; // 0x10
	::RPG::GameCore::SkillInputType KHCNPIAHPOD; // 0x14
	::RPG::GameCore::GameEntity* GDCCJFKJGPD; // 0x18
	::System::Single GCMOKMIEHDB; // 0x20
};
