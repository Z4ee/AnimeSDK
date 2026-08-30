#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSWINDEFFECTCONFIG_METHOD_3_2781750CD4257C9E_OFFSET UNITYSDK_OFFSET(0x1D1FDD40)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSWINDEFFECTCONFIG_METHOD_3_E26DB8DBB3A58AEC_OFFSET UNITYSDK_OFFSET(0x1D1FDDA0)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSWINDEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1FDD90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityTeamTowersWindEffectConfig_TypeDefinitionIndex = 21167;

	class LittleGameAbilityTeamTowersWindEffectConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* MinForce; // 0x10
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* MaxForce; // 0x18
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* AffectHeight; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSWINDEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2781750CD4257C9E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersWindEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTeamTowersWindEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSWINDEFFECTCONFIG_METHOD_3_2781750CD4257C9E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E26DB8DBB3A58AEC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersWindEffectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTeamTowersWindEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSWINDEFFECTCONFIG_METHOD_3_E26DB8DBB3A58AEC_OFFSET))(a1, a2);
		}
	};
}
