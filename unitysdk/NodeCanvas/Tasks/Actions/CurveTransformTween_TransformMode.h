#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int CurveTransformTween_TransformMode_TypeDefinitionIndex = 27904;

	enum class CurveTransformTween_TransformMode : ::System::Int32
	{
		Scale = 2,
		Rotation = 1,
		Position = 0,
	};
}
