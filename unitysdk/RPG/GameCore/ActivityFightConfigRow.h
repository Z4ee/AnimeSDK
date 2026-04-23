#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelDifficulty.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYFIGHTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18619EA0)
#define RPG_GAMECORE_ACTIVITYFIGHTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1861A6C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityFightConfigRow_TypeDefinitionIndex = 11045;

	class ActivityFightConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 FightEventID; // 0x10
		::System::UInt32 RewardWave; // 0x14
		::System::UInt32 OffsetLevel; // 0x18
		::System::UInt32 RoundsLimit; // 0x1C
		::System::UInt32 RewardWave2; // 0x20
		::System::UInt32 TotalWave; // 0x24
		::System::UInt32 RewardQuest; // 0x28
		::System::UInt32 RewardID; // 0x2C
		::System::UInt32 ActivityFightGroupID; // 0x30
		::RPG::GameCore::LevelDifficulty DifficultyLevel; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFIGHTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityFightConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityFightConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFIGHTCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
