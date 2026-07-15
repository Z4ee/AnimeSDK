#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillCharacterComponent_SkillMappingByKeyEntry_TypeDefinitionIndex = 55098;

	struct alignas(8) SkillCharacterComponent_SkillMappingByKeyEntry
	{
		::System::String* MappingKey; // 0x10
		::System::String* OriginTriggerKey; // 0x18
		::System::String* TargetTriggerKey; // 0x20
	};
}
