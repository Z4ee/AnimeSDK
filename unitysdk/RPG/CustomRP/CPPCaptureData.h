#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/RecordTree.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CPPCaptureData_TypeDefinitionIndex = 36075;

	struct alignas(8) CPPCaptureData
	{
		::UnityEngine::Rendering::RecordTree tree; // 0x10
	};
}
