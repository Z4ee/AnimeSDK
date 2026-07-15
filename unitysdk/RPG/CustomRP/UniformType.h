#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int UniformType_TypeDefinitionIndex = 36210;

	enum class UniformType : ::System::Byte
	{
		Float = 0x0,
		Int = 0x1,
		Bool = 0x2,
		Vector2 = 0x3,
		Vector3 = 0x4,
		Vector4 = 0x5,
		Color = 0x6,
		Enum = 0x7,
		String = 0x8,
	};
}
