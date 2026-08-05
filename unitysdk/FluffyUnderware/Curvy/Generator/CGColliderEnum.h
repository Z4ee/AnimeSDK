#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGColliderEnum_TypeDefinitionIndex = 39676;

	enum class CGColliderEnum : ::System::Int32
	{
		Mesh = 1,
		Box = 2,
		None = 0,
		Capsule = 4,
		Sphere = 3,
	};
}
