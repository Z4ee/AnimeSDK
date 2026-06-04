#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTAPPLYPERCENTDAMAGECONFIG_METHOD_3_8127FD4DC7B2B363_OFFSET UNITYSDK_OFFSET(0x19893750)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTAPPLYPERCENTDAMAGECONFIG_METHOD_3_F03872C121479677_OFFSET UNITYSDK_OFFSET(0x19893820)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTAPPLYPERCENTDAMAGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19893810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirEffectApplyPercentDamageConfig_TypeDefinitionIndex = 20176;

	class LittleGameAbilityPixAirEffectApplyPercentDamageConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* Percentage; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTAPPLYPERCENTDAMAGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8127FD4DC7B2B363(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectApplyPercentDamageConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEffectApplyPercentDamageConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTAPPLYPERCENTDAMAGECONFIG_METHOD_3_8127FD4DC7B2B363_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F03872C121479677(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectApplyPercentDamageConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEffectApplyPercentDamageConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTAPPLYPERCENTDAMAGECONFIG_METHOD_3_F03872C121479677_OFFSET))(a1, a2);
		}
	};
}
