#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGColliderEnum_TypeDefinitionIndex = 38787;

	enum class CGColliderEnum : ::System::Int32
	{
		None = 0,
		Mesh = 1,
		Sphere = 3,
		Capsule = 4,
		Box = 2,
	};
}
