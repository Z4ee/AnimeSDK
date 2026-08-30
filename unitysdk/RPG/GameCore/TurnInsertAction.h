#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_68C34B5C1C40C2FF;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TurnInsertActionUIConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TURNINSERTACTION_METHOD_3_21B20F0D6FF94A8C_OFFSET UNITYSDK_OFFSET(0x1D610710)
#define RPG_GAMECORE_TURNINSERTACTION_METHOD_3_9A8E346BF3212BB1_OFFSET UNITYSDK_OFFSET(0x1D610890)
#define RPG_GAMECORE_TURNINSERTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6107E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnInsertAction_TypeDefinitionIndex = 22405;

	class TurnInsertAction : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* CustomSource; // 0x20
		::System::String* PrepareAbilityName; // 0x28
		::System::String* InsertActionPriority; // 0x30
		::RPG::GameCore::ControlSkillType SkillType; // 0x38
		::RPG::GameCore::DynamicFloat* SkillIndex; // 0x40
		::RPG::GameCore::JsonEnum* SkillTag; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* DynamicValues; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicString*>* DynamicStrings; // 0x58
		::System::Boolean PlayReadyCamera; // 0x60
		::System::Boolean PlayReadyAnim; // 0x61
		::System::Boolean CancelPrepareAbilityIfDelayed; // 0x62
		::System::Boolean PlayReadyAnimIfPrepareAbilityCancel; // 0x63
		::System::Boolean CanInsertUltraSkill; // 0x64
		::System::Boolean IsSilence; // 0x65
		::RPG::GameCore::ControlSkillType SkillTypeWhenDelayed; // 0x68
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* AbortBehaviorFlags; // 0x70
		::System::Boolean AutoCast; // 0x78
		::RPG::GameCore::TargetEvaluator* AutoCastTargetType; // 0x80
		::System::Boolean CanRunAfterFightFinish; // 0x88
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnInsertAbort; // 0x90
		::System::Boolean CopyAbortContext; // 0x98
		::Il2CppArray<::RPG::GameCore::DynamicString*>* CustomTags; // 0xA0
		::System::Boolean IgnoreBPDec; // 0xA8
		::System::Boolean IgnoreSPDec; // 0xA9
		::RPG::GameCore::DynamicFloat* OverrideElationPoint; // 0xB0
		::System::Boolean FollowSameTagNormalAction; // 0xB8
		::RPG::GameCore::TurnInsertActionUIConfig* UIConfig; // 0xC0
		::System::Boolean IgnoreUltraButtonEffect; // 0xC8
		::RPG::GameCore::BoolEx OverrideCutIn; // 0xCC
		::Class_2_68C34B5C1C40C2FF* PreCheck; // 0xD0
		::RPG::GameCore::PredicateConfig* ActivePredicate; // 0xD8
		::System::String* PendingInsertAbilityPriority; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNINSERTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_21B20F0D6FF94A8C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TurnInsertAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TurnInsertAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNINSERTACTION_METHOD_3_21B20F0D6FF94A8C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9A8E346BF3212BB1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TurnInsertAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TurnInsertAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNINSERTACTION_METHOD_3_9A8E346BF3212BB1_OFFSET))(a1, a2);
		}
	};
}
