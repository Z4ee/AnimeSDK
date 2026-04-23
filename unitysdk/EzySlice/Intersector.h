#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EzySlice/Line.h"
#include "unitysdk/EzySlice/Plane.h"
#include "unitysdk/EzySlice/Triangle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace EzySlice { class IntersectionResult; }

#define EZYSLICE_INTERSECTOR_INTERSECT_1_OFFSET UNITYSDK_OFFSET(0x8C00D60)
#define EZYSLICE_INTERSECTOR_INTERSECT_2_OFFSET UNITYSDK_OFFSET(0x8C00EA0)
#define EZYSLICE_INTERSECTOR_INTERSECT_OFFSET UNITYSDK_OFFSET(0x8C00C50)
#define EZYSLICE_INTERSECTOR_TRIAREA2D_OFFSET UNITYSDK_OFFSET(0x8C00E70)
#define EZYSLICE_INTERSECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x8C05D20)

namespace EzySlice
{
	inline static constexpr unsigned int Intersector_TypeDefinitionIndex = 43807;

	class Intersector : public ::System::Object
	{
	public:
		// static const ::System::Single Epsilon; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_INTERSECTOR__CTOR_OFFSET))(this);
		}

		static ::System::Boolean Intersect(::EzySlice::Plane pl, ::EzySlice::Line ln, ::UnityEngine::Vector3& q)
		{
			return ((::System::Boolean(*)(::EzySlice::Plane, ::EzySlice::Line, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + EZYSLICE_INTERSECTOR_INTERSECT_OFFSET))(pl, ln, q);
		}

		static ::System::Boolean Intersect_1(::EzySlice::Plane pl, ::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::UnityEngine::Vector3& q)
		{
			return ((::System::Boolean(*)(::EzySlice::Plane, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + EZYSLICE_INTERSECTOR_INTERSECT_1_OFFSET))(pl, a, b, q);
		}

		static ::System::Single TriArea2D(::System::Single x1, ::System::Single y1, ::System::Single x2, ::System::Single y2, ::System::Single x3, ::System::Single y3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EZYSLICE_INTERSECTOR_TRIAREA2D_OFFSET))(x1, y1, x2, y2, x3, y3);
		}

		static ::System::Void Intersect_2(::EzySlice::Plane pl, ::EzySlice::Triangle tri, ::EzySlice::IntersectionResult* result)
		{
			return ((::System::Void(*)(::EzySlice::Plane, ::EzySlice::Triangle, ::EzySlice::IntersectionResult*))((::PBYTE)hIl2Cpp + EZYSLICE_INTERSECTOR_INTERSECT_2_OFFSET))(pl, tri, result);
		}
	};
}
