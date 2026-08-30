#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_TURNINSERTASSISTANTABILITY_METHOD_3_AADAC172CA47B4F0_OFFSET UNITYSDK_OFFSET(0x1D611660)
#define RPG_GAMECORE_TURNINSERTASSISTANTABILITY_METHOD_3_BBD86DD485F877EC_OFFSET UNITYSDK_OFFSET(0x1D6115C0)
#define RPG_GAMECORE_TURNINSERTASSISTANTABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D611620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnInsertAssistantAbility_TypeDefinitionIndex = 23308;

	class TurnInsertAssistantAbility : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* AssistantAbilityID; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::TargetEvaluator* AbilityTarget; // 0x28
		::System::Boolean TriggerOnLimbo; // 0x30
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* AbortBehaviorFlags; // 0x38
		::System::Int32 Priority; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNINSERTASSISTANTABILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BBD86DD485F877EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TurnInsertAssistantAbility*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TurnInsertAssistantAbility*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNINSERTASSISTANTABILITY_METHOD_3_BBD86DD485F877EC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AADAC172CA47B4F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TurnInsertAssistantAbility* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TurnInsertAssistantAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNINSERTASSISTANTABILITY_METHOD_3_AADAC172CA47B4F0_OFFSET))(a1, a2);
		}
	};
}
