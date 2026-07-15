#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillPropertyModifyType.h"
#include "unitysdk/RPG/GameCore/SkillPropertyType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }

inline static constexpr unsigned int Struct_2_BEECF03F23DA3FDA_TypeDefinitionIndex = 53309;

struct alignas(8) Struct_2_BEECF03F23DA3FDA
{
	::RPG::GameCore::GameEntity* Field_2_0; // 0x10
	::RPG::GameCore::ControlSkillType Field_2_1; // 0x18
	::RPG::GameCore::SkillPropertyType Field_2_2; // 0x1C
	::RPG::GameCore::SkillPropertyModifyType Field_2_3; // 0x20
	::RPG::GameCore::FixPoint Field_2_4; // 0x28
};
