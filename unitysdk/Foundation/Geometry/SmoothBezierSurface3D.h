#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Geometry/SmoothBezierSurface_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Foundation::Geometry { template <typename T> class IBezierControlPointPolicy_1; }

#define FOUNDATION_GEOMETRY_SMOOTHBEZIERSURFACE3D_GET_POLICY_OFFSET UNITYSDK_OFFSET(0x1BFFA2F0)
#define FOUNDATION_GEOMETRY_SMOOTHBEZIERSURFACE3D__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFFA350)

namespace Foundation::Geometry
{
	inline static constexpr unsigned int SmoothBezierSurface3D_TypeDefinitionIndex = 9036;

	class SmoothBezierSurface3D : public ::Foundation::Geometry::SmoothBezierSurface_1<::UnityEngine::Vector3>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_SMOOTHBEZIERSURFACE3D__CTOR_OFFSET))(this);
		}

		::Foundation::Geometry::IBezierControlPointPolicy_1<::UnityEngine::Vector3>* get_Policy()
		{
			return ((::Foundation::Geometry::IBezierControlPointPolicy_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_SMOOTHBEZIERSURFACE3D_GET_POLICY_OFFSET))(this);
		}
	};
}
