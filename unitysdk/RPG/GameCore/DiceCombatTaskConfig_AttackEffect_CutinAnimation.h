#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKEFFECT_CUTINANIMATION_METHOD_3_00FFE251A8C16448_OFFSET UNITYSDK_OFFSET(0x18875AB0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKEFFECT_CUTINANIMATION_METHOD_3_B25E929237883723_OFFSET UNITYSDK_OFFSET(0x1887BA80)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKEFFECT_CUTINANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x18875A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_AttackEffect_CutinAnimation_TypeDefinitionIndex = 15211;

	class DiceCombatTaskConfig_AttackEffect_CutinAnimation : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKEFFECT_CUTINANIMATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B25E929237883723(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_CutinAnimation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_CutinAnimation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKEFFECT_CUTINANIMATION_METHOD_3_B25E929237883723_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_00FFE251A8C16448(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_CutinAnimation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_CutinAnimation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKEFFECT_CUTINANIMATION_METHOD_3_00FFE251A8C16448_OFFSET))(a1, a2);
		}
	};
}
