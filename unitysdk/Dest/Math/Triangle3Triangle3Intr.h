#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/IntersectionTypes.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define DEST_MATH_TRIANGLE3TRIANGLE3INTR_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA93E10)
#define DEST_MATH_TRIANGLE3TRIANGLE3INTR_SET_ITEM_OFFSET UNITYSDK_OFFSET(0xA93E80)

namespace Dest::Math
{
	inline static constexpr unsigned int Triangle3Triangle3Intr_TypeDefinitionIndex = 35392;

	struct alignas(4) Triangle3Triangle3Intr
	{
		::Dest::Math::IntersectionTypes IntersectionType; // 0x10
		::Dest::Math::IntersectionTypes CoplanarIntersectionType; // 0x14
		::System::Boolean Touching; // 0x18
		::System::Int32 Quantity; // 0x1C
		::UnityEngine::Vector3 Point0; // 0x20
		::UnityEngine::Vector3 Point1; // 0x2C
		::UnityEngine::Vector3 Point2; // 0x38
		::UnityEngine::Vector3 Point3; // 0x44
		::UnityEngine::Vector3 Point4; // 0x50
		::UnityEngine::Vector3 Point5; // 0x5C

		::UnityEngine::Vector3 get_Item(::System::Int32 i)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE3TRIANGLE3INTR_GET_ITEM_OFFSET))(this, i);
		}

		::System::Void set_Item(::System::Int32 i, ::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE3TRIANGLE3INTR_SET_ITEM_OFFSET))(this, i, value);
		}
	};
}
