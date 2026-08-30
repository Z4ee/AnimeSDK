#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSMAKEBRICKIVYEFFECTCONFIG_METHOD_3_37DE9EFD01E7B6A4_OFFSET UNITYSDK_OFFSET(0x1DD65A10)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSMAKEBRICKIVYEFFECTCONFIG_METHOD_3_AB3475B587852678_OFFSET UNITYSDK_OFFSET(0x1DD65940)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSMAKEBRICKIVYEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD65A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityTeamTowersMakeBrickIvyEffectConfig_TypeDefinitionIndex = 21163;

	class LittleGameAbilityTeamTowersMakeBrickIvyEffectConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* SpreadTimes; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSMAKEBRICKIVYEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AB3475B587852678(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersMakeBrickIvyEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTeamTowersMakeBrickIvyEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSMAKEBRICKIVYEFFECTCONFIG_METHOD_3_AB3475B587852678_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_37DE9EFD01E7B6A4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersMakeBrickIvyEffectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTeamTowersMakeBrickIvyEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSMAKEBRICKIVYEFFECTCONFIG_METHOD_3_37DE9EFD01E7B6A4_OFFSET))(a1, a2);
		}
	};
}
