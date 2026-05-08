#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Dest::Math
{
	inline static constexpr unsigned int Edge3_TypeDefinitionIndex = 33215;

	struct alignas(4) Edge3
	{
		::UnityEngine::Vector3 Point0; // 0x10
		::UnityEngine::Vector3 Point1; // 0x1C
		::UnityEngine::Vector3 Direction; // 0x28
		::UnityEngine::Vector3 Normal; // 0x34
		::System::Single Length; // 0x40
	};
}
