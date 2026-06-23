#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/IntersectionTypes.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define DEST_MATH_TRIANGLE2TRIANGLE2INTR_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA76EC0)
#define DEST_MATH_TRIANGLE2TRIANGLE2INTR_SET_ITEM_OFFSET UNITYSDK_OFFSET(0xA76F30)

namespace Dest::Math
{
	inline static constexpr unsigned int Triangle2Triangle2Intr_TypeDefinitionIndex = 34702;

	struct alignas(4) Triangle2Triangle2Intr
	{
		::Dest::Math::IntersectionTypes IntersectionType; // 0x10
		::System::Int32 Quantity; // 0x14
		::UnityEngine::Vector2 Point0; // 0x18
		::UnityEngine::Vector2 Point1; // 0x20
		::UnityEngine::Vector2 Point2; // 0x28
		::UnityEngine::Vector2 Point3; // 0x30
		::UnityEngine::Vector2 Point4; // 0x38
		::UnityEngine::Vector2 Point5; // 0x40

		::UnityEngine::Vector2 get_Item(::System::Int32 i)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE2TRIANGLE2INTR_GET_ITEM_OFFSET))(this, i);
		}

		::System::Void set_Item(::System::Int32 i, ::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_TRIANGLE2TRIANGLE2INTR_SET_ITEM_OFFSET))(this, i, value);
		}
	};
}
