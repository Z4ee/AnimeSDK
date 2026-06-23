#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Geometry/ConicSection2D.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Geometry
{
	inline static constexpr unsigned int ConicSection2D_1_TypeDefinitionIndex = 8623;

	template <typename TShape>
	struct ConicSection2D_1
	{
		::Foundation::Geometry::ConicSection2D Expression; // 0x0
		TShape Shape; // 0x0
	};
}
