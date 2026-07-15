#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShaderPropertySetType_TypeDefinitionIndex = 23917;

	enum class ShaderPropertySetType : ::System::Int32
	{
		Int = 0,
		Float = 1,
		Vector4 = 2,
		Vector4_FromTargetPos = 3,
		Vector4_FromTargetDir = 4,
		Color = 5,
	};
}
