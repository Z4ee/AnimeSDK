#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class AnimationCurve; }

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int CellDiffusionConfigParas_TypeDefinitionIndex = 57096;

	struct alignas(8) CellDiffusionConfigParas
	{
		::System::Single BlendRatio; // 0x10
		::System::Single noiseRange; // 0x14
		::System::Single RemapDurationInTotalPercent; // 0x18
		::UnityEngine::AnimationCurve* RemapFunc; // 0x20
		::UnityEngine::AnimationCurve* SearchRatioPercentCurve; // 0x28
	};
}
