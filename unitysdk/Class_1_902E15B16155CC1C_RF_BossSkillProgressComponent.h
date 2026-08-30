#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Class_1_902E15B16155CC1C_RF_BossSkillProgressComponent_TypeDefinitionIndex = 36387;

enum class Class_1_902E15B16155CC1C_RF_BossSkillProgressComponent : ::System::Byte
{
	CurSkillID = 0x1,
	ProgressType = 0x2,
	ViewType = 0x4,
	SkillStartTimeMs = 0x8,
	SkillEndTimeMs = 0x10,
	MaxCount = 0x20,
	RemainingCount = 0x40,
	Max = 0x7F,
};
