#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int MissionResult_TypeDefinitionIndex = 66753;

	enum class MissionResult : ::System::Byte
	{
		Fail = 0x0,
		Gold_S = 0x4,
		Plastics_C = 0x1,
		SS = 0x5,
		Silver_A = 0x3,
		Cooper_B = 0x2,
	};
}
