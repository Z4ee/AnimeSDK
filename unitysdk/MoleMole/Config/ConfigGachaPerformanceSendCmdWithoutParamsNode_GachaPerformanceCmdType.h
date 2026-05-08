#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformanceSendCmdWithoutParamsNode_GachaPerformanceCmdType_TypeDefinitionIndex = 69454;

	enum class ConfigGachaPerformanceSendCmdWithoutParamsNode_GachaPerformanceCmdType : ::System::Int32
	{
		PlaySummonsBornAnimation = 9,
		PlayItemShake = 3,
		PlayStageRotateEffect = 6,
		PlayTextShotTimeline = 8,
		ItemStageRaritySPerform = 1,
		TvRaritySPerform = 0,
		PlayStageRotateScreenEffects = 5,
		ResetGaussianBlurParams = 2,
		SetTvMatProperty = 4,
		ItemStageRarityPerform = 7,
	};
}
