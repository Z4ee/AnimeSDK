#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::OdinInspector::Extension
{
	inline static constexpr unsigned int SuffixButtonType_TypeDefinitionIndex = 8209;

	enum class SuffixButtonType : ::System::Int32
	{
		AnimationCurvePreview = 0,
		GalGameShowSetting = 1,
		TimelineShowSetting = 2,
	};
}
