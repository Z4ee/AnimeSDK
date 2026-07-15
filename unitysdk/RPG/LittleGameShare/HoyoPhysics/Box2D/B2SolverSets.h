#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2Body; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2Joint; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2SolverSet; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2World; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERSETS_B2CREATESOLVERSET_OFFSET UNITYSDK_OFFSET(0x1AB15AC0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERSETS_B2DESTROYSOLVERSET_OFFSET UNITYSDK_OFFSET(0x1AB15B30)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERSETS_B2MERGESOLVERSETS_OFFSET UNITYSDK_OFFSET(0x1AB18320)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERSETS_B2TRANSFERBODY_OFFSET UNITYSDK_OFFSET(0x1AB18C30)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERSETS_B2TRANSFERJOINT_OFFSET UNITYSDK_OFFSET(0x1AB19060)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERSETS_B2TRYSLEEPISLAND_OFFSET UNITYSDK_OFFSET(0x1AB16C00)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERSETS_B2WAKESOLVERSET_OFFSET UNITYSDK_OFFSET(0x1AB15DE0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2SolverSets_TypeDefinitionIndex = 35231;

	class B2SolverSets : public ::System::Object
	{
	public:
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SolverSet* b2CreateSolverSet(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SolverSet*(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERSETS_B2CREATESOLVERSET_OFFSET))(a1);
		}

		static ::System::Void b2DestroySolverSet(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERSETS_B2DESTROYSOLVERSET_OFFSET))(a1, a2);
		}

		static ::System::Void b2WakeSolverSet(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERSETS_B2WAKESOLVERSET_OFFSET))(a1, a2);
		}

		static ::System::Void b2TrySleepIsland(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERSETS_B2TRYSLEEPISLAND_OFFSET))(a1, a2);
		}

		static ::System::Void b2MergeSolverSets(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERSETS_B2MERGESOLVERSETS_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2TransferBody(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SolverSet* a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SolverSet* a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Body* a4)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SolverSet*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SolverSet*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Body*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERSETS_B2TRANSFERBODY_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void b2TransferJoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SolverSet* a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SolverSet* a3, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Joint* a4)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SolverSet*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SolverSet*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Joint*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERSETS_B2TRANSFERJOINT_OFFSET))(a1, a2, a3, a4);
		}
	};
}
