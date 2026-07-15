#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvEnterBattleSelectTargetType.h"
#include "unitysdk/RPG/GameCore/CostMpPhase.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AdventureAttackDetectShapeConfig; }
namespace RPG::GameCore { class AdventureAttackDetectSummonUnitTriggerConfig; }
namespace RPG::GameCore { class AdventureHitConfig; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTURETRIGGERATTACK_METHOD_3_BEC7A67BA5D23890_OFFSET UNITYSDK_OFFSET(0x1AE637A0)
#define RPG_GAMECORE_ADVENTURETRIGGERATTACK_METHOD_3_CB228066AF4616E5_OFFSET UNITYSDK_OFFSET(0x1AE63540)
#define RPG_GAMECORE_ADVENTURETRIGGERATTACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE63740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureTriggerAttack_TypeDefinitionIndex = 19427;

	class AdventureTriggerAttack : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* AttackTargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* AttackRootTargetType; // 0x20
		::System::Boolean TriggerBattle; // 0x28
		::System::Single TriggerBattleDelay; // 0x2C
		::RPG::GameCore::AdventureAttackDetectSummonUnitTriggerConfig* SummonUnitTriggerAttackDetectConfig; // 0x30
		::RPG::GameCore::AdventureAttackDetectShapeConfig* AttackDetectConfig; // 0x38
		::RPG::GameCore::AdventureHitConfig* HitConfig; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnAttack; // 0x48
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBattle; // 0x50
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnHit; // 0x58
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnKill; // 0x60
		::RPG::GameCore::PredicateConfig* FilterHitTarget; // 0x68
		::System::Boolean IncludeProps; // 0x70
		::System::Boolean HitTargetFaceToAttacker; // 0x71
		::System::Boolean TriggerBattleByAllHitTarget; // 0x72
		::System::Boolean AttackDetectCollision; // 0x73
		::System::Boolean FilterAllHitTargetByCurrentMP; // 0x74
		::RPG::GameCore::AdvEnterBattleSelectTargetType EnterBattleSelectTargetType; // 0x78
		::System::UInt32 CostMP; // 0x7C
		::RPG::GameCore::CostMpPhase CostMpPhaseType; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERATTACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CB228066AF4616E5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureTriggerAttack*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureTriggerAttack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERATTACK_METHOD_3_CB228066AF4616E5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BEC7A67BA5D23890(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureTriggerAttack* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureTriggerAttack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERATTACK_METHOD_3_BEC7A67BA5D23890_OFFSET))(a1, a2);
		}
	};
}
