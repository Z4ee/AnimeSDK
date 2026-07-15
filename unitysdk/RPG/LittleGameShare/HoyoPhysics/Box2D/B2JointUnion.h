#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2DistanceJoint.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2MotorJoint.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2MouseJoint.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2PrismaticJoint.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2RevoluteJoint.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2WeldJoint.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2WheelJoint.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2JointUnion_TypeDefinitionIndex = 35154;

	struct alignas(4) B2JointUnion
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DistanceJoint distanceJoint; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2MotorJoint motorJoint; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2MouseJoint mouseJoint; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2RevoluteJoint revoluteJoint; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2PrismaticJoint prismaticJoint; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WeldJoint weldJoint; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WheelJoint wheelJoint; // 0x10
	};
}
