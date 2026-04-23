#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_REMOVEMODIFIERBYBEHAVIORFLAG_METHOD_3_0974556B08999E79_OFFSET UNITYSDK_OFFSET(0x18CA51F0)
#define RPG_GAMECORE_REMOVEMODIFIERBYBEHAVIORFLAG_METHOD_3_E4C9DC360258772A_OFFSET UNITYSDK_OFFSET(0x18CA5270)
#define RPG_GAMECORE_REMOVEMODIFIERBYBEHAVIORFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CA5240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveModifierByBehaviorFlag_TypeDefinitionIndex = 22015;

	class RemoveModifierByBehaviorFlag : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* ModifierBehaviorFlags; // 0x20
		::RPG::GameCore::PredicateConfig* Predicate; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEMODIFIERBYBEHAVIORFLAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0974556B08999E79(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveModifierByBehaviorFlag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveModifierByBehaviorFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEMODIFIERBYBEHAVIORFLAG_METHOD_3_0974556B08999E79_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E4C9DC360258772A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveModifierByBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveModifierByBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEMODIFIERBYBEHAVIORFLAG_METHOD_3_E4C9DC360258772A_OFFSET))(a1, a2);
		}
	};
}
