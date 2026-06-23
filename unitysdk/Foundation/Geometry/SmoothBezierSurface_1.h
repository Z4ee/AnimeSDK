#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Geometry/DefaultSurfaceDimension.h"

namespace Foundation::Geometry { template <typename T> class IBezierControlPointPolicy_1; }

namespace Foundation::Geometry
{
	inline static constexpr unsigned int SmoothBezierSurface_1_TypeDefinitionIndex = 8449;

	template <typename T>
	class SmoothBezierSurface_1 : public ::Foundation::Geometry::DefaultSurfaceDimension
	{
	public:
		::Il2CppArray<T>* controlPoints; // 0x0
		::System::Int32 controlM; // 0x0
		::System::Int32 controlN; // 0x0
	};
}
