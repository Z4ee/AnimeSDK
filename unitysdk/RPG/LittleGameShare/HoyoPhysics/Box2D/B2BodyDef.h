#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2BodyType.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2MotionLocks.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Rot.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2BodyDef_TypeDefinitionIndex = 35044;

	struct alignas(8) B2BodyDef
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyType type; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 position; // 0x14
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Rot rotation; // 0x1C
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 linearVelocity; // 0x24
		::System::Single angularVelocity; // 0x2C
		::System::Single linearDamping; // 0x30
		::System::Single angularDamping; // 0x34
		::System::Single gravityScale; // 0x38
		::System::Single sleepThreshold; // 0x3C
		::System::String* name; // 0x40
		::System::Object* userData; // 0x48
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2MotionLocks motionLocks; // 0x50
		::System::Boolean enableSleep; // 0x53
		::System::Boolean isAwake; // 0x54
		::System::Boolean isBullet; // 0x55
		::System::Boolean isEnabled; // 0x56
		::System::Boolean allowFastRotation; // 0x57
		::System::Single mass; // 0x58
		::System::Single inertia; // 0x5C
		::System::Int32 internalValue; // 0x60
	};
}
