#pragma once
#include "unitysdk/unitysdk.h"

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB_RenderType_TypeDefinitionIndex = 85024;

	enum class MB_RenderType : ::System::Int32
	{
		meshRenderer = 0,
		skinnedMeshRenderer = 1,
	};
}
