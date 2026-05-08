#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/DataOrientated/ChunkComponentData_1.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera::DataOrientated
{
	inline static constexpr unsigned int ChunkComponentData_1_DisposeJob_TypeDefinitionIndex = 36127;

	template <typename TScope>
	struct ChunkComponentData_1_DisposeJob
	{
		::PipelineCamera::DataOrientated::ChunkComponentData_1<TScope> Data; // 0x0
	};
}
