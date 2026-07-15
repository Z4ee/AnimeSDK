#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int NavigationTestResult_TypeDefinitionIndex = 54559;

	enum class NavigationTestResult : ::System::Int32
	{
		OK = 0,
		SelfOutOfNavMesh = 1,
		TargetOutOfNavMesh = 2,
		InvalidPath = 3,
		PartialPath = 4,
		TooMuchCorners = 5,
		TooLongPath = 6,
	};
}
