#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AdventureAttackDetectShapeConfig; }
namespace RPG::GameCore { class AdventureHitConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SWITCHMASCOTBULLETTRIGGERATTACK_METHOD_3_DECDB6E877CF8687_OFFSET UNITYSDK_OFFSET(0x18EBC4B0)
#define RPG_GAMECORE_SWITCHMASCOTBULLETTRIGGERATTACK_METHOD_3_EA7527C0FF8F5032_OFFSET UNITYSDK_OFFSET(0x18EBC3B0)
#define RPG_GAMECORE_SWITCHMASCOTBULLETTRIGGERATTACK__CTOR_OFFSET UNITYSDK_OFFSET(0x18EBC440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchMascotBulletTriggerAttack_TypeDefinitionIndex = 19108;

	class SwitchMascotBulletTriggerAttack : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* AttackTargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* AttackRootTargetType; // 0x20
		::RPG::GameCore::AdventureAttackDetectShapeConfig* AttackDetectConfig; // 0x28
		::RPG::GameCore::AdventureHitConfig* HitConfig; // 0x30
		::System::Boolean AttackDetectCollision; // 0x38
		::System::Single HitDecalEffectRandomRadius; // 0x3C
		::System::Boolean HitDecalEffectFollowHitTarget; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTBULLETTRIGGERATTACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EA7527C0FF8F5032(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchMascotBulletTriggerAttack*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchMascotBulletTriggerAttack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTBULLETTRIGGERATTACK_METHOD_3_EA7527C0FF8F5032_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DECDB6E877CF8687(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchMascotBulletTriggerAttack* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchMascotBulletTriggerAttack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTBULLETTRIGGERATTACK_METHOD_3_DECDB6E877CF8687_OFFSET))(a1, a2);
		}
	};
}
