#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int MissionResult_TypeDefinitionIndex = 55614;

	enum class MissionResult : ::System::Byte
	{
		SS = 0x5,
		Gold_S = 0x4,
		Fail = 0x0,
		Plastics_C = 0x1,
		Silver_A = 0x3,
		Cooper_B = 0x2,
	};
}
