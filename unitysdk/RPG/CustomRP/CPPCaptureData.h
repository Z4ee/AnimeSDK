#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/CRPGlobalMutationStats.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CPPCaptureData_TypeDefinitionIndex = 36935;

	struct alignas(8) CPPCaptureData
	{
		::UnityEngine::Rendering::CRPGlobalMutationStats globalMutationStats; // 0x10
	};
}
