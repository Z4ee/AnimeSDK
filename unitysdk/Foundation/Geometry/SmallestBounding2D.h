#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Geometry/Circle2D.h"
#include "unitysdk/Foundation/ThreadSafeRandom.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define FOUNDATION_GEOMETRY_SMALLESTBOUNDING2D_CREATECIRCLE_OFFSET UNITYSDK_OFFSET(0x1E3B7A40)
#define FOUNDATION_GEOMETRY_SMALLESTBOUNDING2D_MINIMUMENCLOSINGCIRCLEHELPER_OFFSET UNITYSDK_OFFSET(0x1E3B7210)
#define FOUNDATION_GEOMETRY_SMALLESTBOUNDING2D_MINIMUMENCLOSINGCIRCLE_OFFSET UNITYSDK_OFFSET(0x1E3B7030)

namespace Foundation::Geometry
{
	inline static constexpr unsigned int SmallestBounding2D_TypeDefinitionIndex = 8732;

	class SmallestBounding2D : public ::System::Object
	{
	public:
		static ::Foundation::Geometry::Circle2D MinimumEnclosingCircle(::Foundation::ThreadSafeRandom& random, ::System::Span_1<::UnityEngine::Vector2> points)
		{
			return ((::Foundation::Geometry::Circle2D(*)(::Foundation::ThreadSafeRandom&, ::System::Span_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_SMALLESTBOUNDING2D_MINIMUMENCLOSINGCIRCLE_OFFSET))(random, points);
		}

		static ::Foundation::Geometry::Circle2D MinimumEnclosingCircleHelper(::Foundation::ThreadSafeRandom& random, ::System::Span_1<::UnityEngine::Vector2> points, ::System::Int32 number, ::System::Span_1<::UnityEngine::Vector2> outerMost, ::System::Int32 numberOuterMost)
		{
			return ((::Foundation::Geometry::Circle2D(*)(::Foundation::ThreadSafeRandom&, ::System::Span_1<::UnityEngine::Vector2>, ::System::Int32, ::System::Span_1<::UnityEngine::Vector2>, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_SMALLESTBOUNDING2D_MINIMUMENCLOSINGCIRCLEHELPER_OFFSET))(random, points, number, outerMost, numberOuterMost);
		}

		static ::Foundation::Geometry::Circle2D CreateCircle(::System::ReadOnlySpan_1<::UnityEngine::Vector2> points)
		{
			return ((::Foundation::Geometry::Circle2D(*)(::System::ReadOnlySpan_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_SMALLESTBOUNDING2D_CREATECIRCLE_OFFSET))(points);
		}
	};
}
