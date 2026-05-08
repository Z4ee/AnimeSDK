#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int ESetCameraMode_TypeDefinitionIndex = 80295;

	enum class ESetCameraMode : ::System::Int32
	{
		FocusCamera = 500,
		None = 0,
		SetMainCity = 400,
		TwoEntityMiddle = 200,
		FixPos = 100,
		FocusAround = 300,
	};
}
