#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyShape2D.h"

#define FLUFFYUNDERWARE_CURVY_SHAPES_CSROUNDEDRECTANGLE_APPLYSHAPE_OFFSET UNITYSDK_OFFSET(0x1EFB7790)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSROUNDEDRECTANGLE_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1EFB7720)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSROUNDEDRECTANGLE_GET_ROUNDNESS_OFFSET UNITYSDK_OFFSET(0x1EFB7750)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSROUNDEDRECTANGLE_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1EFB76F0)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSROUNDEDRECTANGLE_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1EFB7730)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSROUNDEDRECTANGLE_SET_ROUNDNESS_OFFSET UNITYSDK_OFFSET(0x1EFB7760)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSROUNDEDRECTANGLE_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1EFB7700)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSROUNDEDRECTANGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFB7F70)

namespace FluffyUnderware::Curvy::Shapes
{
	inline static constexpr unsigned int CSRoundedRectangle_TypeDefinitionIndex = 39548;

	class CSRoundedRectangle : public ::FluffyUnderware::Curvy::CurvyShape2D
	{
	public:
		::System::Single m_Width; // 0x40
		::System::Single m_Height; // 0x44
		::System::Single m_Roundness; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSROUNDEDRECTANGLE__CTOR_OFFSET))(this);
		}

		::System::Single get_Width()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSROUNDEDRECTANGLE_GET_WIDTH_OFFSET))(this);
		}

		::System::Void set_Width(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSROUNDEDRECTANGLE_SET_WIDTH_OFFSET))(this, value);
		}

		::System::Single get_Height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSROUNDEDRECTANGLE_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_Height(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSROUNDEDRECTANGLE_SET_HEIGHT_OFFSET))(this, value);
		}

		::System::Single get_Roundness()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSROUNDEDRECTANGLE_GET_ROUNDNESS_OFFSET))(this);
		}

		::System::Void set_Roundness(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSROUNDEDRECTANGLE_SET_ROUNDNESS_OFFSET))(this, value);
		}

		::System::Void ApplyShape()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSROUNDEDRECTANGLE_APPLYSHAPE_OFFSET))(this);
		}
	};
}
