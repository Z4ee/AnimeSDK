#pragma once
#include "unitysdk/unitysdk.h"

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_MeshCombinerSingle_MeshCreationConditions_TypeDefinitionIndex = 94565;

	enum class MB3_MeshCombinerSingle_MeshCreationConditions : ::System::Int32
	{
		NoMesh = 0,
		CreatedInEditor = 1,
		CreatedAtRuntime = 2,
		AssignedByUser = 3,
	};
}
