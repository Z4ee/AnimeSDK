#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define FOUNDATION_GEOMETRY_ELLIPSE2D_GETPARAM_OFFSET UNITYSDK_OFFSET(0xA57010)
#define FOUNDATION_GEOMETRY_ELLIPSE2D_GETPOINTX_OFFSET UNITYSDK_OFFSET(0xA56E00)
#define FOUNDATION_GEOMETRY_ELLIPSE2D_GETPOINTY_OFFSET UNITYSDK_OFFSET(0xA56ED0)
#define FOUNDATION_GEOMETRY_ELLIPSE2D_GETPOINT_1_OFFSET UNITYSDK_OFFSET(0xA56F90)
#define FOUNDATION_GEOMETRY_ELLIPSE2D_GETPOINT_OFFSET UNITYSDK_OFFSET(0xA56D50)
#define FOUNDATION_GEOMETRY_ELLIPSE2D__CTOR_OFFSET UNITYSDK_OFFSET(0xA56C50)

namespace Foundation::Geometry
{
	inline static constexpr unsigned int Ellipse2D_TypeDefinitionIndex = 8473;

	struct alignas(8) Ellipse2D
	{
		::UnityEngine::Vector2 Center; // 0x10
		::System::Double Alpha; // 0x18
		::System::Double SemiMajorAxis; // 0x20
		::System::Double SemiMinorAxis; // 0x28
		::System::Double CosAlpha; // 0x30
		::System::Double SinAlpha; // 0x38

		::System::Void _ctor(::UnityEngine::Vector2 center, ::System::Double alpha, ::System::Double semiMajorAxis, ::System::Double semiMinorAxis)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_ELLIPSE2D__CTOR_OFFSET))(this, center, alpha, semiMajorAxis, semiMinorAxis);
		}

		::UnityEngine::Vector2 GetPoint(::System::Single t)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_ELLIPSE2D_GETPOINT_OFFSET))(this, t);
		}

		/*
		::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal> GetPointX()
		{
			return ((::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal>(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_ELLIPSE2D_GETPOINTX_OFFSET))(this);
		}
		*/

		/*
		::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal> GetPointY()
		{
			return ((::Foundation::Function::WithConstant_1<::Foundation::Function::Sinusoidal>(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_ELLIPSE2D_GETPOINTY_OFFSET))(this);
		}
		*/

		::UnityEngine::Vector2 GetPoint_1(::System::Double sinTheta, ::System::Double cosTheta)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_ELLIPSE2D_GETPOINT_1_OFFSET))(this, sinTheta, cosTheta);
		}

		::System::Single GetParam(::UnityEngine::Vector2 point)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_ELLIPSE2D_GETPARAM_OFFSET))(this, point);
		}
	};
}
