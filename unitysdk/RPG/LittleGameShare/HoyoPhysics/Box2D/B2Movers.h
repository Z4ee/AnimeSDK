#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2CollisionPlane.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2PlaneSolverResult.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOVERS_B2CLIPVECTOR_OFFSET UNITYSDK_OFFSET(0xB655080)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOVERS_B2SOLVEPLANES_OFFSET UNITYSDK_OFFSET(0xB654BD0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Movers_TypeDefinitionIndex = 35172;

	class B2Movers : public ::System::Object
	{
	public:
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2PlaneSolverResult b2SolvePlanes(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1, ::System::Span_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2CollisionPlane> a2, ::System::Int32 a3)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2PlaneSolverResult(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::System::Span_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2CollisionPlane>, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOVERS_B2SOLVEPLANES_OFFSET))(a1, a2, a3);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2ClipVector(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 a1, ::System::Span_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2CollisionPlane> a2, ::System::Int32 a3)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2, ::System::Span_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2CollisionPlane>, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2MOVERS_B2CLIPVECTOR_OFFSET))(a1, a2, a3);
		}
	};
}
