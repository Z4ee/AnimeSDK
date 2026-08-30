#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActionBarUIConfig; }
namespace RPG::GameCore { class ConditionPriority; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TurnInsertAbilityConditionBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TURNINSERTABILITY_METHOD_3_501A75443A3E78D5_OFFSET UNITYSDK_OFFSET(0x1D60FB10)
#define RPG_GAMECORE_TURNINSERTABILITY_METHOD_3_93E04172E4E39212_OFFSET UNITYSDK_OFFSET(0x1D60FA40)
#define RPG_GAMECORE_TURNINSERTABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D60FAC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnInsertAbility_TypeDefinitionIndex = 22411;

	class TurnInsertAbility : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* AbilityName; // 0x18
		::RPG::GameCore::JsonEnum* AbilityTag; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::RPG::GameCore::TargetEvaluator* AbilityTarget; // 0x30
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* AbortBehaviorFlags; // 0x38
		::System::String* InsertAbilityPriority; // 0x40
		::RPG::GameCore::ConditionPriority* InsertConditionPriority; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* DynamicValues; // 0x50
		::RPG::GameCore::AliveStateMask OwnerAliveState; // 0x58
		::RPG::GameCore::AliveStateMask TargetAliveState; // 0x5A
		::System::Boolean CanRunOnUnselectableTarget; // 0x5C
		::System::Boolean ShowInActionBar; // 0x5D
		::RPG::GameCore::TurnInsertAbilityConditionBase* PreCheck; // 0x60
		::RPG::GameCore::PredicateConfig* ActivePredicate; // 0x68
		::System::Boolean CanRunAfterFightFinish; // 0x70
		::System::Boolean AutoStandbyOnAbilityFinish; // 0x71
		::System::Boolean Silence; // 0x72
		::System::Boolean IgnoreMuteAction; // 0x73
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* CustomFlags; // 0x78
		::RPG::GameCore::ActionBarUIConfig* ActionBarUIConfig; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNINSERTABILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_93E04172E4E39212(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TurnInsertAbility*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TurnInsertAbility*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNINSERTABILITY_METHOD_3_93E04172E4E39212_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_501A75443A3E78D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TurnInsertAbility* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TurnInsertAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNINSERTABILITY_METHOD_3_501A75443A3E78D5_OFFSET))(a1, a2);
		}
	};
}
