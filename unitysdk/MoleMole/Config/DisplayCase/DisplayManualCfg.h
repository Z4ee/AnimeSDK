#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config::DisplayCase
{
	inline static constexpr unsigned int DisplayManualCfg_TypeDefinitionIndex = 80267;

	struct alignas(4) DisplayManualCfg
	{
		::UnityEngine::Vector3 Position; // 0x10
		::UnityEngine::Vector3 Rotation; // 0x1C
	};
}
