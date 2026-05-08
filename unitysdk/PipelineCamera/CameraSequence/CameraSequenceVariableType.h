#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceVariableType_TypeDefinitionIndex = 36329;

	enum class CameraSequenceVariableType : ::System::Int32
	{
		Context = 0,
		Section = 1,
		Shared = 2,
		Count = 3,
	};
}
