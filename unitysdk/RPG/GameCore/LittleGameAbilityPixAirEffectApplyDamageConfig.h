#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTAPPLYDAMAGECONFIG_METHOD_3_B3E7284CE538C0DA_OFFSET UNITYSDK_OFFSET(0x1D1F9900)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTAPPLYDAMAGECONFIG_METHOD_3_D78783FEA7B81126_OFFSET UNITYSDK_OFFSET(0x1D1F99D0)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTAPPLYDAMAGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1F99C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirEffectApplyDamageConfig_TypeDefinitionIndex = 21092;

	class LittleGameAbilityPixAirEffectApplyDamageConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* Damage; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTAPPLYDAMAGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B3E7284CE538C0DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectApplyDamageConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEffectApplyDamageConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTAPPLYDAMAGECONFIG_METHOD_3_B3E7284CE538C0DA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D78783FEA7B81126(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectApplyDamageConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEffectApplyDamageConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTAPPLYDAMAGECONFIG_METHOD_3_D78783FEA7B81126_OFFSET))(a1, a2);
		}
	};
}
