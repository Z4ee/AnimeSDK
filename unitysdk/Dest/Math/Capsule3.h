#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/Segment3.h"
#include "unitysdk/System/ValueType.h"

#define DEST_MATH_CAPSULE3__CTOR_1_OFFSET UNITYSDK_OFFSET(0xAC8F60)
#define DEST_MATH_CAPSULE3__CTOR_OFFSET UNITYSDK_OFFSET(0xAC8F60)

namespace Dest::Math
{
	inline static constexpr unsigned int Capsule3_TypeDefinitionIndex = 35433;

	struct alignas(4) Capsule3
	{
		::Dest::Math::Segment3 Segment; // 0x10
		::System::Single Radius; // 0x44

		::System::Void _ctor(::Dest::Math::Segment3& segment, ::System::Single radius)
		{
			return ((::System::Void(*)(::PVOID, ::Dest::Math::Segment3&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_CAPSULE3__CTOR_OFFSET))(this, segment, radius);
		}

		::System::Void _ctor_1(::Dest::Math::Segment3 segment, ::System::Single radius)
		{
			return ((::System::Void(*)(::PVOID, ::Dest::Math::Segment3, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_CAPSULE3__CTOR_1_OFFSET))(this, segment, radius);
		}
	};
}
