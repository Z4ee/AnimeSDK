#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyShape2D.h"

#define FLUFFYUNDERWARE_CURVY_SHAPES_CSCIRCLE_APPLYSHAPE_OFFSET UNITYSDK_OFFSET(0x1E531860)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSCIRCLE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1E531800)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSCIRCLE_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1E531830)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSCIRCLE_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x1E531810)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSCIRCLE_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1E531840)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSCIRCLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E531B00)

namespace FluffyUnderware::Curvy::Shapes
{
	inline static constexpr unsigned int CSCircle_TypeDefinitionIndex = 38945;

	class CSCircle : public ::FluffyUnderware::Curvy::CurvyShape2D
	{
	public:
		// static const ::System::Int32 MinCount = 0x2; // 0x0
		::System::Int32 m_Count; // 0x40
		::System::Single m_Radius; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSCIRCLE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSCIRCLE_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_Count(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSCIRCLE_SET_COUNT_OFFSET))(this, value);
		}

		::System::Single get_Radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSCIRCLE_GET_RADIUS_OFFSET))(this);
		}

		::System::Void set_Radius(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSCIRCLE_SET_RADIUS_OFFSET))(this, value);
		}

		::System::Void ApplyShape()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSCIRCLE_APPLYSHAPE_OFFSET))(this);
		}
	};
}
