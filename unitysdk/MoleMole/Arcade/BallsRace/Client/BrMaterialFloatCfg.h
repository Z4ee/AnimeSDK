#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Arcade::BallsRace::Client
{
	inline static constexpr unsigned int BrMaterialFloatCfg_TypeDefinitionIndex = 89327;

	struct alignas(4) BrMaterialFloatCfg
	{
		::System::Single Value; // 0x10
		::System::Boolean NeedLerp; // 0x14
	};
}
