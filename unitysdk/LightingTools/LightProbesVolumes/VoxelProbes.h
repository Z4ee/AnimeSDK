#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace LightingTools::LightProbesVolumes
{
	inline static constexpr unsigned int VoxelProbes_TypeDefinitionIndex = 84936;

	struct alignas(8) VoxelProbes
	{
		::UnityEngine::Bounds bounds; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* indexs; // 0x28
	};
}
