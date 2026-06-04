#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBOOSTBURNCONFIG_METHOD_3_A47E98A0B5D442D1_OFFSET UNITYSDK_OFFSET(0x19893970)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBOOSTBURNCONFIG_METHOD_3_D402B4A6C9B4439D_OFFSET UNITYSDK_OFFSET(0x198938A0)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBOOSTBURNCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19893960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirEffectBoostBurnConfig_TypeDefinitionIndex = 20181;

	class LittleGameAbilityPixAirEffectBoostBurnConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* BoostValue; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBOOSTBURNCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D402B4A6C9B4439D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectBoostBurnConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEffectBoostBurnConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBOOSTBURNCONFIG_METHOD_3_D402B4A6C9B4439D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A47E98A0B5D442D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectBoostBurnConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirEffectBoostBurnConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBOOSTBURNCONFIG_METHOD_3_A47E98A0B5D442D1_OFFSET))(a1, a2);
		}
	};
}
