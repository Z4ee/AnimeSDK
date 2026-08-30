#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Array_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2BodySim; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2BodyState; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2ContactSim; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2IslandSim; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2JointSim; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERSET_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C77C330)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1C77C360)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2SolverSet_TypeDefinitionIndex = 36091;

	class B2SolverSet : public ::System::Object
	{
	public:
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodySim*> bodySims; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2IslandSim*> islandSims; // 0x20
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyState*> bodyStates; // 0x30
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*> jointSims; // 0x40
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactSim*> contactSims; // 0x50
		::System::Int32 setIndex; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERSET__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERSET_CLEAR_OFFSET))(this);
		}
	};
}
