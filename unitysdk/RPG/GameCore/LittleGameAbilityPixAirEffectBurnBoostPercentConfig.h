#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBURNBOOSTPERCENTCONFIG_METHOD_3_945354B63E6E6E16_OFFSET UNITYSDK_OFFSET(0x1D1FA300)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBURNBOOSTPERCENTCONFIG_METHOD_3_E05AD8A4E2240E4A_OFFSET UNITYSDK_OFFSET(0x1D1FA230)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBURNBOOSTPERCENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1FA2F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirEffectBurnBoostPercentConfig_TypeDefinitionIndex = 21111;

	class LittleGameAbilityPixAirEffectBurnBoostPercentConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* BoostPercent; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBURNBOOSTPERCENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E05AD8A4E2240E4A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectBurnBoostPercentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEffectBurnBoostPercentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBURNBOOSTPERCENTCONFIG_METHOD_3_E05AD8A4E2240E4A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_945354B63E6E6E16(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectBurnBoostPercentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEffectBurnBoostPercentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBURNBOOSTPERCENTCONFIG_METHOD_3_945354B63E6E6E16_OFFSET))(a1, a2);
		}
	};
}
