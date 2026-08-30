#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AdventureAttackDetectShapeConfig; }
namespace RPG::GameCore { class AdventureHitConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_WOLFBROMONSTERHITBOOMPROP_METHOD_3_445B64E3E16E6864_OFFSET UNITYSDK_OFFSET(0x1D6B3470)
#define RPG_GAMECORE_WOLFBROMONSTERHITBOOMPROP_METHOD_3_AD38C68F2AC05983_OFFSET UNITYSDK_OFFSET(0x1D6B33B0)
#define RPG_GAMECORE_WOLFBROMONSTERHITBOOMPROP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B3420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WolfBroMonsterHitBoomProp_TypeDefinitionIndex = 19937;

	class WolfBroMonsterHitBoomProp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* AttackTargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* AttackRootTargetType; // 0x20
		::RPG::GameCore::AdventureAttackDetectShapeConfig* AttackDetectConfig; // 0x28
		::RPG::GameCore::AdventureHitConfig* HitConfig; // 0x30
		::System::Boolean AttackDetectCollision; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROMONSTERHITBOOMPROP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AD38C68F2AC05983(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroMonsterHitBoomProp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroMonsterHitBoomProp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROMONSTERHITBOOMPROP_METHOD_3_AD38C68F2AC05983_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_445B64E3E16E6864(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroMonsterHitBoomProp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroMonsterHitBoomProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROMONSTERHITBOOMPROP_METHOD_3_445B64E3E16E6864_OFFSET))(a1, a2);
		}
	};
}
