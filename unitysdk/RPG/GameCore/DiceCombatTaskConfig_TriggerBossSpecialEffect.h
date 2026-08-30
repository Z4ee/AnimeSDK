#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BossSpecialEffectType.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERBOSSSPECIALEFFECT_METHOD_3_8DDC1856F8A1FB06_OFFSET UNITYSDK_OFFSET(0x1DB07670)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERBOSSSPECIALEFFECT_METHOD_3_EC1420870418557E_OFFSET UNITYSDK_OFFSET(0x1DB076D0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERBOSSSPECIALEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB076C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_TriggerBossSpecialEffect_TypeDefinitionIndex = 15868;

	class DiceCombatTaskConfig_TriggerBossSpecialEffect : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::BossSpecialEffectType Type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERBOSSSPECIALEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8DDC1856F8A1FB06(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_TriggerBossSpecialEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_TriggerBossSpecialEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERBOSSSPECIALEFFECT_METHOD_3_8DDC1856F8A1FB06_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EC1420870418557E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_TriggerBossSpecialEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_TriggerBossSpecialEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERBOSSSPECIALEFFECT_METHOD_3_EC1420870418557E_OFFSET))(a1, a2);
		}
	};
}
