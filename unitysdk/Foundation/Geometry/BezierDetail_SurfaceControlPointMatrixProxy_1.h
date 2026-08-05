#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Geometry
{
	inline static constexpr unsigned int BezierDetail_SurfaceControlPointMatrixProxy_1_TypeDefinitionIndex = 8575;

	template <typename T>
	struct BezierDetail_SurfaceControlPointMatrixProxy_1
	{
		::System::ReadOnlySpan_1<T> _controlPoints; // 0x0
		::System::Int32 _m; // 0x0
		::System::Int32 _n; // 0x0
		::System::Int32 _row; // 0x0
		::System::Int32 _column; // 0x0
	};
}
