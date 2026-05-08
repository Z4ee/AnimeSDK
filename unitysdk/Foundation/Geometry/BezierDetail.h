#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"

namespace Foundation::Geometry { template <typename T> class IBezierControlPointPolicy_1; }

#define FOUNDATION_GEOMETRY_BEZIERDETAIL_BERNSTEIN_OFFSET UNITYSDK_OFFSET(0x1C51F6D0)
#define FOUNDATION_GEOMETRY_BEZIERDETAIL_BREAKPARAM_OFFSET UNITYSDK_OFFSET(0x1C51F7C0)

namespace Foundation::Geometry
{
	inline static constexpr unsigned int BezierDetail_TypeDefinitionIndex = 9121;

	class BezierDetail : public ::System::Object
	{
	public:
		static ::System::Void Bernstein(::System::Single value, ::System::Span_1<::System::Single> result)
		{
			return ((::System::Void(*)(::System::Single, ::System::Span_1<::System::Single>))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_BEZIERDETAIL_BERNSTEIN_OFFSET))(value, result);
		}

		static ::System::Single BreakParam(::System::Single t, ::System::Int32 n, ::System::Int32& integral, ::System::Single& fractional)
		{
			return ((::System::Single(*)(::System::Single, ::System::Int32, ::System::Int32&, ::System::Single&))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_BEZIERDETAIL_BREAKPARAM_OFFSET))(t, n, integral, fractional);
		}
	};
}
