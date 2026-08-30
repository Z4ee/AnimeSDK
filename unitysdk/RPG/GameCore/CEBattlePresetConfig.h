#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleLineupSPPreset.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattleLineupAvatarConfig; }
namespace RPG::GameCore { class CEBattleAreaInfo; }
namespace RPG::GameCore { class LineupMazeBuffData; }
namespace System { class String; }

#define RPG_GAMECORE_CEBATTLEPRESETCONFIG_METHOD_2_CE10F47310F041EF_OFFSET UNITYSDK_OFFSET(0x1CDCF580)
#define RPG_GAMECORE_CEBATTLEPRESETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDCF8F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CEBattlePresetConfig_TypeDefinitionIndex = 17928;

	class CEBattlePresetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* SaveFile; // 0x10
		::System::String* Name; // 0x18
		::System::UInt32 StageID; // 0x20
		::System::UInt32 WorldLevel; // 0x24
		::System::String* SkillTreePreset; // 0x28
		::RPG::GameCore::BattleLineupSPPreset SPPreset; // 0x30
		::Il2CppArray<::RPG::GameCore::BattleLineupAvatarConfig*>* LineupConfigList; // 0x38
		::Il2CppArray<::RPG::GameCore::LineupMazeBuffData*>* MazeBuffDataList; // 0x40
		::RPG::GameCore::CEBattleAreaInfo* BattleArea; // 0x48
		::Il2CppArray<::System::UInt32>* BattleScoringList; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CEBATTLEPRESETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CE10F47310F041EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CEBattlePresetConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CEBattlePresetConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CEBATTLEPRESETCONFIG_METHOD_2_CE10F47310F041EF_OFFSET))(a1, a2);
		}
	};
}
