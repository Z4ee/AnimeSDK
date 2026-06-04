#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_AETHERDIVIDETRIGGERATTACKSIMPLIFIED_METHOD_3_D91FB4518FB3A140_OFFSET UNITYSDK_OFFSET(0x194637D0)
#define RPG_GAMECORE_AETHERDIVIDETRIGGERATTACKSIMPLIFIED_METHOD_3_E6DC7E90C49EC7F9_OFFSET UNITYSDK_OFFSET(0x19463750)
#define RPG_GAMECORE_AETHERDIVIDETRIGGERATTACKSIMPLIFIED__CTOR_OFFSET UNITYSDK_OFFSET(0x194637A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideTriggerAttackSimplified_TypeDefinitionIndex = 22746;

	class AetherDivideTriggerAttackSimplified : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* AttackTargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDETRIGGERATTACKSIMPLIFIED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E6DC7E90C49EC7F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AetherDivideTriggerAttackSimplified*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AetherDivideTriggerAttackSimplified*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDETRIGGERATTACKSIMPLIFIED_METHOD_3_E6DC7E90C49EC7F9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D91FB4518FB3A140(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AetherDivideTriggerAttackSimplified* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AetherDivideTriggerAttackSimplified*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDETRIGGERATTACKSIMPLIFIED_METHOD_3_D91FB4518FB3A140_OFFSET))(a1, a2);
		}
	};
}
