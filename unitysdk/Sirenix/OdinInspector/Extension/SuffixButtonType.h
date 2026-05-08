#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::OdinInspector::Extension
{
	inline static constexpr unsigned int SuffixButtonType_TypeDefinitionIndex = 7801;

	enum class SuffixButtonType : ::System::Int32
	{
		AnimationCurvePreview = 0,
		TimelineShowSetting = 2,
		GalGameShowSetting = 1,
	};
}
