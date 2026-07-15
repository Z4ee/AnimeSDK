#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureSkillCharacterComponent_SkillAllowUseCheckResult_TypeDefinitionIndex = 54321;

	enum class AdventureSkillCharacterComponent_SkillAllowUseCheckResult : ::System::Int32
	{
		Allow = 0,
		MPNotEnough = 1,
		UseTimeNotEnough = 2,
		TargetInvalid = 3,
		InCD = 4,
		WaitServerRsp = 5,
		UnknownError = 6,
		ConfigError = 7,
		AnimZoneForbid = 8,
		SkillNotFinish = 9,
		TriggeringBattle = 10,
		PlotCharacterForbid = 11,
		MapRotation = 12,
		LockModuleForbid = 13,
		WaitSkillInput = 14,
		CustomForbid = 99,
	};
}
