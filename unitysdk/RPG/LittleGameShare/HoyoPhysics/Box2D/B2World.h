#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Array_1.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2BodyMoveEvent.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ConstraintGraph.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ContactBeginTouchEvent.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ContactEndTouchEvent.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ContactHitEvent.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointEvent.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Profile.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2SensorBeginTouchEvent.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2SensorEndTouchEvent.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/Object.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2ArenaAllocator; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2Body; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2BroadPhase; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2ChainShape; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2Contact; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2IdPool; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2Island; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2Joint; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2Sensor; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2SensorTaskContext; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2Shape; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2SolverSet; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2TaskContext; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2WorkerContext; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2CustomFilterFcn; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2EnqueueTaskCallback; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2FinishTaskCallback; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2FrictionCallback; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2PreSolveFcn; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2RestitutionCallback; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLD_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C78D1D0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C78D440)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2World_TypeDefinitionIndex = 36127;

	class B2World : public ::System::Object
	{
	public:
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactBeginTouchEvent> contactBeginEvents; // 0x10
		::System::Object* userTaskContext; // 0x20
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Body*> bodies; // 0x28
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BroadPhase* broadPhase; // 0x38
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainShape*> chainShapes; // 0x40
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SensorTaskContext*> sensorTaskContexts; // 0x50
		::System::Object* preSolveContext; // 0x60
		::RPG::LittleGameShare::HoyoPhysics::Box2D::b2FinishTaskCallback* finishTaskFcn; // 0x68
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactHitEvent> contactHitEvents; // 0x70
		::System::Object* userData; // 0x80
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2IdPool* contactIdPool; // 0x88
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2IdPool* shapeIdPool; // 0x90
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2IdPool* jointIdPool; // 0x98
		::RPG::LittleGameShare::HoyoPhysics::Box2D::b2EnqueueTaskCallback* enqueueTaskFcn; // 0xA0
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Island*> islands; // 0xA8
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointEvent> jointEvents; // 0xB8
		::System::Object* customFilterContext; // 0xC8
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ArenaAllocator* arena; // 0xD0
		::RPG::LittleGameShare::HoyoPhysics::Box2D::b2PreSolveFcn* preSolveFcn; // 0xD8
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SolverSet*> solverSets; // 0xE0
		::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactEndTouchEvent>>* contactEndEvents; // 0xF0
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SensorBeginTouchEvent> sensorBeginEvents; // 0xF8
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2IdPool* chainIdPool; // 0x108
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ConstraintGraph constraintGraph; // 0x110
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2IdPool* bodyIdPool; // 0x118
		::RPG::LittleGameShare::HoyoPhysics::Box2D::b2FrictionCallback* frictionCallback; // 0x120
		::RPG::LittleGameShare::HoyoPhysics::Box2D::b2CustomFilterFcn* customFilterFcn; // 0x128
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2IdPool* islandIdPool; // 0x130
		::System::Object* userTreeTask; // 0x138
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Joint*> joints; // 0x140
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyMoveEvent> bodyMoveEvents; // 0x150
		::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SensorEndTouchEvent>>* sensorEndEvents; // 0x160
		::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorkerContext*>* tempWorkerContext; // 0x168
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Shape*> shapes; // 0x170
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2IdPool* solverSetIdPool; // 0x180
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2TaskContext*> taskContexts; // 0x188
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Contact*> contacts; // 0x198
		::RPG::LittleGameShare::HoyoPhysics::Box2D::b2RestitutionCallback* restitutionCallback; // 0x1A8
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Sensor*> sensors; // 0x1B0
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Profile profile; // 0x1C0
		::System::Single restitutionThreshold; // 0x220
		::System::Int32 endEventArrayIndex; // 0x224
		::System::Int32 activeTaskCount; // 0x228
		::System::Int32 taskCount; // 0x22C
		::System::Single hitEventThreshold; // 0x230
		::System::UInt64 stepIndex; // 0x238
		::System::Boolean enableWarmStarting; // 0x240
		::System::Boolean enableContinuous; // 0x241
		::System::Boolean locked; // 0x242
		::System::Single contactSpeed; // 0x244
		::System::UInt16 worldId; // 0x248
		::System::Boolean enableSleep; // 0x24A
		::System::Boolean enableSpeculative; // 0x24B
		::System::Single maxLinearSpeed; // 0x24C
		::System::Int32 splitIslandId; // 0x250
		::System::Single contactDampingRatio; // 0x254
		::System::Int32 workerCount; // 0x258
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 gravity; // 0x25C
		::System::Single inv_h; // 0x264
		::System::Single contactHertz; // 0x268

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLD__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2WORLD_CLEAR_OFFSET))(this);
		}
	};
}
