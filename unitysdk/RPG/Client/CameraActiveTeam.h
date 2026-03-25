#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int CameraActiveTeam_TypeDefinitionIndex = 57009;

	enum class CameraActiveTeam : ::System::Int32
	{
		All = 0,
		TeamLight = 1,
		TeamDark = 2,
	};
}
