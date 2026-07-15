#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2FloatW.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2RotW_TypeDefinitionIndex = 35194;

	struct alignas(4) B2RotW
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW C; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW S; // 0x20
	};
}
