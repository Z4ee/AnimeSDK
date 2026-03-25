#pragma once
#include "unitysdk/unitysdk.h"

namespace LightCodeGen
{
	inline static constexpr unsigned int VarKind_TypeDefinitionIndex = 39726;

	enum class VarKind : ::System::Int32
	{
		String = 0,
		Float = 1,
		Vector = 2,
		Color = 3,
		Int = 4,
		Bool = 5,
	};
}
