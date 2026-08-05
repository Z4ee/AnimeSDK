#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OCTREE_MATHEXTENSIONS_CLAMP_OFFSET UNITYSDK_OFFSET(0x16FF5300)

namespace Octree
{
	inline static constexpr unsigned int MathExtensions_TypeDefinitionIndex = 40548;

	class MathExtensions : public ::System::Object
	{
	public:
		static ::System::Single Clamp(::System::Single value, ::System::Single min, ::System::Single max)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OCTREE_MATHEXTENSIONS_CLAMP_OFFSET))(value, min, max);
		}
	};
}
