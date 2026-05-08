#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Shapes/CSCircle.h"
#include "unitysdk/FluffyUnderware/Curvy/Shapes/CSPie_EatModeEnum.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FLUFFYUNDERWARE_CURVY_SHAPES_CSPIE_APPLYSHAPE_OFFSET UNITYSDK_OFFSET(0x1B737980)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSPIE_CPPOSITION_OFFSET UNITYSDK_OFFSET(0x1B7378C0)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSPIE_GET_EAT_OFFSET UNITYSDK_OFFSET(0x1B7378A0)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSPIE_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x1B737860)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSPIE_GET_MAXEMPTY_OFFSET UNITYSDK_OFFSET(0x1B737890)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSPIE_GET_ROUNDNESS_OFFSET UNITYSDK_OFFSET(0x1B737820)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSPIE_SET_EAT_OFFSET UNITYSDK_OFFSET(0x1B7378B0)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSPIE_SET_EMPTY_OFFSET UNITYSDK_OFFSET(0x1B737870)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSPIE_SET_ROUNDNESS_OFFSET UNITYSDK_OFFSET(0x1B737830)
#define FLUFFYUNDERWARE_CURVY_SHAPES_CSPIE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B739500)

namespace FluffyUnderware::Curvy::Shapes
{
	inline static constexpr unsigned int CSPie_TypeDefinitionIndex = 37241;

	class CSPie : public ::FluffyUnderware::Curvy::Shapes::CSCircle
	{
	public:
		::System::Single m_Roundness; // 0x48
		::System::Int32 m_Empty; // 0x4C
		::FluffyUnderware::Curvy::Shapes::CSPie_EatModeEnum m_Eat; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSPIE__CTOR_OFFSET))(this);
		}

		::System::Single get_Roundness()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSPIE_GET_ROUNDNESS_OFFSET))(this);
		}

		::System::Void set_Roundness(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSPIE_SET_ROUNDNESS_OFFSET))(this, value);
		}

		::System::Int32 get_Empty()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSPIE_GET_EMPTY_OFFSET))(this);
		}

		::System::Void set_Empty(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSPIE_SET_EMPTY_OFFSET))(this, value);
		}

		::System::Int32 get_maxEmpty()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSPIE_GET_MAXEMPTY_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::Shapes::CSPie_EatModeEnum get_Eat()
		{
			return ((::FluffyUnderware::Curvy::Shapes::CSPie_EatModeEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSPIE_GET_EAT_OFFSET))(this);
		}

		::System::Void set_Eat(::FluffyUnderware::Curvy::Shapes::CSPie_EatModeEnum value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Shapes::CSPie_EatModeEnum))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSPIE_SET_EAT_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 cpPosition(::System::Int32 i, ::System::Int32 empty, ::System::Single d)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSPIE_CPPOSITION_OFFSET))(this, i, empty, d);
		}

		::System::Void ApplyShape()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_SHAPES_CSPIE_APPLYSHAPE_OFFSET))(this);
		}
	};
}
