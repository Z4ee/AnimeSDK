#pragma once
#include "unitysdk/unitysdk.h"

namespace Onager::FXMesh
{
	inline static constexpr unsigned int FXMeshSettings_ChannelMode_TypeDefinitionIndex = 36445;

	enum class FXMeshSettings_ChannelMode : ::System::Int32
	{
		None = 0,
		Gradient = 1,
		Curves = 2,
	};
}
