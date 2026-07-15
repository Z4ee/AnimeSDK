#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2GraphColor.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2ConstraintGraph_TypeDefinitionIndex = 35067;

	struct alignas(8) B2ConstraintGraph
	{
		::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2GraphColor>* colors; // 0x10
	};
}
