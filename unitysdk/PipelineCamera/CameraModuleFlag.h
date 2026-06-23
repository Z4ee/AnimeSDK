#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraModuleFlag_TypeDefinitionIndex = 37588;

	enum class CameraModuleFlag : ::System::Int32
	{
		None = 0,
		Activate = 1,
		Deactivate = 2,
		Prepare = 4,
		Collect = 8,
		PostCollect = 16,
		Evaluate = 32,
		Flush = 64,
		Touch = 128,
		TrackInCollect = 256,
		SubModuleOwnerCollect = 204,
		SubModuleOwnerEvaluate = 236,
	};
}
