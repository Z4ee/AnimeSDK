#pragma once
#include "unitysdk/unitysdk.h"

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB_MeshCombineAPIType_TypeDefinitionIndex = 90662;

	enum class MB_MeshCombineAPIType : ::System::Int32
	{
		simpleMeshAPI = 0,
		betaNativeArrayAPI = 1,
	};
}
