#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefReportMarkType_TypeDefinitionIndex = 57313;

	enum class RogueTournBuildRefReportMarkType : ::System::UInt32
	{
		None = 0x0,
		Essential = 0x1,
		Optional = 0x2,
	};
}
