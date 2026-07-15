#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefShareCodeS11nErrorType_TypeDefinitionIndex = 64553;

	enum class RogueTournBuildRefShareCodeS11nErrorType : ::System::Int32
	{
		None = 0,
		S11nFailed = 1,
		OutOfDate = 2,
	};
}
