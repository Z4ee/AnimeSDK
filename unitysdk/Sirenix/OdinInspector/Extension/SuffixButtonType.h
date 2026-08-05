#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::OdinInspector::Extension
{
	inline static constexpr unsigned int SuffixButtonType_TypeDefinitionIndex = 8028;

	enum class SuffixButtonType : ::System::Int32
	{
		GalGameShowSetting = 1,
		TimelineShowSetting = 2,
		AnimationCurvePreview = 0,
	};
}
