#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Geometry/Ellipse2D.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define FOUNDATION_GEOMETRY_ELLIPSEARC2D_GET_AREA_OFFSET UNITYSDK_OFFSET(0xACBC80)
#define FOUNDATION_GEOMETRY_ELLIPSEARC2D_GET_ENDTHETA_OFFSET UNITYSDK_OFFSET(0xACBC70)
#define FOUNDATION_GEOMETRY_ELLIPSEARC2D__CTOR_1_OFFSET UNITYSDK_OFFSET(0xACB960)
#define FOUNDATION_GEOMETRY_ELLIPSEARC2D__CTOR_2_OFFSET UNITYSDK_OFFSET(0xACBA30)
#define FOUNDATION_GEOMETRY_ELLIPSEARC2D__CTOR_3_OFFSET UNITYSDK_OFFSET(0xACBA70)
#define FOUNDATION_GEOMETRY_ELLIPSEARC2D__CTOR_OFFSET UNITYSDK_OFFSET(0xACB8D0)

namespace Foundation::Geometry
{
	inline static constexpr unsigned int EllipseArc2D_TypeDefinitionIndex = 8769;

	struct alignas(8) EllipseArc2D
	{
		::Foundation::Geometry::Ellipse2D Ellipse; // 0x10
		::System::Single StartTheta; // 0x40
		::System::Single ThetaLength; // 0x44
		::UnityEngine::Vector2 Start; // 0x48
		::UnityEngine::Vector2 End; // 0x50

		::System::Void _ctor(::Foundation::Geometry::Ellipse2D ellipse)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Geometry::Ellipse2D))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_ELLIPSEARC2D__CTOR_OFFSET))(this, ellipse);
		}

		::System::Void _ctor_1(::Foundation::Geometry::Ellipse2D ellipse, ::UnityEngine::Vector2 start)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Geometry::Ellipse2D, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_ELLIPSEARC2D__CTOR_1_OFFSET))(this, ellipse, start);
		}

		::System::Void _ctor_2(::Foundation::Geometry::Ellipse2D ellipse, ::System::Single startTheta, ::System::Single endTheta)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Geometry::Ellipse2D, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_ELLIPSEARC2D__CTOR_2_OFFSET))(this, ellipse, startTheta, endTheta);
		}

		::System::Void _ctor_3(::Foundation::Geometry::Ellipse2D ellipse, ::UnityEngine::Vector2 start, ::UnityEngine::Vector2 end)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Geometry::Ellipse2D, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_ELLIPSEARC2D__CTOR_3_OFFSET))(this, ellipse, start, end);
		}

		::System::Single get_EndTheta()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_ELLIPSEARC2D_GET_ENDTHETA_OFFSET))(this);
		}

		::System::Single get_Area()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_ELLIPSEARC2D_GET_AREA_OFFSET))(this);
		}
	};
}
