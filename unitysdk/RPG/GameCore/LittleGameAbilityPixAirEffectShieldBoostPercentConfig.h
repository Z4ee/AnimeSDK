#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTSHIELDBOOSTPERCENTCONFIG_METHOD_3_3D2AFC0BB30A4546_OFFSET UNITYSDK_OFFSET(0x1DD62C10)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTSHIELDBOOSTPERCENTCONFIG_METHOD_3_A335003BC812DDB2_OFFSET UNITYSDK_OFFSET(0x1DD62CE0)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTSHIELDBOOSTPERCENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD62CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirEffectShieldBoostPercentConfig_TypeDefinitionIndex = 21110;

	class LittleGameAbilityPixAirEffectShieldBoostPercentConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* BoostPercent; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTSHIELDBOOSTPERCENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3D2AFC0BB30A4546(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectShieldBoostPercentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEffectShieldBoostPercentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTSHIELDBOOSTPERCENTCONFIG_METHOD_3_3D2AFC0BB30A4546_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A335003BC812DDB2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectShieldBoostPercentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEffectShieldBoostPercentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTSHIELDBOOSTPERCENTCONFIG_METHOD_3_A335003BC812DDB2_OFFSET))(a1, a2);
		}
	};
}
