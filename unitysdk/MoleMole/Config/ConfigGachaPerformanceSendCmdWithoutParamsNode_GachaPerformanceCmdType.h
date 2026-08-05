#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformanceSendCmdWithoutParamsNode_GachaPerformanceCmdType_TypeDefinitionIndex = 70238;

	enum class ConfigGachaPerformanceSendCmdWithoutParamsNode_GachaPerformanceCmdType : ::System::Int32
	{
		SetTvMatProperty = 4,
		ItemStageRarityPerform = 7,
		PlayItemShake = 3,
		PlayStageRotateEffect = 6,
		PlaySummonsBornAnimation = 9,
		ResetGaussianBlurParams = 2,
		PlayTextShotTimeline = 8,
		PlayStageRotateScreenEffects = 5,
		TvRaritySPerform = 0,
		ItemStageRaritySPerform = 1,
	};
}
