#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int PathTracingDebug_DumpVertex_TypeDefinitionIndex = 49478;

	struct alignas(4) PathTracingDebug_DumpVertex
	{
		::UnityEngine::Vector3 positionWS; // 0x10
		::UnityEngine::Vector3 normalWS; // 0x1C
		::UnityEngine::Vector3 tangentWS; // 0x28
		::UnityEngine::Vector3 bitangentWS; // 0x34
		::UnityEngine::Vector3 contrib; // 0x40
	};
}
