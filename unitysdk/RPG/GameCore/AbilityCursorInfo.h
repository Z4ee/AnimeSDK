#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityCursorInfo_TypeDefinitionIndex = 51927;

	struct alignas(8) AbilityCursorInfo
	{
		::RPG::GameCore::GameEntity* PointEntity; // 0x10
		::RPG::MVector3 PointMap; // 0x18
		::System::Boolean IsCombo; // 0x24
		::UnityEngine::Transform* PointEntitySelectTransform; // 0x28
		::RPG::MVector3 SkillPointPos; // 0x30
	};
}
