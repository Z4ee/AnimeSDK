#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBURNFROMDAMAGEPERCENTCONFIG_METHOD_3_A6D095DED6E2E56E_OFFSET UNITYSDK_OFFSET(0x1B093AF0)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBURNFROMDAMAGEPERCENTCONFIG_METHOD_3_E302133F03E61E1A_OFFSET UNITYSDK_OFFSET(0x1B093BC0)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBURNFROMDAMAGEPERCENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B093BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirEffectBurnFromDamagePercentConfig_TypeDefinitionIndex = 20564;

	class LittleGameAbilityPixAirEffectBurnFromDamagePercentConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* Percent; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBURNFROMDAMAGEPERCENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A6D095DED6E2E56E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectBurnFromDamagePercentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEffectBurnFromDamagePercentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBURNFROMDAMAGEPERCENTCONFIG_METHOD_3_A6D095DED6E2E56E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E302133F03E61E1A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectBurnFromDamagePercentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEffectBurnFromDamagePercentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBURNFROMDAMAGEPERCENTCONFIG_METHOD_3_E302133F03E61E1A_OFFSET))(a1, a2);
		}
	};
}
