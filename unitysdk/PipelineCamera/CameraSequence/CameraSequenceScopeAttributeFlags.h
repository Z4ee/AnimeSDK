#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceScopeAttributeFlags_TypeDefinitionIndex = 38586;

	enum class CameraSequenceScopeAttributeFlags : ::System::Int32
	{
		None = 0,
		UseRuntimeData = 1,
		MakeRuntimeDataPartial = 2,
		UsePartialRuntimeData = 3,
	};
}
