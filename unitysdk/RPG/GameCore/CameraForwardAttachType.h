#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CameraForwardAttachType_TypeDefinitionIndex = 15672;

	enum class CameraForwardAttachType : ::System::Int32
	{
		Effect = 0,
		Camera = 1,
		Default = 2,
	};
}
