#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int PoseDataType_TypeDefinitionIndex = 46947;

	enum class PoseDataType : ::System::Int32
	{
		Normal = 0,
		Baked = 1,
		AnimationClip = 2,
	};
}
