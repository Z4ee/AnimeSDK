#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillCharacterComponent_HitTargetTimeSlowRecord_TypeDefinitionIndex = 54866;

	struct alignas(8) SkillCharacterComponent_HitTargetTimeSlowRecord
	{
		::RPG::GameCore::GameEntity* Target; // 0x10
		::System::String* SlowKey; // 0x18
	};
}
