#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENTURETRIGGERTARGETABILITY_METHOD_3_2B60DF0544976F34_OFFSET UNITYSDK_OFFSET(0x1AE65AE0)
#define RPG_GAMECORE_ADVENTURETRIGGERTARGETABILITY_METHOD_3_E527B0B8970B3C59_OFFSET UNITYSDK_OFFSET(0x1AE65A40)
#define RPG_GAMECORE_ADVENTURETRIGGERTARGETABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE65AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureTriggerTargetAbility_TypeDefinitionIndex = 19425;

	class AdventureTriggerTargetAbility : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AdventureSkillType SkillType; // 0x20
		::System::String* AbilityName; // 0x28
		::RPG::GameCore::TargetEvaluator* AbilityTargetType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERTARGETABILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E527B0B8970B3C59(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureTriggerTargetAbility*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureTriggerTargetAbility*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERTARGETABILITY_METHOD_3_E527B0B8970B3C59_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2B60DF0544976F34(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureTriggerTargetAbility* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureTriggerTargetAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERTARGETABILITY_METHOD_3_2B60DF0544976F34_OFFSET))(a1, a2);
		}
	};
}
