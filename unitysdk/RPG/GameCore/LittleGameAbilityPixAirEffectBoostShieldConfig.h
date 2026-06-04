#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBOOSTSHIELDCONFIG_METHOD_3_0C6655B6D72FAD35_OFFSET UNITYSDK_OFFSET(0x19893DE0)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBOOSTSHIELDCONFIG_METHOD_3_30B639CDD835AB29_OFFSET UNITYSDK_OFFSET(0x19893EB0)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBOOSTSHIELDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19893EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirEffectBoostShieldConfig_TypeDefinitionIndex = 20180;

	class LittleGameAbilityPixAirEffectBoostShieldConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* BoostValue; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBOOSTSHIELDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0C6655B6D72FAD35(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectBoostShieldConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEffectBoostShieldConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBOOSTSHIELDCONFIG_METHOD_3_0C6655B6D72FAD35_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_30B639CDD835AB29(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectBoostShieldConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEffectBoostShieldConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBOOSTSHIELDCONFIG_METHOD_3_30B639CDD835AB29_OFFSET))(a1, a2);
		}
	};
}
