#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ArraySegment_1.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2AtomicInt.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2AtomicU32.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ConstraintGraph.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ContactConstraintSIMD.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2FixedArray64_1.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Softness.h"
#include "unitysdk/System/Object.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2BodySim; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2BodyState; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2ContactSim; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2JointSim; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2SolverStage; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2World; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2STEPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C314F70)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2StepContext_TypeDefinitionIndex = 36097;

	class B2StepContext : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodySim*>* sims; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ArraySegment_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactSim*> contacts; // 0x18
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ArraySegment_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactConstraintSIMD> simdContactConstraints; // 0x28
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ArraySegment_1<::System::Int32> bulletBodies; // 0x38
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ConstraintGraph graph; // 0x48
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ArraySegment_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SolverStage*> stages; // 0x50
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ArraySegment_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*> joints; // 0x60
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* world; // 0x70
		::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyState*>* states; // 0x78
		::Il2CppArray<::System::Int32>* enlargedShapes; // 0x80
		::System::Int32 subStepCount; // 0x88
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Softness contactSoftness; // 0x8C
		::System::Single maxLinearVelocity; // 0x98
		::System::Single inv_dt; // 0x9C
		::System::Int32 enlargedShapeCount; // 0xA0
		::System::Single h; // 0xA4
		::System::Single dt; // 0xA8
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FixedArray64_1<::System::Byte> dummy2; // 0xAC
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FixedArray64_1<::System::Byte> dummy1; // 0xEC
		::System::Boolean enableWarmStarting; // 0x12C
		::System::Int32 activeColorCount; // 0x130
		::System::Single restitutionThreshold; // 0x134
		::System::Int32 stageCount; // 0x138
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AtomicU32 atomicSyncBits; // 0x140
		::System::Int32 workerCount; // 0x148
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AtomicInt bulletBodyCount; // 0x14C
		::System::Single inv_h; // 0x150
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Softness staticSoftness; // 0x154

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2STEPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
