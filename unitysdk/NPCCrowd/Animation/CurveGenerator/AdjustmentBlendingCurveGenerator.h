#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/CurveGenerator/AdjustmentBlendingCurveGenerator_MotionRatioCurveType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define NPCCROWD_ANIMATION_CURVEGENERATOR_ADJUSTMENTBLENDINGCURVEGENERATOR_GETRATIOCURVENAME_OFFSET UNITYSDK_OFFSET(0xFB56BC0)

namespace NPCCrowd::Animation::CurveGenerator
{
	inline static constexpr unsigned int AdjustmentBlendingCurveGenerator_TypeDefinitionIndex = 50646;

	struct alignas(1) AdjustmentBlendingCurveGenerator
	{
		static ::System::String* GetRatioCurveName(::System::String* boneName, ::NPCCrowd::Animation::CurveGenerator::AdjustmentBlendingCurveGenerator_MotionRatioCurveType curve)
		{
			return ((::System::String*(*)(::System::String*, ::NPCCrowd::Animation::CurveGenerator::AdjustmentBlendingCurveGenerator_MotionRatioCurveType))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CURVEGENERATOR_ADJUSTMENTBLENDINGCURVEGENERATOR_GETRATIOCURVENAME_OFFSET))(boneName, curve);
		}
	};
}
