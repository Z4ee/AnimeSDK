#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace PipeSplineDeformation
{
	inline static constexpr unsigned int PipeSplineCullGroup_TypeDefinitionIndex = 27934;

	struct alignas(4) PipeSplineCullGroup
	{
		::System::Int32 startIndex; // 0x10
		::System::Int32 count; // 0x14
		::UnityEngine::Bounds bounds; // 0x18
	};
}
