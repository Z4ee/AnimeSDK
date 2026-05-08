#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int MissionResult_TypeDefinitionIndex = 67975;

	enum class MissionResult : ::System::Byte
	{
		Silver_A = 0x3,
		Cooper_B = 0x2,
		SS = 0x5,
		Plastics_C = 0x1,
		Fail = 0x0,
		Gold_S = 0x4,
	};
}
