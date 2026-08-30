#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraDuelPresetTeamConfig; }

#define RPG_GAMECORE_CHIMERADUELPRESETBATTLECONFIG_METHOD_2_C5FDF07BD3891261_OFFSET UNITYSDK_OFFSET(0x1CFCBBB0)
#define RPG_GAMECORE_CHIMERADUELPRESETBATTLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFCBD20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelPresetBattleConfig_TypeDefinitionIndex = 15855;

	class ChimeraDuelPresetBattleConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChimeraDuelPresetTeamConfig* AllyTeam; // 0x10
		::System::UInt32 AllyMasterID; // 0x18
		::RPG::GameCore::ChimeraDuelPresetTeamConfig* EnemyTeam; // 0x20
		::System::UInt32 EnemyMasterID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPRESETBATTLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C5FDF07BD3891261(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelPresetBattleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelPresetBattleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPRESETBATTLECONFIG_METHOD_2_C5FDF07BD3891261_OFFSET))(a1, a2);
		}
	};
}
