#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ARA_ARATRAIL_POINT_CATMULLROM_OFFSET UNITYSDK_OFFSET(0x1F63EC40)
#define ARA_ARATRAIL_POINT_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1F642350)
#define ARA_ARATRAIL_POINT_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1F6423C0)
#define ARA_ARATRAIL_POINT__CTOR_OFFSET UNITYSDK_OFFSET(0xAAA5A0)

namespace Ara
{
	inline static constexpr unsigned int AraTrail_Point_TypeDefinitionIndex = 33563;

	struct alignas(4) AraTrail_Point
	{
		::UnityEngine::Vector3 position; // 0x10
		::UnityEngine::Vector3 velocity; // 0x1C
		::UnityEngine::Vector3 tangent; // 0x28
		::UnityEngine::Vector3 normal; // 0x34
		::UnityEngine::Color color; // 0x40
		::System::Single thickness; // 0x50
		::System::Single life; // 0x54
		::System::Single texcoord; // 0x58
		::System::Boolean discontinuous; // 0x5C

		::System::Void _ctor(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 velocity, ::UnityEngine::Vector3 tangent, ::UnityEngine::Vector3 normal, ::UnityEngine::Color color, ::System::Single thickness, ::System::Single texcoord, ::System::Single lifetime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ARA_ARATRAIL_POINT__CTOR_OFFSET))(this, position, velocity, tangent, normal, color, thickness, texcoord, lifetime);
		}

		static ::System::Single CatmullRom(::System::Single p0, ::System::Single p1, ::System::Single p2, ::System::Single p3, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ARA_ARATRAIL_POINT_CATMULLROM_OFFSET))(p0, p1, p2, p3, t);
		}

		static ::Ara::AraTrail_Point op_Addition(::Ara::AraTrail_Point p1, ::Ara::AraTrail_Point p2)
		{
			return ((::Ara::AraTrail_Point(*)(::Ara::AraTrail_Point, ::Ara::AraTrail_Point))((::PBYTE)hIl2Cpp + ARA_ARATRAIL_POINT_OP_ADDITION_OFFSET))(p1, p2);
		}

		static ::Ara::AraTrail_Point op_Subtraction(::Ara::AraTrail_Point p1, ::Ara::AraTrail_Point p2)
		{
			return ((::Ara::AraTrail_Point(*)(::Ara::AraTrail_Point, ::Ara::AraTrail_Point))((::PBYTE)hIl2Cpp + ARA_ARATRAIL_POINT_OP_SUBTRACTION_OFFSET))(p1, p2);
		}
	};
}
