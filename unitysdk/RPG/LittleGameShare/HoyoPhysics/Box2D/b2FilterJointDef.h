#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointDef.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int b2FilterJointDef_TypeDefinitionIndex = 35276;

	struct alignas(8) b2FilterJointDef
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointDef base; // 0x10
		::System::Int32 internalValue; // 0x80
	};
}
