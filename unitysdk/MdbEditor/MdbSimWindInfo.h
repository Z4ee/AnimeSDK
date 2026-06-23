#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MdbEditor
{
	inline static constexpr unsigned int MdbSimWindInfo_TypeDefinitionIndex = 91479;

	struct alignas(4) MdbSimWindInfo
	{
		::System::Boolean IsWorldSpace; // 0x10
		::UnityEngine::Vector3 SimWindOrigin; // 0x14
		::UnityEngine::Vector3 SimWindUnitDir; // 0x20
		::System::Single SimWindSpeed; // 0x2C
		::UnityEngine::Vector3 SimWindCirclePlaneNorm; // 0x30
	};
}
