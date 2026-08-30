#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTDAMAGEBOOSTPERCENTCONFIG_METHOD_3_48994AD99FA9E802_OFFSET UNITYSDK_OFFSET(0x1DD628F0)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTDAMAGEBOOSTPERCENTCONFIG_METHOD_3_E6532BEBFB30D856_OFFSET UNITYSDK_OFFSET(0x1DD62820)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTDAMAGEBOOSTPERCENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD628E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirEffectDamageBoostPercentConfig_TypeDefinitionIndex = 21109;

	class LittleGameAbilityPixAirEffectDamageBoostPercentConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* BoostPercent; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTDAMAGEBOOSTPERCENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E6532BEBFB30D856(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectDamageBoostPercentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEffectDamageBoostPercentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTDAMAGEBOOSTPERCENTCONFIG_METHOD_3_E6532BEBFB30D856_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_48994AD99FA9E802(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectDamageBoostPercentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEffectDamageBoostPercentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTDAMAGEBOOSTPERCENTCONFIG_METHOD_3_48994AD99FA9E802_OFFSET))(a1, a2);
		}
	};
}
