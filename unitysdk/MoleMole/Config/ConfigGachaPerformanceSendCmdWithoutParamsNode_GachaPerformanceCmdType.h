#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformanceSendCmdWithoutParamsNode_GachaPerformanceCmdType_TypeDefinitionIndex = 63974;

	enum class ConfigGachaPerformanceSendCmdWithoutParamsNode_GachaPerformanceCmdType : ::System::Int32
	{
		ItemStageRaritySPerform = 1,
		ResetGaussianBlurParams = 2,
		PlayStageRotateScreenEffects = 5,
		SetTvMatProperty = 4,
		PlayItemShake = 3,
		PlaySummonsBornAnimation = 9,
		ItemStageRarityPerform = 7,
		PlayStageRotateEffect = 6,
		PlayTextShotTimeline = 8,
		TvRaritySPerform = 0,
	};
}
