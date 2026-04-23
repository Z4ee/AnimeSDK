#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StarFightDifficulty.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYSTARFIGHTSTAGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18635FC0)
#define RPG_GAMECORE_ACTIVITYSTARFIGHTSTAGECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x186361F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityStarFightStageConfigRow_TypeDefinitionIndex = 11715;

	class ActivityStarFightStageConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::System::UInt32 GroupID; // 0x18
		::System::UInt32 UnlockQuest; // 0x1C
		::RPG::GameCore::StarFightDifficulty DifficultyLevel; // 0x20
		::System::UInt32 BattleAreaID; // 0x24
		::System::UInt32 EventID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYSTARFIGHTSTAGECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityStarFightStageConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityStarFightStageConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYSTARFIGHTSTAGECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
