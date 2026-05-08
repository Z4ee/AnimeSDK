#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FOUNDATION_GEOMETRY_VECTOR3BEZIERCONTROLPOINTPOLICY_LERP_OFFSET UNITYSDK_OFFSET(0x1BFFA360)
#define FOUNDATION_GEOMETRY_VECTOR3BEZIERCONTROLPOINTPOLICY_PLUS_OFFSET UNITYSDK_OFFSET(0x1BFFA3F0)
#define FOUNDATION_GEOMETRY_VECTOR3BEZIERCONTROLPOINTPOLICY_SCALE_OFFSET UNITYSDK_OFFSET(0x1BFFA3C0)
#define FOUNDATION_GEOMETRY_VECTOR3BEZIERCONTROLPOINTPOLICY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BFFA430)
#define FOUNDATION_GEOMETRY_VECTOR3BEZIERCONTROLPOINTPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFFA420)

namespace Foundation::Geometry
{
	inline static constexpr unsigned int Vector3BezierControlPointPolicy_TypeDefinitionIndex = 9159;

	class Vector3BezierControlPointPolicy : public ::System::Object
	{
	public:
		static ::Foundation::Geometry::Vector3BezierControlPointPolicy** StaticGet_Instance()
		{
			return (::Foundation::Geometry::Vector3BezierControlPointPolicy**)Il2CppClass::FromTypeDefinitionIndex(Vector3BezierControlPointPolicy_TypeDefinitionIndex)->GetStaticField(0x7F20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_VECTOR3BEZIERCONTROLPOINTPOLICY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_VECTOR3BEZIERCONTROLPOINTPOLICY__CCTOR_OFFSET))();
		}

		::UnityEngine::Vector3 Lerp(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::System::Single alpha)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_VECTOR3BEZIERCONTROLPOINTPOLICY_LERP_OFFSET))(this, a, b, alpha);
		}

		::UnityEngine::Vector3 Scale(::UnityEngine::Vector3 a, ::System::Double b)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_VECTOR3BEZIERCONTROLPOINTPOLICY_SCALE_OFFSET))(this, a, b);
		}

		::UnityEngine::Vector3 Plus(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_VECTOR3BEZIERCONTROLPOINTPOLICY_PLUS_OFFSET))(this, a, b);
		}
	};
}
