#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBURNFROMSHIELDPERCENTCONFIG_METHOD_3_69BAE24D4C92D822_OFFSET UNITYSDK_OFFSET(0x198942A0)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBURNFROMSHIELDPERCENTCONFIG_METHOD_3_C7940E3163C3EAF6_OFFSET UNITYSDK_OFFSET(0x198941D0)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBURNFROMSHIELDPERCENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19894290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirEffectBurnFromShieldPercentConfig_TypeDefinitionIndex = 20192;

	class LittleGameAbilityPixAirEffectBurnFromShieldPercentConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* Percent; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBURNFROMSHIELDPERCENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C7940E3163C3EAF6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectBurnFromShieldPercentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEffectBurnFromShieldPercentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBURNFROMSHIELDPERCENTCONFIG_METHOD_3_C7940E3163C3EAF6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_69BAE24D4C92D822(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectBurnFromShieldPercentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEffectBurnFromShieldPercentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBURNFROMSHIELDPERCENTCONFIG_METHOD_3_69BAE24D4C92D822_OFFSET))(a1, a2);
		}
	};
}
