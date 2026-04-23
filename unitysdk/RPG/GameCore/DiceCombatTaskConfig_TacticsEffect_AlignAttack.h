#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TACTICSEFFECT_ALIGNATTACK_METHOD_3_1EC52B86DFBBE8EA_OFFSET UNITYSDK_OFFSET(0x1887D260)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TACTICSEFFECT_ALIGNATTACK_METHOD_3_967E055AC9508FE5_OFFSET UNITYSDK_OFFSET(0x18879470)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TACTICSEFFECT_ALIGNATTACK__CTOR_OFFSET UNITYSDK_OFFSET(0x18879420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_TacticsEffect_AlignAttack_TypeDefinitionIndex = 15331;

	class DiceCombatTaskConfig_TacticsEffect_AlignAttack : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TACTICSEFFECT_ALIGNATTACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1EC52B86DFBBE8EA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_TacticsEffect_AlignAttack*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_TacticsEffect_AlignAttack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TACTICSEFFECT_ALIGNATTACK_METHOD_3_1EC52B86DFBBE8EA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_967E055AC9508FE5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_TacticsEffect_AlignAttack* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_TacticsEffect_AlignAttack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TACTICSEFFECT_ALIGNATTACK_METHOD_3_967E055AC9508FE5_OFFSET))(a1, a2);
		}
	};
}
