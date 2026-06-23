#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int ESetCameraMode_TypeDefinitionIndex = 59293;

	enum class ESetCameraMode : ::System::Int32
	{
		TwoEntityMiddle = 200,
		FixPos = 100,
		FocusAround = 300,
		SetMainCity = 400,
		FocusCamera = 500,
		None = 0,
	};
}
