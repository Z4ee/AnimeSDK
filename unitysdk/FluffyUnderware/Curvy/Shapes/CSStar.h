#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyShape2D.h"

#define FLUFFYUNDERWARE_CURVY_SHAPES_CSSTAR_APPLYSHAPE_OFFSET UNITYSDK_OFFSET(0x1BE93670)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSSTAR_GET_INNERRADIUS_OFFSET UNITYSDK_OFFSET(0x1BE935D0)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSSTAR_GET_INNERROUNDNESS_OFFSET UNITYSDK_OFFSET(0x1BE93600)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSSTAR_GET_OUTERRADIUS_OFFSET UNITYSDK_OFFSET(0x1BE93560)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSSTAR_GET_OUTERROUNDNESS_OFFSET UNITYSDK_OFFSET(0x1BE93590)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSSTAR_GET_SIDES_OFFSET UNITYSDK_OFFSET(0x1BE93530)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSSTAR_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1BE93640)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSSTAR_SET_INNERRADIUS_OFFSET UNITYSDK_OFFSET(0x1BE935E0)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSSTAR_SET_INNERROUNDNESS_OFFSET UNITYSDK_OFFSET(0x1BE93610)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSSTAR_SET_OUTERRADIUS_OFFSET UNITYSDK_OFFSET(0x1BE93570)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSSTAR_SET_OUTERROUNDNESS_OFFSET UNITYSDK_OFFSET(0x1BE935A0)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSSTAR_SET_SIDES_OFFSET UNITYSDK_OFFSET(0x1BE93540)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSSTAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE93C50)

namespace FluffyUnderware::Curvy::Shapes
{
	inline static constexpr unsigned int CSStar_TypeDefinitionIndex = 37246;

	class CSStar : public ::FluffyUnderware::Curvy::CurvyShape2D
	{
	public:
		// static const ::System::Int32 MinSides = 0x2; // 0x0
		::System::Int32 m_Sides; // 0x40
		::System::Single m_OuterRadius; // 0x44
		::System::Single m_OuterRoundness; // 0x48
		::System::Single m_InnerRadius; // 0x4C
		::System::Single m_InnerRoundness; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSSTAR__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Sides()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSSTAR_GET_SIDES_OFFSET))(this);
		}

		::System::Void set_Sides(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSSTAR_SET_SIDES_OFFSET))(this, value);
		}

		::System::Single get_OuterRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSSTAR_GET_OUTERRADIUS_OFFSET))(this);
		}

		::System::Void set_OuterRadius(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSSTAR_SET_OUTERRADIUS_OFFSET))(this, value);
		}

		::System::Single get_OuterRoundness()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSSTAR_GET_OUTERROUNDNESS_OFFSET))(this);
		}

		::System::Void set_OuterRoundness(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSSTAR_SET_OUTERROUNDNESS_OFFSET))(this, value);
		}

		::System::Single get_InnerRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSSTAR_GET_INNERRADIUS_OFFSET))(this);
		}

		::System::Void set_InnerRadius(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSSTAR_SET_INNERRADIUS_OFFSET))(this, value);
		}

		::System::Single get_InnerRoundness()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSSTAR_GET_INNERROUNDNESS_OFFSET))(this);
		}

		::System::Void set_InnerRoundness(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSSTAR_SET_INNERROUNDNESS_OFFSET))(this, value);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSSTAR_ONVALIDATE_OFFSET))(this);
		}

		::System::Void ApplyShape()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSSTAR_APPLYSHAPE_OFFSET))(this);
		}
	};
}
