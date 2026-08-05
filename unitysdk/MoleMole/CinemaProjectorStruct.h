#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole
{
	inline static constexpr unsigned int CinemaProjectorStruct_TypeDefinitionIndex = 59136;

	struct alignas(4) CinemaProjectorStruct
	{
		::UnityEngine::Vector3 position; // 0x10
		::UnityEngine::Vector3 rotation; // 0x1C
	};
}
