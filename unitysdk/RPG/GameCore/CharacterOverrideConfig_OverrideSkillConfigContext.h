#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class SkillAbilityConfig; }
namespace RPG::GameCore { class SkillConfig; }
namespace System { class String; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterOverrideConfig_OverrideSkillConfigContext_TypeDefinitionIndex = 15870;

	struct alignas(8) CharacterOverrideConfig_OverrideSkillConfigContext
	{
		::Il2CppArray<::System::String*>* InheritSkillList; // 0x10
		::Il2CppArray<::System::String*>* ReplacedSkillList; // 0x18
		::Il2CppArray<::RPG::GameCore::SkillConfig*>* parentSkillList; // 0x20
		::Il2CppArray<::RPG::GameCore::SkillAbilityConfig*>* parentSkillAbilityList; // 0x28
		::Il2CppArray<::RPG::GameCore::SkillAbilityConfig*>* SkillAbilityList; // 0x30
		::Il2CppArray<::RPG::GameCore::SkillConfig*>* SkillList; // 0x38
	};
}
