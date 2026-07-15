#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBOOSTMULTICASTCONFIG_METHOD_3_490C1CA60DCE2AE4_OFFSET UNITYSDK_OFFSET(0x1B0937D0)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBOOSTMULTICASTCONFIG_METHOD_3_9362854846FA28B8_OFFSET UNITYSDK_OFFSET(0x1B093700)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBOOSTMULTICASTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0937C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirEffectBoostMultiCastConfig_TypeDefinitionIndex = 20556;

	class LittleGameAbilityPixAirEffectBoostMultiCastConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* BoostValue; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBOOSTMULTICASTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9362854846FA28B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectBoostMultiCastConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEffectBoostMultiCastConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBOOSTMULTICASTCONFIG_METHOD_3_9362854846FA28B8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_490C1CA60DCE2AE4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectBoostMultiCastConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEffectBoostMultiCastConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBOOSTMULTICASTCONFIG_METHOD_3_490C1CA60DCE2AE4_OFFSET))(a1, a2);
		}
	};
}
