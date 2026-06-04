#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTSHIELDFROMBURNPERCENTCONFIG_METHOD_3_9EF760E1F94318B6_OFFSET UNITYSDK_OFFSET(0x19894930)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTSHIELDFROMBURNPERCENTCONFIG_METHOD_3_C93B3AAFABC8A5EA_OFFSET UNITYSDK_OFFSET(0x19894860)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTSHIELDFROMBURNPERCENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19894920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirEffectShieldFromBurnPercentConfig_TypeDefinitionIndex = 20190;

	class LittleGameAbilityPixAirEffectShieldFromBurnPercentConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* Percent; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTSHIELDFROMBURNPERCENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C93B3AAFABC8A5EA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectShieldFromBurnPercentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEffectShieldFromBurnPercentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTSHIELDFROMBURNPERCENTCONFIG_METHOD_3_C93B3AAFABC8A5EA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9EF760E1F94318B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectShieldFromBurnPercentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEffectShieldFromBurnPercentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTSHIELDFROMBURNPERCENTCONFIG_METHOD_3_9EF760E1F94318B6_OFFSET))(a1, a2);
		}
	};
}
