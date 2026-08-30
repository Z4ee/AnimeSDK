#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSFROZENBRICKEFFECTCONFIG_METHOD_3_4A2F4D5988D25E86_OFFSET UNITYSDK_OFFSET(0x1DD656A0)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSFROZENBRICKEFFECTCONFIG_METHOD_3_BD14D00D675737F2_OFFSET UNITYSDK_OFFSET(0x1DD65770)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSFROZENBRICKEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD65760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityTeamTowersFrozenBrickEffectConfig_TypeDefinitionIndex = 21164;

	class LittleGameAbilityTeamTowersFrozenBrickEffectConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* Friction; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSFROZENBRICKEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4A2F4D5988D25E86(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersFrozenBrickEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTeamTowersFrozenBrickEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSFROZENBRICKEFFECTCONFIG_METHOD_3_4A2F4D5988D25E86_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BD14D00D675737F2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersFrozenBrickEffectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTeamTowersFrozenBrickEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSFROZENBRICKEFFECTCONFIG_METHOD_3_BD14D00D675737F2_OFFSET))(a1, a2);
		}
	};
}
