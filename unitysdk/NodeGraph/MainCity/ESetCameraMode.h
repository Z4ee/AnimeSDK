#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int ESetCameraMode_TypeDefinitionIndex = 55540;

	enum class ESetCameraMode : ::System::Int32
	{
		FixPos = 100,
		FocusAround = 300,
		FocusCamera = 500,
		SetMainCity = 400,
		TwoEntityMiddle = 200,
		None = 0,
	};
}
