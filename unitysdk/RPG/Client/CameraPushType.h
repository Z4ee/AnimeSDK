#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int CameraPushType_TypeDefinitionIndex = 66507;

	enum class CameraPushType : ::System::Int32
	{
		None = 0,
		NormalPush = 1,
		ManualPush = 2,
	};
}
