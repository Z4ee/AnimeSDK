#pragma once
#include "unitysdk/unitysdk.h"

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_MeshCombiner_MeshCombiningStatus_TypeDefinitionIndex = 85048;

	enum class MB3_MeshCombiner_MeshCombiningStatus : ::System::Int32
	{
		preAddDeleteOrUpdate = 0,
		readyForApply = 1,
	};
}
