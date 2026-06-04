#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HealFormulaType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DamageDisplayData; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_HEALHP_METHOD_3_B34B766605EA2678_OFFSET UNITYSDK_OFFSET(0x1981E120)
#define RPG_GAMECORE_HEALHP_METHOD_3_C05C0E2A305F455B_OFFSET UNITYSDK_OFFSET(0x1981DF60)
#define RPG_GAMECORE_HEALHP__CTOR_OFFSET UNITYSDK_OFFSET(0x1981DFA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HealHP_TypeDefinitionIndex = 21392;

	class HealHP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* HealerTargetType; // 0x20
		::System::Boolean AliveOnly; // 0x28
		::RPG::GameCore::HealFormulaType FormulaType; // 0x2C
		::RPG::GameCore::DynamicFloat* HealPercentage; // 0x30
		::RPG::GameCore::DynamicFloat* SPHitRatio; // 0x38
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x40
		::System::Boolean IsHealRallyHP; // 0x48
		::System::Boolean ScreenSpaceFloatMsg; // 0x49
		::RPG::GameCore::DamageDisplayData* DisplayData; // 0x50
		::RPG::GameCore::DynamicFloat* PerformanceDelay; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEALHP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C05C0E2A305F455B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HealHP*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HealHP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEALHP_METHOD_3_C05C0E2A305F455B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B34B766605EA2678(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HealHP* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HealHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEALHP_METHOD_3_B34B766605EA2678_OFFSET))(a1, a2);
		}
	};
}
