#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleLineupSPPreset.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattleLineupAvatarConfig; }
namespace RPG::GameCore { class LineupMazeBuffData; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLELINEUPDEVPRESETCONFIG_METHOD_2_4A2BB0E5DB253BC7_OFFSET UNITYSDK_OFFSET(0x1D432430)
#define RPG_GAMECORE_BATTLELINEUPDEVPRESETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D432760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleLineupDevPresetConfig_TypeDefinitionIndex = 18141;

	class BattleLineupDevPresetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::UInt32 StageID; // 0x18
		::System::UInt32 WorldLevel; // 0x1C
		::RPG::GameCore::BattleLineupSPPreset SPPreset; // 0x20
		::Il2CppArray<::RPG::GameCore::BattleLineupAvatarConfig*>* MainTeamConfigList; // 0x28
		::Il2CppArray<::RPG::GameCore::BattleLineupAvatarConfig*>* ExtraTeamConfigList; // 0x30
		::Il2CppArray<::RPG::GameCore::LineupMazeBuffData*>* MazeBuffDataList; // 0x38
		::System::UInt32 BattleAreaRowID; // 0x40
		::Il2CppArray<::System::UInt32>* BattleScoringList; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDEVPRESETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4A2BB0E5DB253BC7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleLineupDevPresetConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleLineupDevPresetConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDEVPRESETCONFIG_METHOD_2_4A2BB0E5DB253BC7_OFFSET))(a1, a2);
		}
	};
}
