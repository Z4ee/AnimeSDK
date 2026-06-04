#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBOOSTJAMCONFIG_METHOD_3_CF7FAA60D4FFAE62_OFFSET UNITYSDK_OFFSET(0x19893C10)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBOOSTJAMCONFIG_METHOD_3_EF1D4E4AA5316436_OFFSET UNITYSDK_OFFSET(0x19893B40)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBOOSTJAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19893C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirEffectBoostJamConfig_TypeDefinitionIndex = 20182;

	class LittleGameAbilityPixAirEffectBoostJamConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* BoostValue; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBOOSTJAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EF1D4E4AA5316436(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectBoostJamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEffectBoostJamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBOOSTJAMCONFIG_METHOD_3_EF1D4E4AA5316436_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CF7FAA60D4FFAE62(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectBoostJamConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEffectBoostJamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBOOSTJAMCONFIG_METHOD_3_CF7FAA60D4FFAE62_OFFSET))(a1, a2);
		}
	};
}
