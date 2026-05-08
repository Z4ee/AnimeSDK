#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation::CurveGenerator
{
	inline static constexpr unsigned int AdjustmentBlendingCurveGenerator_MotionRatioCurveType_TypeDefinitionIndex = 50647;

	enum class AdjustmentBlendingCurveGenerator_MotionRatioCurveType : ::System::Int32
	{
		Angle = 3,
		TranslationZ = 2,
		TranslationX = 0,
		TranslationY = 1,
	};
}
