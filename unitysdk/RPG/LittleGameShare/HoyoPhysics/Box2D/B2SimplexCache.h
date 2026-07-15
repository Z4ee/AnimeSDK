#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2FixedArray3_1.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2SimplexCache_TypeDefinitionIndex = 35225;

	struct alignas(2) B2SimplexCache
	{
		::System::UInt16 count; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FixedArray3_1<::System::Byte> indexA; // 0x12
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FixedArray3_1<::System::Byte> indexB; // 0x15
	};
}
