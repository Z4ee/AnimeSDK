#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialRestoreType_TypeDefinitionIndex = 14846;

	enum class TutorialRestoreType : ::System::Int32
	{
		Normal = 0,
		AutoFinish = 1,
	};
}
