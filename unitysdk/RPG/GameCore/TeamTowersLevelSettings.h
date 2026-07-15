#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameLevelSettings.h"
#include "unitysdk/RPG/GameCore/TeamTowersLevelGameMode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TeamTowersAIConfig; }
namespace RPG::GameCore { class TeamTowersBossConfig; }
namespace RPG::GameCore { class TeamTowersInfiniteModeConfig; }
namespace RPG::GameCore { class TeamTowersRaceModeConfig; }

#define RPG_GAMECORE_TEAMTOWERSLEVELSETTINGS_METHOD_3_2B9D43AC50C2E1BA_OFFSET UNITYSDK_OFFSET(0x1C148BB0)
#define RPG_GAMECORE_TEAMTOWERSLEVELSETTINGS_METHOD_3_3B09C2117AA7CA95_OFFSET UNITYSDK_OFFSET(0x1C148C10)
#define RPG_GAMECORE_TEAMTOWERSLEVELSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C148BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamTowersLevelSettings_TypeDefinitionIndex = 18207;

	class TeamTowersLevelSettings : public ::RPG::GameCore::LittleGameLevelSettings
	{
	public:
		::RPG::GameCore::TeamTowersLevelGameMode GameMode; // 0x10
		::Il2CppArray<::System::UInt32>* TargetHeightList; // 0x18
		::Il2CppArray<::System::UInt32>* NormalFieldIDs; // 0x20
		::Il2CppArray<::System::UInt32>* IvyFieldIDs; // 0x28
		::System::UInt32 MaxSpawnBrickPositionXDelta; // 0x30
		::System::UInt32 MaxPlayerHP; // 0x34
		::System::Single BrickScale; // 0x38
		::System::Single FeverDuration; // 0x3C
		::System::Single DeadAreaMaxY; // 0x40
		::RPG::GameCore::TeamTowersBossConfig* BossConfig; // 0x48
		::RPG::GameCore::TeamTowersAIConfig* AIConfig; // 0x50
		::RPG::GameCore::TeamTowersRaceModeConfig* RaceModeConfig; // 0x58
		::RPG::GameCore::TeamTowersInfiniteModeConfig* InfiniteModeConfig; // 0x60
		::Il2CppArray<::RPG::GameCore::TeamTowersAIConfig*>* MultiAIConfig; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSLEVELSETTINGS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2B9D43AC50C2E1BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeamTowersLevelSettings*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamTowersLevelSettings*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSLEVELSETTINGS_METHOD_3_2B9D43AC50C2E1BA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3B09C2117AA7CA95(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeamTowersLevelSettings* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamTowersLevelSettings*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSLEVELSETTINGS_METHOD_3_3B09C2117AA7CA95_OFFSET))(a1, a2);
		}
	};
}
