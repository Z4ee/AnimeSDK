#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyShape2D.h"

#define FLUFFYUNDERWARE_CURVY_SHAPES_CSRECTANGLE_APPLYSHAPE_OFFSET UNITYSDK_OFFSET(0x1B040BB0)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSRECTANGLE_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1B040B80)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSRECTANGLE_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1B040B50)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSRECTANGLE_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1B040B90)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSRECTANGLE_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1B040B60)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSRECTANGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B040CC0)

namespace FluffyUnderware::Curvy::Shapes
{
	inline static constexpr unsigned int CSRectangle_TypeDefinitionIndex = 37243;

	class CSRectangle : public ::FluffyUnderware::Curvy::CurvyShape2D
	{
	public:
		::System::Single m_Width; // 0x40
		::System::Single m_Height; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSRECTANGLE__CTOR_OFFSET))(this);
		}

		::System::Single get_Width()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSRECTANGLE_GET_WIDTH_OFFSET))(this);
		}

		::System::Void set_Width(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSRECTANGLE_SET_WIDTH_OFFSET))(this, value);
		}

		::System::Single get_Height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSRECTANGLE_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_Height(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSRECTANGLE_SET_HEIGHT_OFFSET))(this, value);
		}

		::System::Void ApplyShape()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSRECTANGLE_APPLYSHAPE_OFFSET))(this);
		}
	};
}
