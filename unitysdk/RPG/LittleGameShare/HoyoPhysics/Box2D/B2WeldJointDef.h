#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointDef.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2WeldJointDef_TypeDefinitionIndex = 35260;

	struct alignas(8) B2WeldJointDef
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointDef base; // 0x10
		::System::Single linearHertz; // 0x80
		::System::Single angularHertz; // 0x84
		::System::Single linearDampingRatio; // 0x88
		::System::Single angularDampingRatio; // 0x8C
		::System::Int32 internalValue; // 0x90
	};
}
