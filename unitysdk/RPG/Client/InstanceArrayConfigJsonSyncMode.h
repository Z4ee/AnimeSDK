#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int InstanceArrayConfigJsonSyncMode_TypeDefinitionIndex = 70818;

	enum class InstanceArrayConfigJsonSyncMode : ::System::Int32
	{
		FullOverwrite = 0,
		TransformAndDeformOnly = 1,
		MatMeshAndIdsOnly = 2,
	};
}
