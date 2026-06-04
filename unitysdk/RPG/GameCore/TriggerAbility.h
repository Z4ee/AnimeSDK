#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TRIGGERABILITY_METHOD_3_960902033F5E69E6_OFFSET UNITYSDK_OFFSET(0x19E067D0)
#define RPG_GAMECORE_TRIGGERABILITY_METHOD_3_DC2AB14032F3953A_OFFSET UNITYSDK_OFFSET(0x19E06750)
#define RPG_GAMECORE_TRIGGERABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x19E067A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerAbility_TypeDefinitionIndex = 21448;

	class TriggerAbility : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* AbilityInherentTargetType; // 0x20
		::RPG::GameCore::PredicateConfig* AbilityInherentTargetPredicate; // 0x28
		::RPG::GameCore::DynamicString* AbilityName; // 0x30
		::System::Boolean IsSkillPerform; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* DynamicValues; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERABILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DC2AB14032F3953A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerAbility*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerAbility*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERABILITY_METHOD_3_DC2AB14032F3953A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_960902033F5E69E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerAbility* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERABILITY_METHOD_3_960902033F5E69E6_OFFSET))(a1, a2);
		}
	};
}
