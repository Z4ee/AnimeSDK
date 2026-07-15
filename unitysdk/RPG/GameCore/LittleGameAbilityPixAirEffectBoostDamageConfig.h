#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBOOSTDAMAGECONFIG_METHOD_3_347745A6AA4789C5_OFFSET UNITYSDK_OFFSET(0x1B093460)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBOOSTDAMAGECONFIG_METHOD_3_B16D413EB058AC79_OFFSET UNITYSDK_OFFSET(0x1B093530)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBOOSTDAMAGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B093520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirEffectBoostDamageConfig_TypeDefinitionIndex = 20552;

	class LittleGameAbilityPixAirEffectBoostDamageConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* BoostValue; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBOOSTDAMAGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_347745A6AA4789C5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectBoostDamageConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEffectBoostDamageConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBOOSTDAMAGECONFIG_METHOD_3_347745A6AA4789C5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B16D413EB058AC79(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectBoostDamageConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEffectBoostDamageConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBOOSTDAMAGECONFIG_METHOD_3_B16D413EB058AC79_OFFSET))(a1, a2);
		}
	};
}
