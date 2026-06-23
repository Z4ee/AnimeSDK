#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Arcade::BallsRace::Client
{
	inline static constexpr unsigned int BrMaterialColorCfg_TypeDefinitionIndex = 89547;

	struct alignas(4) BrMaterialColorCfg
	{
		::UnityEngine::Color Value; // 0x10
		::System::Boolean NeedLerp; // 0x20
	};
}
