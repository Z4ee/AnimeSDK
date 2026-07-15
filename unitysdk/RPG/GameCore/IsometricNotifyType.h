#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int IsometricNotifyType_TypeDefinitionIndex = 23745;

	enum class IsometricNotifyType : ::System::Int32
	{
		ReportStartIsometric = 0,
		ReportEndIsometric = 1,
		ReportMovePlatform = 2,
		ReportRotatePlatform = 3,
		InteractIsometric = 4,
		InteractPlatform = 5,
	};
}
