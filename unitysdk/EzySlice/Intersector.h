#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EzySlice/Line.h"
#include "unitysdk/EzySlice/Plane.h"
#include "unitysdk/EzySlice/Triangle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace EzySlice { class IntersectionResult; }

#define EZYSLICE_INTERSECTOR_INTERSECT_1_OFFSET UNITYSDK_OFFSET(0xB173BB0)
#define EZYSLICE_INTERSECTOR_INTERSECT_2_OFFSET UNITYSDK_OFFSET(0xB173CF0)
#define EZYSLICE_INTERSECTOR_INTERSECT_OFFSET UNITYSDK_OFFSET(0xB173AA0)
#define EZYSLICE_INTERSECTOR_TRIAREA2D_OFFSET UNITYSDK_OFFSET(0xB173CC0)
#define EZYSLICE_INTERSECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0xB178B70)

namespace EzySlice
{
	inline static constexpr unsigned int Intersector_TypeDefinitionIndex = 47455;

	class Intersector : public ::System::Object
	{
	public:
		// static const ::System::Single Epsilon; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_INTERSECTOR__CTOR_OFFSET))(this);
		}

		static ::System::Boolean Intersect(::EzySlice::Plane a1, ::EzySlice::Line a2, ::UnityEngine::Vector3& a3)
		{
			return ((::System::Boolean(*)(::EzySlice::Plane, ::EzySlice::Line, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + EZYSLICE_INTERSECTOR_INTERSECT_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Intersect_1(::EzySlice::Plane a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3& a4)
		{
			return ((::System::Boolean(*)(::EzySlice::Plane, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + EZYSLICE_INTERSECTOR_INTERSECT_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single TriArea2D(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EZYSLICE_INTERSECTOR_TRIAREA2D_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void Intersect_2(::EzySlice::Plane a1, ::EzySlice::Triangle a2, ::EzySlice::IntersectionResult* a3)
		{
			return ((::System::Void(*)(::EzySlice::Plane, ::EzySlice::Triangle, ::EzySlice::IntersectionResult*))((::PBYTE)hIl2Cpp + EZYSLICE_INTERSECTOR_INTERSECT_2_OFFSET))(a1, a2, a3);
		}
	};
}
