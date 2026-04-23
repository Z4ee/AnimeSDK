#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PARALLELABILITY_METHOD_2_F66BDF046C282114_OFFSET UNITYSDK_OFFSET(0x18BD1EC0)
#define RPG_GAMECORE_PARALLELABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x18BD2210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParallelAbility_TypeDefinitionIndex = 21585;

	class ParallelAbility : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x10
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* AbortBehaviorFlags; // 0x18
		::RPG::GameCore::PredicateConfig* Predicate; // 0x20
		::RPG::GameCore::TargetEvaluator* AbilityInherentTargetType; // 0x28
		::RPG::GameCore::DynamicFloat* Delay; // 0x30
		::RPG::GameCore::DynamicString* AbilityName; // 0x38
		::RPG::GameCore::JsonEnum* AbilityTag; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARALLELABILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F66BDF046C282114(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParallelAbility*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParallelAbility*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARALLELABILITY_METHOD_2_F66BDF046C282114_OFFSET))(a1, a2);
		}
	};
}
