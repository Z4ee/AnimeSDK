#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AdventureAttackDetectShapeConfig; }
namespace RPG::GameCore { class AdventureHitConfig; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTURELOOPATTACKDETECT_METHOD_3_6B8EF017C5473A5E_OFFSET UNITYSDK_OFFSET(0x16F54640)
#define RPG_GAMECORE_ADVENTURELOOPATTACKDETECT_METHOD_3_7D7E2D5C697AD278_OFFSET UNITYSDK_OFFSET(0x16F54740)
#define RPG_GAMECORE_ADVENTURELOOPATTACKDETECT__CTOR_OFFSET UNITYSDK_OFFSET(0x16F546D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureLoopAttackDetect_TypeDefinitionIndex = 18481;

	class AdventureLoopAttackDetect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* AttackTargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* AttackRootTargetType; // 0x20
		::RPG::GameCore::AdventureAttackDetectShapeConfig* AttackDetectConfig; // 0x28
		::RPG::GameCore::AdventureHitConfig* HitConfig; // 0x30
		::System::Boolean IncludeProps; // 0x38
		::System::Boolean DelayDirectKill; // 0x39
		::System::Boolean DelayHitPerform; // 0x3A
		::RPG::GameCore::DynamicFloat* Duration; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnHit; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURELOOPATTACKDETECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6B8EF017C5473A5E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureLoopAttackDetect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureLoopAttackDetect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURELOOPATTACKDETECT_METHOD_3_6B8EF017C5473A5E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7D7E2D5C697AD278(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureLoopAttackDetect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureLoopAttackDetect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURELOOPATTACKDETECT_METHOD_3_7D7E2D5C697AD278_OFFSET))(a1, a2);
		}
	};
}
