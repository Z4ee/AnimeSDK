#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2EnqueueTaskCallback; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2FinishTaskCallback; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2FrictionCallback; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2RestitutionCallback; }
namespace System { class Object; }

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2WorldDef_TypeDefinitionIndex = 35267;

	struct alignas(8) B2WorldDef
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 gravity; // 0x10
		::System::Single restitutionThreshold; // 0x18
		::System::Single hitEventThreshold; // 0x1C
		::System::Single contactHertz; // 0x20
		::System::Single contactDampingRatio; // 0x24
		::System::Single contactSpeed; // 0x28
		::System::Single maximumLinearSpeed; // 0x2C
		::RPG::LittleGameShare::HoyoPhysics::Box2D::b2FrictionCallback* frictionCallback; // 0x30
		::RPG::LittleGameShare::HoyoPhysics::Box2D::b2RestitutionCallback* restitutionCallback; // 0x38
		::System::Boolean enableSleep; // 0x40
		::System::Boolean enableContinuous; // 0x41
		::System::Int32 workerCount; // 0x44
		::RPG::LittleGameShare::HoyoPhysics::Box2D::b2EnqueueTaskCallback* enqueueTask; // 0x48
		::RPG::LittleGameShare::HoyoPhysics::Box2D::b2FinishTaskCallback* finishTask; // 0x50
		::System::Object* userTaskContext; // 0x58
		::System::Object* userData; // 0x60
		::System::Int32 internalValue; // 0x68
	};
}
