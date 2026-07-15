#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int UseSkillErrorCode_TypeDefinitionIndex = 23887;

	enum class UseSkillErrorCode : ::System::Int32
	{
		NoError = 0,
		Undefined = 1,
		ComponentNotFound = 2,
		SkillIndexInvalid = 3,
		SkillNotFound = 4,
		PassiveSkillCannotUse = 5,
		PreviousSkillHasNotFinishd = 6,
		CharacterStateError = 7,
		ForbidUseSkill = 8,
		Cooling = 9,
		LackOfSP = 10,
		LackOfBP = 11,
		NoCastTimes = 12,
		SkillTypeDisable = 13,
		SkillNotInControlMap = 14,
		NoTarget = 15,
		CasterTypeError = 16,
		ModifierDisableAction = 17,
		CannotUseUltraSkillFlag = 18,
		NotCurrentActor = 19,
		NotInWaitOrderState = 20,
		UltraInNormalAction = 21,
		ForbidTurnState = 22,
		SkillForDisplay = 23,
		ConditionNotMeet = 24,
		OnlyDamagingInCrazyAI = 25,
		OnlyDamagingInCharm = 26,
		OtherLinkSkillUsing = 27,
		NoMatchAutoCast = 28,
		AssistSkillNotEnoughEnergy = 29,
	};
}
