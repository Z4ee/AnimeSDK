#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Editor
{
	inline static constexpr unsigned int BGCurvePCG_MeshGeneratorBase_UVMode_TypeDefinitionIndex = 49659;

	enum class BGCurvePCG_MeshGeneratorBase_UVMode : ::System::Int32
	{
		None = 0,
		GlobalUV = 1,
		LocalUV = 2,
	};
}
