#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_APPLYMONSTERPHASEOVERRIDECONFIG_METHOD_3_23558CE3E3E2737D_OFFSET UNITYSDK_OFFSET(0x1C56F110)
#define RPG_GAMECORE_APPLYMONSTERPHASEOVERRIDECONFIG_METHOD_3_ECD6E998BE9262EC_OFFSET UNITYSDK_OFFSET(0x1C56F070)
#define RPG_GAMECORE_APPLYMONSTERPHASEOVERRIDECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C56F0D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ApplyMonsterPhaseOverrideConfig_TypeDefinitionIndex = 22477;

	class ApplyMonsterPhaseOverrideConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_APPLYMONSTERPHASEOVERRIDECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_ECD6E998BE9262EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ApplyMonsterPhaseOverrideConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ApplyMonsterPhaseOverrideConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_APPLYMONSTERPHASEOVERRIDECONFIG_METHOD_3_ECD6E998BE9262EC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_23558CE3E3E2737D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ApplyMonsterPhaseOverrideConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ApplyMonsterPhaseOverrideConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_APPLYMONSTERPHASEOVERRIDECONFIG_METHOD_3_23558CE3E3E2737D_OFFSET))(a1, a2);
		}
	};
}
