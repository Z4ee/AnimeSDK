#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx_Randomize3dCalcType_TypeDefinitionIndex = 37810;

	enum class CriAtomEx_Randomize3dCalcType : ::System::Int32
	{
		None = -1,
		Rectangle = 0,
		Cuboid = 1,
		Circle = 2,
		Cylinder = 3,
		Sphere = 4,
		List = 6,
	};
}
