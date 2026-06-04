#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BossSpecialEffectType.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERBOSSSPECIALEFFECT_METHOD_3_BA3135A193573415_OFFSET UNITYSDK_OFFSET(0x196BA290)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERBOSSSPECIALEFFECT_METHOD_3_EC1420870418557E_OFFSET UNITYSDK_OFFSET(0x196B5B40)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERBOSSSPECIALEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x196B5AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_TriggerBossSpecialEffect_TypeDefinitionIndex = 15267;

	class DiceCombatTaskConfig_TriggerBossSpecialEffect : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::BossSpecialEffectType Type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERBOSSSPECIALEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BA3135A193573415(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_TriggerBossSpecialEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_TriggerBossSpecialEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERBOSSSPECIALEFFECT_METHOD_3_BA3135A193573415_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EC1420870418557E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_TriggerBossSpecialEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_TriggerBossSpecialEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERBOSSSPECIALEFFECT_METHOD_3_EC1420870418557E_OFFSET))(a1, a2);
		}
	};
}
