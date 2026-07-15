#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTDAMAGEFROMBURNPERCENTCONFIG_METHOD_3_38D5610A53E96B86_OFFSET UNITYSDK_OFFSET(0x1B093FB0)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTDAMAGEFROMBURNPERCENTCONFIG_METHOD_3_97833CAA6C7CE5BA_OFFSET UNITYSDK_OFFSET(0x1B093EE0)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTDAMAGEFROMBURNPERCENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B093FA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirEffectDamageFromBurnPercentConfig_TypeDefinitionIndex = 20561;

	class LittleGameAbilityPixAirEffectDamageFromBurnPercentConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* Percent; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTDAMAGEFROMBURNPERCENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_97833CAA6C7CE5BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectDamageFromBurnPercentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEffectDamageFromBurnPercentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTDAMAGEFROMBURNPERCENTCONFIG_METHOD_3_97833CAA6C7CE5BA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_38D5610A53E96B86(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectDamageFromBurnPercentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEffectDamageFromBurnPercentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTDAMAGEFROMBURNPERCENTCONFIG_METHOD_3_38D5610A53E96B86_OFFSET))(a1, a2);
		}
	};
}
