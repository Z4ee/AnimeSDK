#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTDAMAGEFROMSHIELDPERCENTCONFIG_METHOD_3_17C29547A49E413E_OFFSET UNITYSDK_OFFSET(0x1B094100)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTDAMAGEFROMSHIELDPERCENTCONFIG_METHOD_3_3DF3DD257DA56CB2_OFFSET UNITYSDK_OFFSET(0x1B094030)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTDAMAGEFROMSHIELDPERCENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0940F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirEffectDamageFromShieldPercentConfig_TypeDefinitionIndex = 20560;

	class LittleGameAbilityPixAirEffectDamageFromShieldPercentConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* Percent; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTDAMAGEFROMSHIELDPERCENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3DF3DD257DA56CB2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectDamageFromShieldPercentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEffectDamageFromShieldPercentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTDAMAGEFROMSHIELDPERCENTCONFIG_METHOD_3_3DF3DD257DA56CB2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_17C29547A49E413E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectDamageFromShieldPercentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEffectDamageFromShieldPercentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTDAMAGEFROMSHIELDPERCENTCONFIG_METHOD_3_17C29547A49E413E_OFFSET))(a1, a2);
		}
	};
}
