#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyShape2D.h"

namespace UnityEngine { class AnimationCurve; }

#define FLUFFYUNDERWARE_CURVY_SHAPES_CSSPIRAL_APPLYSHAPE_OFFSET UNITYSDK_OFFSET(0x1EE68D30)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSSPIRAL_GET_CIRCLES_OFFSET UNITYSDK_OFFSET(0x1EE68C90)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSSPIRAL_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1EE68C60)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSSPIRAL_GET_RADIUSFACTOR_OFFSET UNITYSDK_OFFSET(0x1EE68CF0)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSSPIRAL_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1EE68CC0)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSSPIRAL_GET_Z_OFFSET UNITYSDK_OFFSET(0x1EE68D10)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSSPIRAL_SET_CIRCLES_OFFSET UNITYSDK_OFFSET(0x1EE68CA0)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSSPIRAL_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x1EE68C70)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSSPIRAL_SET_RADIUSFACTOR_OFFSET UNITYSDK_OFFSET(0x1EE68D00)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSSPIRAL_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1EE68CD0)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSSPIRAL_SET_Z_OFFSET UNITYSDK_OFFSET(0x1EE68D20)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSSPIRAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE68FB0)

namespace FluffyUnderware::Curvy::Shapes
{
	inline static constexpr unsigned int CSSpiral_TypeDefinitionIndex = 39555;

	class CSSpiral : public ::FluffyUnderware::Curvy::CurvyShape2D
	{
	public:
		::System::Int32 m_Count; // 0x40
		::System::Single m_Circles; // 0x44
		::System::Single m_Radius; // 0x48
		::UnityEngine::AnimationCurve* m_RadiusFactor; // 0x50
		::UnityEngine::AnimationCurve* m_Z; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSSPIRAL__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSSPIRAL_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_Count(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSSPIRAL_SET_COUNT_OFFSET))(this, value);
		}

		::System::Single get_Circles()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSSPIRAL_GET_CIRCLES_OFFSET))(this);
		}

		::System::Void set_Circles(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSSPIRAL_SET_CIRCLES_OFFSET))(this, value);
		}

		::System::Single get_Radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSSPIRAL_GET_RADIUS_OFFSET))(this);
		}

		::System::Void set_Radius(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSSPIRAL_SET_RADIUS_OFFSET))(this, value);
		}

		::UnityEngine::AnimationCurve* get_RadiusFactor()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSSPIRAL_GET_RADIUSFACTOR_OFFSET))(this);
		}

		::System::Void set_RadiusFactor(::UnityEngine::AnimationCurve* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSSPIRAL_SET_RADIUSFACTOR_OFFSET))(this, value);
		}

		::UnityEngine::AnimationCurve* get_Z()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSSPIRAL_GET_Z_OFFSET))(this);
		}

		::System::Void set_Z(::UnityEngine::AnimationCurve* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSSPIRAL_SET_Z_OFFSET))(this, value);
		}

		::System::Void ApplyShape()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSSPIRAL_APPLYSHAPE_OFFSET))(this);
		}
	};
}
