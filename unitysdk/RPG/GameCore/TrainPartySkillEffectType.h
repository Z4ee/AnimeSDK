#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartySkillEffectType_TypeDefinitionIndex = 14840;

	enum class TrainPartySkillEffectType : ::System::Int32
	{
		TrainPartySkillEffectNone = 0,
		BaseScoreUpPerCard = 1,
		AddRatio = 2,
		RerollNumUp = 3,
		AddCardCategoryLevel = 4,
		AddPlayCardNum = 5,
		AddRatioOnReRoll = 6,
		AddRatioOnReRollDone = 7,
		AddRatioOnFinallyPlayCard = 8,
		AllCardCalcScore = 9,
		AddRatioOnAllCardUnique = 10,
		AddRandomBaseScore = 11,
		ProbilityDestroy = 12,
		MultiplyRatioProbility = 13,
		ChangeOtherSkill = 14,
		DestroyOnPlayCardFinish = 15,
		AddRatioOnCardNumLessThanParam = 16,
		AddScoreByLeftCardNum = 17,
		PlayCardNumUp = 18,
		UpOtherEffectProbility = 19,
		AddPassengerCardStat = 20,
		MultiplyRatioOnFinallyPlayCard = 21,
	};
}
