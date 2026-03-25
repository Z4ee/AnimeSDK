#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvEnterBattleSelectTargetType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AdventureAttackDetectShapeConfig; }
namespace RPG::GameCore { class AdventureAttackDetectSummonUnitTriggerConfig; }
namespace RPG::GameCore { class AdventureHitConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTURETRIGGERATTACK_METHOD_3_287821EE07D86265_OFFSET UNITYSDK_OFFSET(0x16F5B7E0)
#define RPG_GAMECORE_ADVENTURETRIGGERATTACK_METHOD_3_7C794FCF43CF3E2B_OFFSET UNITYSDK_OFFSET(0x16F5BA80)
#define RPG_GAMECORE_ADVENTURETRIGGERATTACK__CTOR_OFFSET UNITYSDK_OFFSET(0x16F5BA10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureTriggerAttack_TypeDefinitionIndex = 18490;

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
		::System::Boolean IncludeProps; // 0x68
		::System::Boolean HitTargetFaceToAttacker; // 0x69
		::System::Boolean TriggerBattleByAllHitTarget; // 0x6A
		::System::Boolean AttackDetectCollision; // 0x6B
		::RPG::GameCore::AdvEnterBattleSelectTargetType EnterBattleSelectTargetType; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERATTACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_287821EE07D86265(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureTriggerAttack*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureTriggerAttack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERATTACK_METHOD_3_287821EE07D86265_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7C794FCF43CF3E2B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureTriggerAttack* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureTriggerAttack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERATTACK_METHOD_3_7C794FCF43CF3E2B_OFFSET))(a1, a2);
		}
	};
}
