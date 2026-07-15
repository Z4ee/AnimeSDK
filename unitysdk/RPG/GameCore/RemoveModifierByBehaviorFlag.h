#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_REMOVEMODIFIERBYBEHAVIORFLAG_METHOD_3_0B705774291E4433_OFFSET UNITYSDK_OFFSET(0x1B9D0880)
#define RPG_GAMECORE_REMOVEMODIFIERBYBEHAVIORFLAG_METHOD_3_A48F5168503048C2_OFFSET UNITYSDK_OFFSET(0x1B9D0840)
#define RPG_GAMECORE_REMOVEMODIFIERBYBEHAVIORFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9D0870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveModifierByBehaviorFlag_TypeDefinitionIndex = 22253;

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

		static ::System::Void Method_3_A48F5168503048C2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveModifierByBehaviorFlag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveModifierByBehaviorFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEMODIFIERBYBEHAVIORFLAG_METHOD_3_A48F5168503048C2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0B705774291E4433(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveModifierByBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveModifierByBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEMODIFIERBYBEHAVIORFLAG_METHOD_3_0B705774291E4433_OFFSET))(a1, a2);
		}
	};
}
