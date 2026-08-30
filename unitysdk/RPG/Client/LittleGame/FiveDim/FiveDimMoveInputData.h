#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimMoveInputData_TypeDefinitionIndex = 76766;

	struct alignas(4) FiveDimMoveInputData
	{
		::UnityEngine::Vector2 NormalizedDirection; // 0x10
		::UnityEngine::Vector2 RawDirection; // 0x18
	};
}
