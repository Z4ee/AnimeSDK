#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointDef.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2MouseJointDef_TypeDefinitionIndex = 35168;

	struct alignas(8) B2MouseJointDef
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointDef base; // 0x10
		::System::Single hertz; // 0x80
		::System::Single dampingRatio; // 0x84
		::System::Single maxForce; // 0x88
		::System::Int32 internalValue; // 0x8C
	};
}
