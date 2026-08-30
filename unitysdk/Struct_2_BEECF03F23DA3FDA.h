#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillPropertyModifyType.h"
#include "unitysdk/RPG/GameCore/SkillPropertyType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }

inline static constexpr unsigned int Struct_2_BEECF03F23DA3FDA_TypeDefinitionIndex = 56023;

struct alignas(8) Struct_2_BEECF03F23DA3FDA
{
	::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x10
	::RPG::GameCore::ControlSkillType MJMANGILLPH; // 0x18
	::RPG::GameCore::SkillPropertyType ACHILGIPGKL; // 0x1C
	::RPG::GameCore::SkillPropertyModifyType KFAPHPGFEMK; // 0x20
	::RPG::GameCore::FixPoint MNDFOPKBHKP; // 0x28
};
