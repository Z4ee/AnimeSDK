#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/SerializableHashString.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Photo
{
	inline static constexpr unsigned int BlendPosePerBoneBranchFilter_TypeDefinitionIndex = 78349;

	struct alignas(8) BlendPosePerBoneBranchFilter
	{
		::PipelineCamera::SerializableHashString boneName; // 0x10
		::System::Int32 blendDepth; // 0x20
	};
}
