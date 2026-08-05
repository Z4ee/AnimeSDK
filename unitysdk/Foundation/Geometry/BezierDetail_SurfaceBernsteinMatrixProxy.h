#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_GEOMETRY_BEZIERDETAIL_SURFACEBERNSTEINMATRIXPROXY_GET_OFFSET UNITYSDK_OFFSET(0xABDFF0)
#define FOUNDATION_GEOMETRY_BEZIERDETAIL_SURFACEBERNSTEINMATRIXPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x44DAC0)

namespace Foundation::Geometry
{
	inline static constexpr unsigned int BezierDetail_SurfaceBernsteinMatrixProxy_TypeDefinitionIndex = 8574;

	struct alignas(8) BezierDetail_SurfaceBernsteinMatrixProxy
	{
		::System::ReadOnlySpan_1<::System::Single> _u; // 0x10
		::System::ReadOnlySpan_1<::System::Single> _v; // 0x28

		::System::Void _ctor(::System::ReadOnlySpan_1<::System::Single> u, ::System::ReadOnlySpan_1<::System::Single> v)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Single>, ::System::ReadOnlySpan_1<::System::Single>))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_BEZIERDETAIL_SURFACEBERNSTEINMATRIXPROXY__CTOR_OFFSET))(this, u, v);
		}

		::System::Single Get(::System::Int32 i, ::System::Int32 j)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_BEZIERDETAIL_SURFACEBERNSTEINMATRIXPROXY_GET_OFFSET))(this, i, j);
		}
	};
}
