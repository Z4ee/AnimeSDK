#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SkillType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActionDelayPreshowConfig; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MODIFIERAFFECTEDPRESHOWCONFIG_METHOD_2_D2C6137E74341612_OFFSET UNITYSDK_OFFSET(0x1994A540)
#define RPG_GAMECORE_MODIFIERAFFECTEDPRESHOWCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1994A7F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierAffectedPreshowConfig_TypeDefinitionIndex = 17279;

	class ModifierAffectedPreshowConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::SkillType>* SkillTypes; // 0x10
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::PredicateConfig* Condition; // 0x20
		::RPG::GameCore::ActionDelayPreshowConfig* ActionDelayPreshowConfig; // 0x28
		::RPG::GameCore::ActionDelayPreshowConfig* BreakActionDelayPreshowConfig; // 0x30
		::System::Boolean ChangeDelayVersion; // 0x38
		::System::Boolean IsAddPreview; // 0x39

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERAFFECTEDPRESHOWCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D2C6137E74341612(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifierAffectedPreshowConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifierAffectedPreshowConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERAFFECTEDPRESHOWCONFIG_METHOD_2_D2C6137E74341612_OFFSET))(a1, a2);
		}
	};
}
