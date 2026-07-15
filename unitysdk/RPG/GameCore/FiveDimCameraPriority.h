#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimCameraPriority_TypeDefinitionIndex = 17880;

	enum class FiveDimCameraPriority : ::System::Int32
	{
		Default = 0,
		SurfaceCamera = 1,
		GravityBoardCamera = 2,
		PipePortalCamera = 3,
		TaskCamera = 4,
		Count = 5,
	};
}
