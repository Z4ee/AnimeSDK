#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_TURNINSERTASSISTANTABILITY_METHOD_3_8D641ADFB3F7A682_OFFSET UNITYSDK_OFFSET(0x190D45B0)
#define RPG_GAMECORE_TURNINSERTASSISTANTABILITY_METHOD_3_BBD86DD485F877EC_OFFSET UNITYSDK_OFFSET(0x190D44E0)
#define RPG_GAMECORE_TURNINSERTASSISTANTABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x190D4560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnInsertAssistantAbility_TypeDefinitionIndex = 22550;

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

		static ::System::Void Method_3_8D641ADFB3F7A682(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TurnInsertAssistantAbility* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TurnInsertAssistantAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNINSERTASSISTANTABILITY_METHOD_3_8D641ADFB3F7A682_OFFSET))(a1, a2);
		}
	};
}
