#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Geometry/SmoothBezierSurface_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Foundation::Geometry { template <typename T> class IBezierControlPointPolicy_1; }

#define FOUNDATION_GEOMETRY_SMOOTHBEZIERSURFACEDIRECTION3D_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1DDA35A0)
#define FOUNDATION_GEOMETRY_SMOOTHBEZIERSURFACEDIRECTION3D_GET_POLICY_OFFSET UNITYSDK_OFFSET(0x1DDA3540)
#define FOUNDATION_GEOMETRY_SMOOTHBEZIERSURFACEDIRECTION3D__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDA37E0)

namespace Foundation::Geometry
{
	inline static constexpr unsigned int SmoothBezierSurfaceDirection3D_TypeDefinitionIndex = 8736;

	class SmoothBezierSurfaceDirection3D : public ::Foundation::Geometry::SmoothBezierSurface_1<::UnityEngine::Vector3>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_SMOOTHBEZIERSURFACEDIRECTION3D__CTOR_OFFSET))(this);
		}

		::Foundation::Geometry::IBezierControlPointPolicy_1<::UnityEngine::Vector3>* get_Policy()
		{
			return ((::Foundation::Geometry::IBezierControlPointPolicy_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_SMOOTHBEZIERSURFACEDIRECTION3D_GET_POLICY_OFFSET))(this);
		}

		::UnityEngine::Vector3 Evaluate(::System::Single u, ::System::Single v, ::System::Single& sampleU, ::System::Single& sampleV)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_SMOOTHBEZIERSURFACEDIRECTION3D_EVALUATE_OFFSET))(this, u, v, sampleU, sampleV);
		}
	};
}
