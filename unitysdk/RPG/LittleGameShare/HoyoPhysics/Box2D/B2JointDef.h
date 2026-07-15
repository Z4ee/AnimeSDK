#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2BodyId.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Transform.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2JointDef_TypeDefinitionIndex = 35146;

	struct alignas(8) B2JointDef
	{
		::System::Object* userData; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId bodyIdA; // 0x18
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId bodyIdB; // 0x30
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform localFrameA; // 0x48
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform localFrameB; // 0x58
		::System::Single forceThreshold; // 0x68
		::System::Single torqueThreshold; // 0x6C
		::System::Single constraintHertz; // 0x70
		::System::Single constraintDampingRatio; // 0x74
		::System::Single drawScale; // 0x78
		::System::Boolean collideConnected; // 0x7C
	};
}
