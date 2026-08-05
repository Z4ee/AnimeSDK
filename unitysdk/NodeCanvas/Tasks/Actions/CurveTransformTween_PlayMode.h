#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int CurveTransformTween_PlayMode_TypeDefinitionIndex = 30423;

	enum class CurveTransformTween_PlayMode : ::System::Int32
	{
		PingPong = 1,
		Normal = 0,
	};
}
