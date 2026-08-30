#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::SwordTraining
{
	inline static constexpr unsigned int SwordTrainingGameRecordType_TypeDefinitionIndex = 74754;

	enum class SwordTrainingGameRecordType : ::System::Int32
	{
		None = 0,
		StatusChanged = 1,
		OldStatus = 2,
		OldSkillPoint = 4,
		OldMood = 8,
		ActionLevelUp = 16,
		SkillPointChanged = 32,
		MoodChanged = 64,
		DaySwitch = 128,
		ActionHintMoodChanged = 256,
		ActionHintStatusChanged = 512,
		ActionHintSkillPointChanged = 1024,
		OldValues = 14,
	};
}
