#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTSHIELDFROMDAMAGEPERCENTCONFIG_METHOD_3_B04797CF6DFC505E_OFFSET UNITYSDK_OFFSET(0x1D1FAD80)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTSHIELDFROMDAMAGEPERCENTCONFIG_METHOD_3_E203A879B6FDA052_OFFSET UNITYSDK_OFFSET(0x1D1FACB0)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTSHIELDFROMDAMAGEPERCENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1FAD70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirEffectShieldFromDamagePercentConfig_TypeDefinitionIndex = 21114;

	class LittleGameAbilityPixAirEffectShieldFromDamagePercentConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* Percent; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTSHIELDFROMDAMAGEPERCENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E203A879B6FDA052(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectShieldFromDamagePercentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEffectShieldFromDamagePercentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTSHIELDFROMDAMAGEPERCENTCONFIG_METHOD_3_E203A879B6FDA052_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B04797CF6DFC505E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectShieldFromDamagePercentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEffectShieldFromDamagePercentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTSHIELDFROMDAMAGEPERCENTCONFIG_METHOD_3_B04797CF6DFC505E_OFFSET))(a1, a2);
		}
	};
}
